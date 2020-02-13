#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUM 9
#define MAX_JOG 5
#define MAX_SORTEADOS 100
#define NUM_CARTELA 99

struct Usuario {
    char nome[10];
    int numeros[MAX_NUM];
    int pontos;
}jogadores[MAX_JOG];

void printaCartela(int posJogador){
    int count = 0;
    printf("%s", jogadores[posJogador].nome);
    for (int i = 0; i < MAX_NUM ; i++) {
        count++;
        printf("%d ", jogadores[posJogador].numeros[i]);
        if (count == 3) {
            printf("\n");
            count = 0;
        }
    }
    printf("\n");
}

int verificaRepSorteado(int numero, int listaSorteados[MAX_SORTEADOS]){
    for (int i = 0; i < MAX_SORTEADOS ; i++) {
        if (listaSorteados[i] == numero)
            return 1;
    }
    return 0;
}

int verificaCartela (int numero, int posJogador) {     //Função de verificação de numeros repetidos ou sorteados...
    for (int i = 0; i < MAX_NUM ; i++) {
        if (jogadores[posJogador].numeros[i] == numero)
            return 1;
    }
    return 0;
}

int main() {
    srand(time(NULL));
    int listaSorteados[MAX_SORTEADOS];
    int numRndCartela;
    int numRndSorteado;
    int ganhador = 0;

    puts("Gerando cartelas.....");

    for (int i = 0; i < MAX_JOG ; i++) {   // Gerador de cartelas...
        for (int j = 0; j < MAX_NUM ; j++) {
            numRndCartela = (rand() % NUM_CARTELA +1);
            if (verificaCartela(numRndCartela,i) == 1){
                j--;
                continue;
            }
            jogadores[i].numeros[j] = numRndCartela;
        }
    }

    for (int j = 0; j < MAX_JOG; j++) {
        printaCartela(j);
    }


    for (int l = 0; l < MAX_SORTEADOS ; ++l) {
        if (!ganhador) {
            numRndSorteado = (rand() % NUM_CARTELA +1);
            if (verificaRepSorteado(numRndSorteado, listaSorteados) == 1) {
                l--;
                continue;
            }
            listaSorteados[l] = numRndSorteado;
            for (int k = 0; k < MAX_JOG; ++k) {
                if (verificaCartela(numRndSorteado,k) == 1)
                    jogadores[k].pontos = jogadores[k].pontos + 1;
                if (jogadores[k].pontos == 9){
                    ganhador = 1;
                    printf("Jogador %d ganhou com a cartela: \n", k);
                    printaCartela(k);
                    printf("Lista de numeros sorteados: ");
                    for (int i = 0; listaSorteados[i] != 0 ; ++i) {
                        printf("%d ",listaSorteados[i]);
                    }
                    break;
                }
            }
        }
    }
    return 0;
}