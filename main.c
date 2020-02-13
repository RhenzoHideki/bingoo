#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUM 5

struct Usuario {
    char nome[10];
    int numeros[MAX_NUM];
    int pontos;
}jogadores[];

int verificaRepetido (int numeroRand, int posJogador) {
    for (int i = 0; i < MAX_NUM ; i++) {
        //printf("%d ", jogadores[posJogador].numeros[i]);
        if (jogadores[posJogador].numeros[i] == numeroRand){
            printf("Achou um repetido\n");
            return 1;
        }
    }
    return 0;
}


int main() {

    srand(time(NULL));
    int rando;

    puts("Gerando cartela.....");

    for (int i = 0; i < 5 ; i++) {
        for (int j = 0; j < MAX_NUM ; j++) {
            rando = (rand() % 99 +1);
            //printf("Numero randon gerado: %d\n", rando);
            if (verificaRepetido(rando,i) == 1){
                j--;
                continue;
            }
            jogadores[i].numeros[j] = rando;
        }
    }



    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < MAX_NUM ; i++) {
            printf("%d ", jogadores[j].numeros[i]);
        }
        printf("\n");
    }

    return 0;
}