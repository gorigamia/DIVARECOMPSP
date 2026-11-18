# Boot nativo confirmado

## Resultado observado

O executavel `build/diva/diva_boot.exe` executa o codigo japones ULJM05472 recompilado em C++, chega ao titulo e entra no menu original apos Start. Os testes nao usam interpretador/JIT de CPU nem uma imagem de tela simulada. O marco foi ampliado: a abertura agora reproduz video e audio e retorna ao titulo; World is Mine NORMAL chegou a CLEAR em teste de entradas sinteticas. O estado atual e as evidencias estao em [EXECUCAO.md](EXECUCAO.md).

| Verificação | Evidência |
| --- | --- |
| Título original | `local/evidence/diva-title.png` e `title-run.log` |
| Menu depois de Start | `local/evidence/diva-menu.png` e `menu-run.log` |
| Seleção de música | NEW GAME chegou à tela NORMAL de World is Mine; replay de 100 segundos terminou somente pelo limite programado. Evidência `local/evidence/diva-world-is-mine-select.png` e `world-is-mine-select-run.json` |
| Início de partida e falha | Replay de 180 segundos: confirmar World is Mine em 105 s, sem apertar notas; chegou à tela original MISS×TAKE / NOT CLEAR, com 7 WORST e Miku 3D. Parada apenas pelo limite programado, sem import ausente. Evidência `local/evidence/diva-world-is-mine-not-clear.png` e `world-is-mine-failure-run.json`. Não comprova música completa nem conclusão com sucesso. |
| Execução com janela | Teste de 32 segundos com `--show-test-window` |
| Start | Replay no serviço de controle: botão PSP Start em 22 s, solto em 22,3 s |
| Permanência no menu | Execução de 60 segundos com Start: parada apenas no limite programado, sem import ausente ou crash; evidência `local/evidence/diva-menu-60s.png` e `menu-60s-run.json` |
| Limite do teste | Parada voluntária pelo limite de execução; nenhum import ausente nesse percurso |
| Renderização | CPU, saída 480×272; título/menu reportam aproximadamente 30 FPS no contador herdado |
| Áudio | PCM não silencioso enviado pelo serviço de áudio ao dispositivo Windows; qualidade e sincronização não aferidas |

O valor de FPS é uma leitura do contador do protótipo, não um benchmark. O replay verifica o caminho do botão no jogo; uso físico de teclado e controles ainda depende de teste do usuário.

## Abrir e sair

Dois cliques em `Jogar-DIVA.cmd`: selecione a ISO japonesa no dialogo inicial. A tela de loading prepara ou confere os arquivos e depois abre o jogo e o log separado. O fluxo e os testes estao em [LAUNCHER.md](LAUNCHER.md). Os caminhos abaixo descrevem a execucao direta de desenvolvimento; no launcher, cada ISO tem seus arquivos e logs sob `local/disc-cache/<sha256>`.

O X do log o oculta sem encerrar o jogo. F2, com foco no jogo, mostra ou oculta essa janela. O log continua gravando em `analysis/native_interactive_ja.log`, e a sessão anterior fica em `analysis/native_interactive_ja_anterior.log`. A janela exibe até os últimos 128 KiB para limitar seu uso de memória; o arquivo mantém o registro completo. O launcher aceita `-NoLog` para começar com essa janela oculta.

Verificação em 16/11/2026: janela de log exibindo chamadas reais; Alt+F4 no log o ocultou e o jogo continuou com contador de frames ativo; F2 no jogo reabriu o mesmo log. O novo executável compilou com LLVM-MinGW. Um replay adicional de 55 segundos entrou em NEW GAME e chegou ao aviso original sobre o Memory Stick (`local/evidence/diva-newgame-notice.png`); isso ainda não comprova partida nem salvamento.

| Tecla | PSP |
| --- | --- |
| Enter | Start |
| Setas | Direcional |
| X | Círculo (confirmar na versão japonesa) |
| Z | Cruz |
| A / S | Quadrado / Triângulo |
| Q / W | L / R |
| Backspace | Select |
| F11 | Tela cheia |
| F2 | Mostrar/ocultar log |

Feche a janela para sair. Reatribuições são lidas de `config/controls.ini` no início. O launcher usa os caminhos relativos à própria pasta do projeto.

## Implementação deste marco

- Perfil DIVA com hash, módulo PdvApp e 228 imports efetivos.
- Extensão de análise isolada em `src/framework`: construtores C++ na região `.data` 0x08B73BA8..0x08B778BC e ponteiros de funções em seções alocadas. O checkout da base não foi modificado.
- Corpus atual: 197 unidades, 635.354 instruções emitidas e 168.230 entradas de blocos; números de análise automática, não cobertura de execução. Inclui a entrada tardia observada em 0x088525F4.
- Montagem dos AFS reais e leitura local, incluindo pedidos assíncronos que fazem I/O real e publicam resultados concluídos.
- Serviços adicionais de SDK, calendário/relógio, controles do sistema, caixas postais e interrupção de vblank. A callback de vblank executa código AOT original.
- Renderer: registros de estado imediato e limpeza de tela com posição de 16 bits sem atributo de cor, usando a cor ambiente. O reset imediato all-zero é aceito apenas sobre alvos zerados e estado sem textura/fog/stencil/logic-op; outras primitivas imediatas permanecem explicitamente não implementadas.
- Projeção de textura por matriz com fonte UV e denominador constante, usada pela animação do título; outros modos de geração continuam limitados. O snapshot da primitiva que antes parava o renderer foi aceito pelo replay após a adaptação; não houve comparação pixel a pixel com hardware.
- Hooks de gameplay/menu/FPS, atualização e presença Discord de K-On não são utilizados. O jogo conserva sua lógica original.
- Pilha nativa de 64 MiB para o corpus de diagnóstico sem otimização; a primeira tentativa com a pilha padrão atingiu stack overflow.

## Limites atuais

Os bloqueios MPEG iniciais foram substituidos por servicos e decodificacao reais em `native_media.cpp` e `diva_mpeg.inc`. A abertura completa e uma musica inteira foram verificadas, conforme [EXECUCAO.md](EXECUCAO.md). Ainda faltam validar todos os modos, musicas e dificuldades, sincronizacao contra hardware real, o fluxo de salvar/carregar do jogo, editor, MP3 personalizado, multiplayer, traducao inglesa e outros renderers. O renderer atual continua sendo CPU; o audio musical ADX executa o decoder AOT do jogo, e a abertura usa FFmpeg para H.264 e ATRAC3+.

Código e licenças da base K-On estão preservados em `src/runtime/LICENSE-KON`; a extensão de análise mantém `src/framework/LICENSE-PSPRECOMP`. O utilitário de preparação do ELF é separado, com suas próprias atribuições em `third_party/eboot_decrypt`.

## Reproduzir

```powershell
.\tools\build_game.ps1
py -3.9 tools/run_boot.py --seconds 25
py -3.9 tools/run_boot.py --seconds 32 --window --replay local/start-replay.txt
py -3.9 tools/run_boot.py --seconds 60 --replay local/start-replay.txt
```

Para regenerar o corpus com o perfil atual: `.\tools\build_game.ps1 -Regenerate`. A geração verifica o hash do ELF. Logs e capturas de cada execução anterior são arquivados em `local/boot/history`; o código gerado e os dados do disco permanecem locais.

Referência consultada para os registros imediatos de GE: https://github.com/hrydgard/ppsspp/blob/master/GPU/Software/SoftGpu.cpp. O tratamento implementado para este marco é limitado ao estado observado no DIVA.
