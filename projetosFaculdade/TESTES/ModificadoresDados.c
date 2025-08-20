#include <stdio.h>

int main(){
    
    //UNSIGNED
    int numeroSinal = 3000000000; //Esse valor escede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    printf("\n\n");

    //LONG
    int numeroNormal = 214783647; //Valor máximo de int
    long int numeroGrande = 214783647;

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

    printf("\n\n");
    return 0;
}