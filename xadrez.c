#include <stdio.h>

//Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0)
        return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Bispo
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0)
        return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

int main() {
    // Números de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    //Torre (recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    //Bispo
    printf("\nMovimento do Bispo:\n");
    
    moverBispoRecursivo(casasBispo);
    
    printf("\nBispo:\n");
    int movimentosVerticais = 3;
    int movimentosHorizontais = 3;
    for (int v = 0; v < movimentosVerticais; v++) {
        for (int h = 0; h < movimentosHorizontais; h++) {
            printf("Cima Direita\n");
        }
    }

    //Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    //Cavalo
    printf("\nMovimento do Cavalo:\n");
    int movimentosCavalo = 2; // número de "L"s
    int maxAltura = 2;
    int maxLargura = 1;

    for (int l = 0; l < movimentosCavalo; l++) {
        for (int cima = 0, direita = 0; cima <= maxAltura || direita <= maxLargura; cima++, direita++) {
            if (cima < maxAltura) {
                printf("Cima\n");
            } else if (direita < maxLargura) {
                printf("Direita\n");
            }
    
        }
    }

    return 0;

}