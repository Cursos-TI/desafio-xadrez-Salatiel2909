#include <stdio.h>
//recursividade
//torre
void mtorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    mtorre(casas - 1);
}

//bispo
void mbispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    mbispo(casas - 1);
}

//rainha
void mrainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    mrainha(casas - 1);
}

//cavalo Loop complexo
void mcavalo() {
    for (int i = 0; i < 3; i++) { 
        for (int j = 2; j >= 1; j--) { 
            if (j == 2) {
                printf("Cima\n");
            }
            printf("Cima\n");
        }
        for (int k = 0; k < 1; k++) { 
            printf("Direita\n");
        }
        printf("---\n");
    }
}

//BISPO Loops aninhados
void mbispol() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

int main() {
    int casastorre = 5;
    int casasbispo = 5;
    int casasrainha = 8;

    printf("Torre (recursivo):\n");
    mtorre(casastorre);
    printf("\n");

    printf("Bispo (recursivo):\n");
    mbispo(casasbispo);
    printf("\n");

    printf("Rainha (recursivo):\n");
    mrainha(casasrainha);
    printf("\n");

    printf("Cavalo (loops complexos):\n");
    mcavalo();
    printf("\n");

    printf("Bispo (loops aninhados):\n");
    mbispol();
    printf("\n");

    return 0;
}


