#include <stdio.h>


int main(){
    //criando um tabuleiro de batalha naval
    //variaveis
    int tabuleiro[10][10] = {0}; 
    char letra[10]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    int linha1 = 1;
    int coluna1 = 1;
    for (int k = 0; k < 3; k++) {
        tabuleiro[linha1][coluna1 + k] = 3;
    }

    
    int linha2 = 5;
    int coluna2 = 5;
    for (int k = 0; k < 3; k++) {
        tabuleiro[linha2 + k][coluna2] = 3;
    }

    int linha3 = 0;
    int coluna3 = 4;
    for (int k = 0; k < 3; k++) {
        tabuleiro[linha3 + k][coluna3 + k] = 3;
    }

    
    int linha4 = 1;
    int coluna4 = 7;
    for (int k = 0; k < 3; k++) {
        tabuleiro[linha4 + k][coluna4 + k] = 3;
    }
    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 10; j++){
            if(i == 0 && j == 0){
                printf("  ");
            } else if(i == 0 && j > 0){
                printf("%c ", letra[j-1]);
            } else if(j == 0 && i > 0){
                printf("%d ", i);
            } else {
                printf("%d ", tabuleiro[i-1][j-1]);
            }
        }
        printf("\n");
    }





return 0;
}