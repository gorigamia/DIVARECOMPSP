# Menu F1

O menu de configuracoes pertence ao port e aparece dentro da janela do jogo. Tem navegacao lateral com secoes Graficos, Som, Controles e Sistema. A secao ativa recebe moldura e luz turquesa; a linha selecionada recebe um detalhe rosa. A coluna direita mostra a fotografia da capa PSP e a fotografia do UMD fornecidas pelo usuario, preservando as proporcoes e a carcaca do UMD.

F1 abre e fecha. Esc volta ao jogo; Tab alterna o foco entre a barra lateral e as opcoes; setas navegam e alteram valores; Enter seleciona. Page Up e Page Down trocam a secao. O mouse seleciona secoes e linhas. Em controles, Start + Select abre o menu, L/R trocam a secao, o direcional navega e circulo confirma.

## Opcoes ligadas ao runtime

| Secao | Opcoes |
| --- | --- |
| Graficos | Janela ou tela cheia sem bordas; monitor; quatro tamanhos de janela; proporcao original PSP, 16:9, 4:3 ou preencher; escala de pixels nitidos, suave ou inteira; contador de FPS |
| Som | Volume geral; mudo; estereo ou mono; balanco; silenciar em segundo plano; tamanho do buffer aplicado na proxima abertura |
| Controles | Perfis de teclado, Xbox, PlayStation, Nintendo e HID generico; oito acoes PSP remapeaveis; captura de tecla no perfil de teclado |
| Sistema | Mostrar/ocultar log; voltar ao jogo |

As configuracoes sao salvas em `config/settings.ini` da instalacao, inclusive quando os dados do disco estao no cache do launcher. Os mapeamentos usam `config/controls.ini`, sao mantidos separados por perfil e entram em vigor na proxima abertura. Ao selecionar uma linha de teclado, pressione a tecla desejada; Esc cancela a captura.

O renderer atual continua sendo CPU, com resolucao interna original 480 x 272. Tamanho da janela, proporcao e filtro alteram a apresentacao da imagem pronta; nao sao renderizacao interna em HD nem uma alteracao do campo de visao do jogo. Tela cheia usa o monitor selecionado e sua frequencia atual, sem mudar o modo do Windows. Os tamanhos de janela sao limitados a area disponivel do monitor. O menu e ajustado proporcionalmente a janela, inclusive em monitores 16:9 e nos outros formatos.

O menu suspende o processamento do jogo nos limites do runtime, exclui esse intervalo do relogio do jogo e pausa a saida waveOut preservando os buffers de audio. A retomada conserva a ordem das amostras e a linha do tempo. Entradas usadas no menu nao sao entregues ao jogo. A sincronizacao durante uma musica completa ainda precisa de validacao.

XInput e HID ja permitem conexao/remocao de dispositivos durante a execucao. A nova leitura do controle no menu compartilha o mesmo bloqueio do estado XInput/HID para evitar concorrencia entre a interface e a thread do jogo. A presenca de suporte no codigo nao equivale a teste fisico de cada modelo de controle.

## Validacao

Build LLVM-MinGW concluido. Na interface real foram verificados: abertura do F1; mudanca do destaque de Graficos para Som e Controles; perfil Xbox; captura da tecla X para circulo; volume mudando de 100 para 95 e persistindo no arquivo. O volume foi restaurado a 100 depois do teste. O contador e o relogio do jogo ficaram parados enquanto o menu estava aberto. O teste inicial de arte usava imagens da ISO; depois da correcao do usuario, o desenho circular foi removido e substituido pelas fotografias reais da capa e do UMD.
