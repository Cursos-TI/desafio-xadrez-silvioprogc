#include <stdio.h>

int main() {
    
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    // Torre: move-se em linha reta (horizontal ou vertical)
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    // Bispo move-se na diagonal
  
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    // Rainha 8 casas para a esquerda
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
