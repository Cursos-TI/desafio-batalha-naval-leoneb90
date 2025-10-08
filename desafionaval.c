#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','H','I','J'};
    int tabuleiro[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j]= 0;
        }
    }
    printf ("\n  -==Batalha Naval==-\n");
    printf("   ");
    for(int j = 0; j < 10; j++){
    printf(" %c", linha[j]);
}
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%2d", i + 1);
        for(int j = 0; j < 10; j++){
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}