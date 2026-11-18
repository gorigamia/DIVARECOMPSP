# Abertura com ISO

`Jogar-DIVA.cmd` abre `build/diva/diva_launcher.exe`. O primeiro passo e o seletor nativo de arquivos; cancelar encerra sem iniciar a preparacao. O launcher pede a ISO em toda abertura.

Depois da selecao, uma janela de loading com fundo escuro, barra turquesa e detalhes rosa acompanha as leituras reais. O trabalho de preparacao roda fora da thread da interface. Ao terminar, o launcher inicia o executavel AOT e fecha a tela de loading. O jogo mantem seu proprio boot, logos, titulo e log opcional.

## Preparacao e compatibilidade

O preparador `tools/prepare_launch.py` usa Python 3.9 e o utilitario local `build/decrypt-llvm/eboot_decrypt.exe`. Essas dependencias ainda fazem parte desta instalacao de desenvolvimento; este marco nao e um pacote independente para distribuicao.

A identificacao exige DISC_ID ULJM05472 e o SHA-256 do ELF exato do perfil japones. Uma imagem com o mesmo identificador mas executavel diferente, como a traducao inglesa, e recusada. Nao ha recompilacao do codigo durante a abertura: o programa ja contem o corpus AOT, e prepara somente o executavel e os dados correspondentes da ISO fornecida.

O SHA-256 completo da ISO identifica seu cache em `local/disc-cache/<sha256>`. A primeira preparacao extrai os arquivos em uma pasta temporaria, verifica o ELF e publica o cache somente ao concluir. A ISO original e aberta somente para leitura. As proximas aberturas conferem tamanhos e hashes dos arquivos preparados e do ELF antes de reutiliza-los. A preparacao incompleta nao e anunciada como pronta. Cache substituido fica em uma pasta `.previous-...`; userdata e config sao preservados durante uma reparacao.

O cache possui os caminhos esperados pelo runtime: `analysis/extracted/jp`, `local/japan/EBOOT.ELF` e `userdata/ms0`. Os saves deste fluxo pertencem ao cache da ISO; os saves anteriores da execucao direta de desenvolvimento nao sao migrados automaticamente. A configuracao geral do port usa `config/settings.ini` na pasta principal.

`local/launcher.log` registra a ultima preparacao. O log do jogo fica em `local/disc-cache/<sha256>/analysis/native_interactive_ja.log`. O X dessa janela apenas a oculta; F2 no jogo a reabre. `tools/play.ps1 -NoLog` inicia pelo mesmo seletor com o log oculto. `tools/play.ps1 -DirectBoot` conserva a entrada antiga de diagnostico com os arquivos ja preparados na raiz.

## Verificacao em 16/11/2026

- Build do launcher Win32 com LLVM-MinGW concluido.
- Primeira selecao japonesa: identificacao, preparacao, extracao e publicacao do cache concluidas.
- Segunda selecao japonesa: conferencia do cache e boot real observados; jogo e janela de log apareceram. Captura ao limite de 26 segundos em `local/evidence/diva-launcher-title.png` mostra PRESS START BUTTON. A parada registrada foi o limite de diagnostico.
- Selecao inglesa: preparador retornou erro de edicao incompativel, sem iniciar jogo. Registro em `local/launcher-incompatible-test.log`.

Este fluxo nao elimina os limites do runtime: abertura MPEG e jogo completo ainda precisam de implementacao/validacao, conforme `BOOT.md`.
