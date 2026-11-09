# Jogo da Vida de Conway
O Jogo da Vida de Conway é um jogo sem jogador, onde toda a progressão do jogo depende exclusivamente do seu estado incial, e sua evolução ocorre seguindo as regras do jogo por toda sua execução.

## Como funciona
O jogo funciona em uma grade cartesiana de dois eixos, onde existem células que ocupam as posições dessa grade. As células possuem apenas dois estados, vivo ou morto. Cada célula interage com as oito células ao redor dela(horizontais, verticais e diagonais adjascentes) e seguem regras para determinar seu estado.

## Regras
As regras do jogo seguem a seguinte ordem:
1. Qualquer célula com menos de duas vizinhas morre por subpopulação.
2. Qualquer célula com duas ou três vizinhas vivem para a próxima geração.
3. Qualquer célula com mais de três vizinhos morre por sobrepopulação.
4. Qualquer célula morta vira uma célula viva se tiver exatamente três vizinhos vivos ao seu redor, como se fosse reprodução.

## Stack
Foi escolhido C para a criação do projeto.