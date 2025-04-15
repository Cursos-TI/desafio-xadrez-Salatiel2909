#include <stdio.h>

int main(){
    int t, b = 1, r = 1;

    printf("torre\n");
    for (int t = 1; t <= 5; t++) {
        printf("direita\n");
    }

    printf("bispo\n");
    while (b <= 5)
    {
        printf("cima direita\n");
        b++;
    }
    
    printf("rainha\n");
    do {
        printf("esquerda\n");
        r++;
    } while (r <= 8);

    return 0;
}