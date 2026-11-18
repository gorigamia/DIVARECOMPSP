# Execucao nativa: verificacoes de 16/11/2026

O perfil japones ULJM05472 agora reproduz a abertura original e executou uma musica inteira ate CLEAR. Isso amplia o marco anterior de boot/menu; ainda nao constitui uma matriz de compatibilidade de todas as musicas e modos.

| Percurso | Resultado medido | Evidencia local |
| --- | --- | --- |
| Decoder de video completo | 2.818 pacotes e 2.818 frames originais em 480 x 272, sem falha reportada | `local/media-verification.log` |
| Abertura dentro do jogo | Video H.264 e audio ATRAC do PSMF; encerramento, limpeza dos objetos e retorno ao titulo; teste de 155 segundos terminou somente pelo limite programado | `local/validation/movie/run.json`, `run.log`, capturas periodicas e `local/evidence/diva-opening-return-title.png` |
| Pular a abertura | Start em 45 segundos encerrou o player apos 318 frames; execucao continuou ate o limite de 70 segundos | `local/validation/movie-skip/run.json` e `run.log` |
| World is Mine / NORMAL | Musica completa, resultado CLEAR / GREAT, 504.500 pontos e aviso de desbloqueio de HARD; teste de 300 segundos terminou somente pelo limite programado | `local/validation/song/run.json`, `run.log`, capturas periodicas e `local/evidence/diva-song-autoplay-result.png` |
| Servico de saves | Gravacao atomica, recarga por nova instancia, metadados e icone preservados; arquivos corrompidos e buffers curtos rejeitados | `local/save-verification.log` |
| Servicos de kernel | Status/poll/exclusao de eventos, exclusao de mutex com liberacao de espera, suspensao/retomada/termino/exclusao de threads e autoexclusao com liberacao de pilha | `local/service-verification.log` |

O teste da musica usa **entradas sinteticas de diagnostico**, desligadas no launcher normal. Ele observa a nota corrente e seu tempo restante para entregar os botoes ao mesmo servico de controle do jogo. Nao escreve na pontuacao, no julgamento, na barra de vida ou na chart. Esse teste comprova o percurso de uma partida com sucesso, mas nao mede latencia do teclado/controle fisico. Os testes longos silenciaram a saida do dispositivo para nao interferir no uso do PC; PCM real continuou sendo decodificado e processado pelo relogio de audio. Nao foi feita afericao audiovisual contra um PSP.

## Midia

`src/runtime/native_media.cpp` substitui o antigo backend indisponivel. Usa o SDK FFmpeg compartilhado LGPL em `third_party/ffmpeg`, carregado por caminho local explicito. A configuracao do codec e verificada em execucao; builds com GPL ou nonfree sao recusados por esse backend. O arquivo de procedencia registra URL, variante e SHA-256 do pacote baixado, e a licenca e preservada junto dele. A estrutura do SDK nao e instalada no Windows nem adicionada ao PATH.

O video e lido do PMF da ISO selecionada. O runtime compara o cabecalho solicitado pelo jogo com o arquivo montado e verifica os bytes entregues pelas callbacks originais ao ringbuffer antes de decodifica-los. O demuxer generico do FFmpeg identifica o H.264, mas nao expoe o ATRAC privado desta abertura: o adaptador percorre os pacotes PES privados, remonta frames ATRAC3+ e preserva seus timestamps. Os pixels e as amostras PCM decodificados sao publicados nos buffers PSP solicitados pelo jogo, com conclusao cooperativa das chamadas de codec. A logica do player, a agenda de reproducao e as callbacks permanecem no codigo AOT original.

O adaptador cobre o PMF presente neste disco, com video 480 x 272 / RGBA8888 e audio ATRAC3+ de 44,1 kHz. Nao e uma alegacao de compatibilidade com todo formato MPEG/PSMF de outros jogos. Outros formatos e modos devem permanecer explicitos, sem frames ou amostras de sucesso ficticios.

Referencias tecnicas: [PSPSDK pspmpeg.h](https://github.com/pspdev/pspsdk/blob/master/src/mpeg/pspmpeg.h), [PPSSPP sceMpeg](https://github.com/hrydgard/ppsspp/blob/master/Core/HLE/sceMpeg.cpp), [FFmpeg](https://ffmpeg.org/download.html). Os projetos PSP fornecidos foram consultados como referencias de comportamento; o adaptador DIVA esta separado em `src/runtime/diva_mpeg.inc`.

## Reproduzir

```powershell
cmake --build build/diva --target diva_boot diva_media_verify diva_savedata_verify diva_service_verify -j 4
build/diva/diva_media_verify.exe .
build/diva/diva_savedata_verify.exe .
build/diva/diva_service_verify.exe .
py -3.9 tools/run_boot.py --seconds 155 --output local/validation/movie --userdata local/tests/movie-storage --mute --capture-interval-ms 20000
$env:DIVA_DIAGNOSTIC_AUTOPLAY='1'
py -3.9 tools/run_boot.py --seconds 300 --replay local/song-replay.txt --output local/validation/song --userdata local/tests/song-storage --mute --capture-interval-ms 20000
Remove-Item Env:DIVA_DIAGNOSTIC_AUTOPLAY
```

Os replays ficam locais, pois os tempos de transicao refletem o ambiente de teste. Os testes usam armazenamento separado dos dados do jogador. O launcher normal nao define a variavel de diagnostico. As limitacoes restantes incluem a verificacao do salvamento no fluxo do jogo, das demais musicas e dificuldades, do editor, do multiplayer e da sincronizacao em hardware real.
