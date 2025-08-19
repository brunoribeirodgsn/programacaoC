#include <stdio.h>


int main(){

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o numero 1:\n");
    scanf("%d", &numero1);

    printf("Digite o numero 2:\n");
    scanf("%d", &numero2);

    //Operação de soma
    soma = numero1 + numero2;
    
    //Operação de subtração
    subtracao = numero1 - numero2;

    //Operação de multiplicação
    multiplicacao = numero1 * numero2;

    //Operação de divisão
    divisao = numero1 / numero2;

    printf("Resultados das operações\n\n");
    printf("A soma é: %d\n" , soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    printf("\n\n");
    return 0;
    
}