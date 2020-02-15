#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define MAX_NUM 16
#define NUM_CARTELA 80
#define MAX_JOG 10

struct Usuario {
    char nome[10];
    int numeros[MAX_NUM];
    int pontos;
}jogadores[MAX_JOG];

void ordenaLista(int aux[]) {       //Ordena listas
    for (int i = 0; aux[i] != 0 ; ++i) {
        for (int j = 0; aux[j] != 0; ++j) {
            if (aux[j] > aux[i]) {
                int temp = aux[i];
                aux[i] = aux[j];
                aux[j] = temp;
            }
        }
    }
}

void printaCartela(int posJogador){   //Mostra cartelas
    float count = 0;
    printf("%s\n", jogadores[posJogador].nome);
    for (int i = 0; i < MAX_NUM ; i++) {
        count++;
        printf("%02d ", jogadores[posJogador].numeros[i]);
        if (count == sqrtf(MAX_NUM)) {
            printf("\n");
            count = 0;
        }
    }
    puts("");
}

int verificaRepSorteado(int numero, int listaSorteados[NUM_CARTELA]){  //Verifica repeticao de numero sorteado..
    for (int i = 0; i < NUM_CARTELA ; i++) {
        if (listaSorteados[i] == numero)
            return 1;
    }
    return 0;
}

int verificaCartela (int numero, int posJogador) {     //Verifica numeros repetidos na cartela...
    for (int i = 0; i < MAX_NUM ; i++) {
        if (jogadores[posJogador].numeros[i] == numero)
            return 1;
    }
    return 0;
}

int main() {
    srand(time(NULL));
    int listaSorteados[NUM_CARTELA];
    int numRndCartela;
    int numRndSorteado;
    int ganhador = 0;
    int numJogadores=0;

    while(1){                  // Entrada da quantidade de jogadores..
        printf("Digite a quantidade de jogadores (máximo 10): ");
        scanf("%d",&numJogadores);
        if (numJogadores > 0 && numJogadores < 11)
            break;
    }

    for (int i1 = 0; i1 < numJogadores ; ++i1) {  //Entrada dos nomes dos jogadores..
        char nomeTemp[10];
        printf("Insira o nome do %d jogador: ",i1+1);
        scanf(" %[^\n]s", nomeTemp);
        strcpy(jogadores[i1].nome, nomeTemp);
    }
    puts("");

    for (int m = 0; m < NUM_CARTELA ; ++m) {    //Inicia com 0 em todas posições da lista para não ter lixo no print...
        listaSorteados[m] = 0;
    }
    puts("Gerando cartelas.....");

    puts("");

    for (int i = 0; i < numJogadores ; i++) {        // Gerador de cartelas...
        for (int j = 0; j < MAX_NUM ; j++) {
            numRndCartela = rand() % NUM_CARTELA+1;
            if (verificaCartela(numRndCartela,i) == 1){
                j--;
                continue;
            }
            jogadores[i].numeros[j] = numRndCartela;
        }
    }
    for (int n = 0; n < numJogadores ; ++n) {        //Ordenando cartela dos jogadores...
        ordenaLista(jogadores[n].numeros);
    }

    for (int j = 0; j < numJogadores; j++) {         //Mostrando Cartelas
        printaCartela(j);
    }


    for (int l = 0; l < NUM_CARTELA ; ++l) {        //Gerando os numeros sorteados e verificando se não repetem..
        if (!ganhador) {
            numRndSorteado = rand() % NUM_CARTELA+1;
            if (verificaRepSorteado(numRndSorteado, listaSorteados) == 1) {
                l--;
                continue;
            }
            listaSorteados[l] = numRndSorteado;
            for (int k = 0; k < numJogadores; ++k) {       //Verificando se número sorteado está na cartela dos jogadores e adicionando pontos..
                if (verificaCartela(numRndSorteado,k) == 1)
                    jogadores[k].pontos = jogadores[k].pontos + 1;
                if (jogadores[k].pontos == MAX_NUM){         //Se o jogador chegar a 9 pontos ele ganhou, mostra nome e cartela do vencedor
                    ganhador = 1;
                    printf("O seguinte jogador ganhou com a cartela: \n", jogadores[k].nome);
                    printaCartela(k);
                    printf("Lista de numeros sorteados:\n");
                    ordenaLista(listaSorteados);
                    int count = 0;
                    for (int i = 0; listaSorteados[i] != 0 ; ++i) {     //Mostra lista de numeros sorteados já ordenados...
                        if (count == 10) {
                            count = 0;
                            puts("");
                        }
                        printf("%02d ",listaSorteados[i]);
                        count++;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}