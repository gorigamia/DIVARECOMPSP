# Primeiro marco: ferramentas e executáveis analisados

Este relatório registra a etapa anterior ao boot. O estado atual, com título e menu já executados, está em [BOOT.md](BOOT.md).

## Comprovado

- ZIP PSPRecomp validado pelo comentário GitHub contendo a revisão f6e7d415c7f447b934cc3865a31eb725f353d659.
- SHA-256 do ZIP: c5a38ab1f274d9e4cc821209b989252d241ad6f7e2e57d9a51ce52c7688df398.
- Patch original K-On aplicado e validado com `git apply --reverse --check`; perfis de outros jogos excluídos da extração.
- Framework compilado com LLVM-MinGW/Clang 22.1.8, Release: psp_analyze, psp_recomp, dump_function e psprecomp_tests.
- CTest: 1/1 teste aprovado. O teste agrega os casos do framework; não testa gameplay do DIVA.
- O primeiro teste falhou ao renomear arquivos no TEMP padrão do ambiente; passou usando `local/test-temp`. O script de build preserva e restaura TEMP/TMP.
- MSVC configurou, mas o MSBuild ficou sem progresso; as duas tentativas foram interrompidas. O caminho validado é LLVM.
- Utilitário independente de preparação do executável compilado a partir da referência The 3rd Birthday, preservando código e avisos GPL. Não altera a escolha de K-On para runtime.
- Executável japonês preparado com sucesso e as duas variantes analisadas.

## Inventário medido

| Propriedade | Resultado nas duas variantes |
| --- | --- |
| Disc ID | ULJM05472 |
| Módulo | PdvApp, versão 1.1 |
| ELF | ELF32 little endian, ET_EXEC; não é PRX relocável |
| Entry point | 0x08804000 |
| Segmento carregável | 0x08804000, 3.727.600 bytes de arquivo, 4.707.328 bytes de memória |
| Relocations reportadas | 0 |
| Imports | 228 em 28 bibliotecas |
| Funções candidatas automáticas | 12.407 |
| Instruções únicas reconhecidas como código | 457.910 |
| Ocorrências de instruções não suportadas | 15 em duas funções candidatas |
| Funções truncadas reportadas | 0 |

Esses números vêm de análise estática automática. O segmento possui flags RWX; isso pode fazer o analisador alcançar dados como código. Não equivalem a cobertura comprovada nem a 12.407 funções confirmadas manualmente.

As duas funções candidatas com instruções não suportadas são 0x089D3890 e 0x08A4636C. É necessário distinguir instruções reais de dados antes de corrigir decoder ou excluir regiões.

## Áudio: ajuste importante da adaptação

O DIVA importa 16 funções `sceMp3`, 10 `sceAudio`, 3 `sceVaudio` e 26 `sceMpeg`; o inventário está em `local/japan/analysis_imports.csv`. A presença de um import não prova que toda chamada seja exercitada no boot ou em uma música.

A busca nos fontes de runtime da base K-On não encontrou `sceMp3` nem `sceVaudio`. Seu suporte ATRAC não substitui essas APIs. É preciso implementar o contrato PSP de buffers, handles, decode e temporização MP3, aproveitando o mixer/saída host onde couber. Ainda falta conferir cobertura por NID e decodificação usada nos recursos DIVA.

## Comparação dos executáveis

ELF japonês SHA-256: 2f4aeea0afeeae0f001f2e4783aaeb41fca1f8b46eef0673d5774198821159ca.

ELF traduzido SHA-256: 785576c10a927050569bb1cc283798b4f6bb2ac6f4dc5f45d3c387e6ff04acc4.

Os program headers coincidem. O conteúdo do segmento carregável difere em 44.863 bytes, com a primeira diferença em 0x08B245A8. Mesmos imports e endereços iniciais não bastam para declarar os executáveis intercambiáveis. A comparação de bytes não classifica todas as alterações como textos.

## Reprodução

```powershell
py -3.9 tools/prepare_framework.py "C:\Users\gorigamia\Downloads\PSPRecomp-f6e7d415c7f447b934cc3865a31eb725f353d659.zip"
.\tools\build_framework.ps1
cmake -S tools/decrypt -B build/decrypt-llvm -G "MinGW Makefiles" -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Release
cmake --build build/decrypt-llvm --parallel 2
py -3.9 tools/analyze_game.py "C:\Users\gorigamia\Downloads\Hatsune Miku - Project Diva (Japan, Asia).iso" --variant japan
py -3.9 tools/analyze_game.py "C:\Users\gorigamia\Downloads\Hatsune Miku - Project Diva (English v1.0).iso" --variant english
```

## Primeira geração AOT concluída

`psp_recomp` concluiu a tradução automática do ELF japonês em modo conservador (`PSPRECOMP_PLAIN_AUTO=1`), sem hooks de gameplay/FPS de K-On. Produziu 193 unidades de tradução, mais o registro, 457.910 instruções emitidas, 119.839 entradas de blocos registradas e 228 wrappers de imports. Os arquivos C++ somam aproximadamente 61,6 MB. Isso comprova emissão de fontes, não compilação integral, execução ou equivalência comportamental.

Perfil inicial medido: `config/diva-japan.json`. Reprodução da geração: `.\tools\generate_game.ps1`. Log: `local/japan/codegen.log`. Relatório: `generated/japan/auto_codegen_report.json`.

Verificação adicional: `clang++ -std=c++20 -fsyntax-only` passou em `generated_unit_0000.cpp` e `generated_registry.cpp` com os headers do framework. Trata-se de uma amostra e não da compilação das 193 unidades. Os scripts Python passaram em `py_compile`; os dois scripts PowerShell passaram no parser nativo.

Os executáveis extraídos, relatórios detalhados e fontes gerados ficam locais e ignorados pelo Git. Nenhum port DIVA foi ligado ou executado ainda.
