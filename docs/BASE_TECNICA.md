# Base técnica escolhida: K-On! Houkago Live!! Recompiled

Decisão: usar https://github.com/EDGX73/KOn-Houkago-Live-Recompiled como base principal da adaptação Windows x64 de Project DIVA ULJM05472.

## Evidências inspecionadas no código fornecido

| Necessidade | Implementação na base K-On | Limite |
| --- | --- | --- |
| Recompilação estática Allegrex | tools/psprecomp_patch.py fixa PSPRecomp f6e7d415c7f447b934cc3865a31eb725f353d659 e aplica kon-port.patch | Patch exige revisão para separar alterações genéricas das específicas |
| Áudio de jogo musical | src/native_audio.hpp, native_audio_mixer.hpp, native_atrac.hpp e handlers sceAtrac3plus em boot_probe.cpp | Latência e sincronização ainda não medidas no DIVA |
| Buffer configurável | boot_probe.cpp lê audio_block_ms | Não prova precisão do julgamento das notas |
| Gráficos nativos | native_vulkan_* e testes de renderer | Compatibilidade com comandos GE do DIVA ainda desconhecida |
| Teclado e controles | native_controls.* | Mapeamento e prompts exigem adaptação |
| Preparação local | native_install.hpp, native_build.hpp | Validação de ISO e hashes são de K-On |

O gênero é um indício útil; a decisão se apoia nos subsistemas concretos acima. Não há evidência de que DIVA e K-On usem o mesmo motor.

## Comparação de adequação

| Projeto | Avaliação para este início |
| --- | --- |
| K-On | Escolhido: pipeline AOT e subsistemas de áudio pertinentes, Windows já contemplado |
| Sims 2 | Alternativa forte de framework e perfis; menor proximidade das necessidades de um jogo musical |
| God of War | Pipeline e runtime alternativos, incluindo componentes PPSSPP; adaptação específica substancial |
| The 3rd Birthday | Referência de preparação e runtime; melhorias de câmera e combate não ajudam o primeiro marco do DIVA |
| Pure | Estrutura PortableKit e ferramentas de fidelidade úteis; perfil de corrida e recursos adicionais ampliam o escopo inicial |

Esta é uma avaliação de adequação do código disponível, não um benchmark ou prova de superioridade dos projetos.

## Organização inicial

`third_party/kon_base/` preserva a cópia do ZIP fornecido, com licença, código e ferramentas originais. Ainda contém identidade e pressupostos de K-On. Não é um port DIVA e seu launcher não deve ser apresentado como tal. A procedência do ZIP está em `local/base-provenance.json`.

Primeira dependência: PSPRecomp na revisão fixada pela base. A obtenção usa o script original, com checkout esparso, preservando atribuições e patch.

## Ordem da adaptação

1. Compilar ferramentas de análise e geração do framework.
2. Preparar o ELF japonês; usar o ELF inglês já disponível para investigação paralela de estrutura, sem presumir equivalência.
3. Criar perfil DIVA com identidade, segmentos, relocations e imports efetivamente medidos.
4. Revisar o patch do framework e gerar AOT sem hooks de K-On.
5. Adaptar runtime e testar primeiro boot com logs limitados; implementar os serviços necessários.
6. Validar menu e uma música completa, incluindo áudio, julgamento, resultados e salvamento.

Não transferir `apply_logic_rate_patch.py`, endereços 0x088..., hashes, contagem de 238 imports, paths ULJM05709, hooks de músicas, rede, atualização automática ou Discord como se fossem do DIVA. Não mudar o relógio de jogo antes de verificar fidelidade.

Licença do código próprio da base: MIT (EDGX73), com obrigações independentes para componentes terceiros. Preservar os avisos originais.
