#include <stdio.h>

int main(){
    
    int a = 10;
    int b = 5;

    //Operadores Aritméticos
    int soma = a + b;
    int substracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;

    //Operadores de Atribuição
    a += 2;
    b *= 3;

    //Operadores de incremento e Decremento
    a++;
    b--;

    //Exibindo os resultados
    printf("Resultados das operações\n\n");
    
    printf("Soma: %d\n", soma);

    printf("Subtração: %d\n", substracao);

    printf("Multiplicação: %d\n", multiplicacao);

    printf("Divisão: %d\n", divisao);

    printf("Novo valor de a (após += 2 e ++): %d\n", a);

    printf("Novo valor de b (após *= 3 e --): %d\n", b);

        printf("\n\n");

    return 0;

}
