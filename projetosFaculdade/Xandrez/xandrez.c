#include <stdio.h>

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base
    
    printf("Direita\n"); // Movimento para a direita
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return; // Caso base
    
    printf("Diagonal Superior Direita\n"); // Movimento na diagonal
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // Caso base
    
    printf("Rainha: Direita\n"); // Movimento em qualquer direção
    moverRainha(casas - 1); // Chamada recursiva
}


int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5); // Passando o valor diretamente
    printf("\n");
    
    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(5); // Passando o valor diretamente
    printf("\n");
    
    
    printf("Movimento da Rainha:\n");
    moverRainha(8); // Passando o valor diretamente
    printf("\n");
    
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            if (i == 0) {
                printf("Cima\n"); // Primeira parte do L
                continue;
            }
            printf("Cima\n"); // Segunda parte do L
            printf("Direita\n"); // Final do movimento em L
            break;
        }
    }
   
    
    return 0;
}