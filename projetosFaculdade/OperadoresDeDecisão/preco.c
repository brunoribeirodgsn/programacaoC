#include <stdio.h>

int main(){
    int preco1 = 76.0;
    int preco2 = 76.0;

    if (preco1 > preco2){
        printf ("Preço 1 é maior que o preço 2");
    } else if (preco1 < preco2){
        printf ("Preço 1 é menor que o preço 2");
    } else {
        printf ("Os preços são iguais!");
    }

    printf("\n\n");
    return 0;
}