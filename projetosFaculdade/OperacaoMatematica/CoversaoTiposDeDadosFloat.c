#include <stdio.h>

int main(){

    //FLOAT
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisão de ponto fluante

    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    printf("\n\n");

    //FLOAT 2

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' e convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);

    printf("\n\n");
    
    //FLOAT 3
    int c = 10;
    int d = 3;
    float quociente = (float) c / d; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %.2f\n", quociente);


    printf("\n\n");
    return 0;

}