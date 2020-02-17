# Manual
O jogo deve ser executado em sitemas operacionais Linux.
Baixe o arquivo **bingoo** e utilizando o terminal inicie ele conforme o codigo a baixo (verifique que você está na 
raiz onde o programa foi salvo):

`./bingoo`

Você pode escolher até 10 jogadores para jogar, após digitar a quantidade de
jogadores você deve inserir o nome de cada jogador com no máximo 10 caracteres.

O programa irá gerar as cartelas para cada jogador e começará a sortear números e fará a verificação
automaticamente, quando uma cartela for preenchida por completo será anunciado o vencedor, mostrando a
 cartela vencedora e os numeros sorteados.
 
# Sobre o código

O programa consiste em gerar números aleatórios e salva-los em vetores formando assim as cartelas dos jogadores e também
gerar a lista de numeros sorteados. A geração dos números é verificada por duas funções para que não haja repetição
de números no mesmo vetor.

Possui também uma função para ordenar os números do vetor de forma ascendente e outra que mostra na tela o conteudo
 dos vetores.

Para alterar a quantidade de números na cartela edite o valor do seguinte define:
`#define MAX_NUM 9`.

Para alterar a variedade de números que aparecem na cartela edite o valor do seguinte define:
`#define NUM_CARTELA 80`.

Para alterar a quantidade maxima de jogadores edite o valor do seguinte define: 
`#define MAX_JOG 10`.


# Resolução

Creio ter atendido todos os requisitos propostos.