#include <stdint.h>

int main(){

    char codigo[10], codigo2[10];
    char nomeCidade[50], nomeCidade2[50];
    char estado[3], estado2[3];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontoTuristico, pontoTuristico2;

    printf("CADASTRE A CARTA Nº1\n\n");
    
    printf("Digite o código da Carta: ");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);

    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área em Km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Numeros de Pontos Tutisticos: ");
    scanf("%d", &pontoTuristico);

    printf("\n\n");

    printf("CARTAS Nº 1\n\n");
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("Estado: %s\n", estado);
    printf("População: %d pessoas\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontoTuristico);

    //fim do cadastro das cartas 1

    printf("\n");

    printf("OBRIGADO POR CADASTRAR CARTA 1\n\n");

    //inicio do cadastro das cartas 2

    printf("CADASTRE A CARTA Nº2\n\n");

    printf("Digite o código da Carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade2);

    printf("Digite o estado: ");
    scanf("%s", &estado2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Numeros de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico2);

    printf("\n\n");

    printf("CARTAS Nº2 \n\n");
    printf("Código da Carta nº2: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d pessoas\n", populacao2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);

    printf("\n\n");


    return 0;
}