#include <stdio.h>

int main(){
    int t, b = 1, r = 1, c = 0;


    printf("torre\n");
    for (int t = 1; t <= 5; t++) {
        printf("direita\n");
    }
        printf("\n");
    printf("bispo\n");
    while (b <= 5)
    {
        printf("cima direita\n");
        b++;
    }
        printf("\n");
    printf("rainha\n");
    do {
        printf("esquerda\n");
        r++;
    } while (r <= 8);
        printf("\n");
    printf("cavalo\n");

    while (c < 3)
    {
        for (int movimento = 0; movimento < 1; movimento++)
        {
            printf("baixo\n");
        }
        c++;
    }
    for (int mov1 = 0; mov1 < 1; mov1++)
    {
        printf("esquerda");
    }
    
    

    return 0;
}