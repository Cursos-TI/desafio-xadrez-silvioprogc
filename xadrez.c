#include <stdio.h>

int main() {
    // Número de casas para movimentar cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    //Torre
    printf("Movimento da Torre (usando for):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    //Bispo 
    printf("\nMovimento do Bispo (usando while):\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    //Rainha
    printf("\nMovimento da Rainha (usando do-while):\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    //Cavalo
    printf("\nMovimento do Cavalo:\n");

    int passosBaixo = 2;
    int passosEsquerda = 1;

    for (int movimento = 1; movimento <= 1; movimento++) {
               int passo = 1;
        while (passo <= passosBaixo) {
            printf("Baixo\n");
            passo++;
        }        
        int k = 0;
        while (k < passosEsquerda) {
            printf("Esquerda\n");
            k++;
        }
    }

    return 0;
}
