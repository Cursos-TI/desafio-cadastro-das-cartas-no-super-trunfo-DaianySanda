#include <stdio.h>

int main (){

    
    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50]; 
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;

    // CARTA 1
    
    printf("Digite o nome do estado da primeira carta: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a populacao da cidade da primeira carta: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km da cidade da primeira carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da cidade da primeira carta: \n");
    scanf("%d", &pontos_turisticos);


    printf("O nome do estado da primeira carta é: %s \n", estado);
    printf("O codigo da primeira carta é : %s \n", codigo_da_carta);
    printf("O nome da cidade da primeira carta é: %s \n", nome_da_cidade);
    printf("A população da cidade da primeira carta é: %d \n", populacao);
    printf("A area em km da cidade da primeira carta é: %f \n", area);
    printf("O PIB da cidade da primeira carta é: %f \n", PIB);
    printf("O numero de pontos turisticos da cidade da primeira carta é: %d \n", pontos_turisticos);

     //calculo da densidade populacional
    
     densidade_populacional = (float) (populacao / area);
     printf("A densidade populacional da primeira carta é:%.2f \n", densidade_populacional);
 
     //caclulo do PIB per capita
 
     PIB_per_capita = (float) (PIB / populacao);
     printf("O PIB per capito da primeira carta é:%.2f \n", PIB_per_capita);

    // CARTA 2

    printf("Digite o nome do estado da segunda carta: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a populacao da cidade da segunda carta: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km da cidade da segunda carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da cidade da segunda carta: \n");
    scanf("%d", &pontos_turisticos);

    printf("O nome do estado da segunda carta é: %s \n", estado);
    printf("O codigo da segunda carta é: %s \n", codigo_da_carta);
    printf("O nome da cidade da segunda carta é: %s \n", nome_da_cidade);
    printf("A populacao da cidade da segunda carta é: %d \n", populacao);
    printf("A area em km da cidade da segunda carta é: %f \n", area);
    printf("O PIB da cidade da segunda carta é: %f \n", PIB);
    printf("O numero de pontos turisticos da cidade da segunda carta é: %d \n", pontos_turisticos);

    //calculo da densidade populacional
    
    densidade_populacional = (float) (populacao / area);
    printf("A densidade populacional da segunda carta é:%.1f \n", densidade_populacional);

    //caclulo do PIB per capita

    PIB_per_capita = (float) (PIB / populacao);
    printf("O PIB per capito da segunda carta é:%.1f \n", PIB_per_capita);


    return 0;

}