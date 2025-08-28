#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

// Definindo as variáveis para a carta 1
char carta1[10]= "carta1";
char pais1[15]= "Brasil";
char capital1[20]= "Brasilia";
char codigopais1[10]= "A01";
int populacao1=200000000;
int pontosTuristicos1= 1000;
float area1= 8500000.00;
float pib1= 2000000000000.00;
float densidadePopulacional1= 23.53;
float pibPerCapita1= 10000.00; 

// Definindo as variáveis para a carta 2
char carta2[10]= "carta2";
char pais2[15]= "Argentina";
char capital2[20]= "Buenos Aires";
char codigopais2[10]= "A02";
int populacao2= 45000000;
int pontosTuristicos2= 500;
float area2= 2780000.00;
float pib2= 3000000000000.00;
float densidadePopulacional2= 16.19;
float pibPerCapita2= 66666.66;

int cartaEscolhida, atributo1, atributo2,resultado1, resultado2;

//calculo da densidade populacional e pib per capita
densidadePopulacional1= (float) populacao1 / area1; 
densidadePopulacional2= (float) populacao2 / area2;
pibPerCapita1= (float) pib1 / populacao1;
pibPerCapita2= (float) pib2 / populacao2;
 /*
printf("Densidade populacional: %.2f\n", densidadePopulacional1);
printf("PIB per capita: %.2f\n", pibPerCapita1);

printf("Densidade populacional: %.2f\n", densidadePopulacional2);
printf("PIB per capita: %.2f\n", pibPerCapita2);*/

// Escolha de atributo
printf(" ### Super Trunfo ### \n");
printf("\nEscolha o atributo que deseja comparar:\n");
printf("1. Populacao\n");
printf("2. Pontos turisticos\n");
printf("3. PIB\n");
printf("4. Area\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
scanf("%d", &atributo1);



switch (atributo1) {

case 1: printf("\nVocê escolheu o atributo população\n");
(resultado1= populacao1 > populacao2) ? 
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 2: printf("\nVocê escolheu o atributo pontos turisticos\n");
(resultado1= pontosTuristicos1 > pontosTuristicos2) ? 
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 3: printf("\nVocê escolheu o atributo PIB \n");
(resultado1= pib1 > pib2) ?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 4: printf("\nVocê escolheu o atributo area\n"); 
(resultado1= area1 > area2) ?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 5: printf("\nVocê escolheu o atributo densidade populacional\n"); 
(resultado1= densidadePopulacional1 < densidadePopulacional2) ?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 6: printf("\nVocê escolheu o atributo PIB per capita\n");
(resultado1=pibPerCapita1 > pibPerCapita2) ?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

default: 

printf("Atributo inválido!\n");
    break;
}

printf(" Escolha o segundo atributo:\n");
printf("1. Populacao\n");
printf("2. Pontos turisticos\n");
printf("3. PIB\n");
printf("4. Area\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
scanf("%d", &atributo2);

if(atributo1 == atributo2){
    printf("Você escolheu o mesmo atributo\n");
    return 0;
}

switch (atributo2) {
case 1: printf("\nVocê escolheu o atributo população\n"); 
(resultado2= populacao1 > populacao2) ? 
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n"); 
    break;

case 2: printf("\nVocê escolheu o atributo pontos turisticos\n"); 
(resultado2= pontosTuristicos1 > pontosTuristicos2) ?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 3: printf("\nVocê escolheu o atributo PIB \n"); 
(resultado2= pib1 > pib2) ?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 4: printf("\nVocê escolheu o atributo area\n"); 
(resultado2= area1 > area2) ?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 5: printf("\nVocê escolheu o atributo densidade populacional\n");
(resultado2= densidadePopulacional1 < densidadePopulacional2)?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

case 6: printf("\nVocê escolheu o atributo PIB per capita\n");
(resultado2= pibPerCapita1 > pibPerCapita2) ?
printf("Jogador 1 VENCEU!!\n") : printf("Computador VENCEU!!\n");
    break;

default:
printf("Atributo inválido!\n");
    break;
}
    if(resultado1 && resultado2){
        printf("\nVocê venceu!\n FIM DE JOGO\n");
    } else if(resultado1 != resultado2){
        printf("\nEmpatou!\n FIM DE JOGO\n");
    } else {
        printf("\nVocê perdeu!\n FIM DE JOGO\n");
    }

 return 0;
}