#include <stdio.h>

int main (){

    //***DESAFIO SUPER TRUNFO

    //declaração de variaveis das cartas
    char estado1[50];
    char estado2 [50];
    char codigo_da_carta1[50];
    char codigo_da_carta2[50];
    char nome_da_cidade1[50]; 
    char nome_da_cidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float PIB1;
    float PIB2;
    int pontos_turisticos1;
    int pontos_turisticos2;
    float densidade_populacional1;
    float densidade_populacional2;
    float PIB_per_capita1;
    float PIB_per_capita2;
    float super_poder1;
    float super_poder2;

    //***CARTA 1
    //entrada de dados
    printf("Digite o nome do estado da primeira carta: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &codigo_da_carta1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &nome_da_cidade1);

    printf("Digite a populacao da cidade da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km da cidade da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da cidade da primeira carta: \n");
    scanf("%d", &pontos_turisticos1);

     //calculo da densidade populacional
     densidade_populacional1 = (float) (populacao1 / area1);
      
     //caclulo do PIB per capita
     PIB_per_capita1 = (float) (PIB1 / populacao1);
     
     //calculo de inverso de densidade
     float inverso_densidade1 = (densidade_populacional1 > 0) * (1 / densidade_populacional1);

     //super poder (soma de todos os atributos numéricos)
     super_poder1 = (float) populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1 + inverso_densidade1 + PIB_per_capita1;
     

    //***CARTA 2
    //entrada de dados
    printf("Digite o nome do estado da segunda carta: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a populacao da cidade da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km da cidade da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade da segunda carta: \n");
    scanf("%d", &pontos_turisticos2);

    //calculo da densidade populacional
    densidade_populacional2 = (float) (populacao2 / area2);
    
    //caclulo do PIB per capita
    PIB_per_capita2 = (float) (PIB2 / populacao2);
    
    //calculo de inverso de densidade
    float inverso_densidade2 = (densidade_populacional2 > 0) * (1 / densidade_populacional2);

    //super poder
    super_poder2 = (float) populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 + inverso_densidade2 + PIB_per_capita2;

    //***IMPRIMIR CARTAS 
    //saída de dados
    printf("\n");
    printf("Dados da Carta 01:\n");
    printf("O nome do estado da primeira carta é: %s \n", estado1);
    printf("O codigo da primeira carta é : %s \n", codigo_da_carta1);
    printf("O nome da cidade da primeira carta é: %s \n", nome_da_cidade1);
    printf("A população da cidade da primeira carta é: %d \n", populacao1);
    printf("A area em km da cidade da primeira carta é: %f \n", area1);
    printf("O PIB da cidade da primeira carta é: %f \n", PIB1);
    printf("O numero de pontos turisticos da cidade da primeira carta é: %d \n", pontos_turisticos1);
    printf("A densidade populacional da primeira carta é:%.2f \n", densidade_populacional1);
    printf("O PIB per capito da primeira carta é:%.2f \n", PIB_per_capita1);
    printf("O Super Poder da primeira carta é: %f \n", super_poder1);

    printf("\n");
    printf("Dados da Carta 02:\n");
    printf("O nome do estado da segunda carta é: %s \n", estado2);
    printf("O codigo da segunda carta é: %s \n", codigo_da_carta2);
    printf("O nome da cidade da segunda carta é: %s \n", nome_da_cidade2);
    printf("A populacao da cidade da segunda carta é: %d \n", populacao2);
    printf("A area em km da cidade da segunda carta é: %f \n", area2);
    printf("O PIB da cidade da segunda carta é: %f \n", PIB2);
    printf("O numero de pontos turisticos da cidade da segunda carta é: %d \n", pontos_turisticos2);
    printf("A densidade populacional da segunda carta é:%.1f \n", densidade_populacional2);
    printf("O PIB per capito da segunda carta é:%.1f \n", PIB_per_capita2);
    printf("O Super Poder da segunda carta é: %f \n", super_poder2);

    //***COMPARAÇÃO CARTA 1 E CARTA 2
    //saída de dados 
    printf("\n");
    printf("Resultado das comparações:\n");
    printf("A vencedora em população é a carta: %d \n", (populacao1 > populacao2) * 1 + (populacao1 <= populacao2) * 2);
    printf("A vencedora em area é a carta: %d \n", (area1 > area2) * 1 + (area1 <= area2) * 2);
    printf("A vencedora em PIB é a carta: %d \n", (PIB1 > PIB2) * 1 + (PIB1 <= PIB2) * 2 );
    printf("A vencedora em pontos turisticos é a carta: %d \n", (pontos_turisticos1 > pontos_turisticos2) * 1 + (pontos_turisticos1 <= pontos_turisticos2) * 2);
    printf("A vencedora em densidade populacional é a carta:%d \n", (densidade_populacional1 < densidade_populacional2) * 1 + (densidade_populacional1 >= densidade_populacional2) * 2);
    printf("A vencedora em PIB per capita é a carta:%d \n", (PIB_per_capita1 > PIB_per_capita2) * 1 + (PIB_per_capita1 <= PIB_per_capita2) * 2);
    printf("A vencedora em Super Poder é a carta: %d \n", (super_poder1 > super_poder2) * 1 + (super_poder1 <= super_poder2) * 2);


    //população
    printf("\n");
    printf("Resultado final:\n");
     if (populacao1 >= populacao2){
        printf("População: Carta 1 venceu! \n");
     } else
     {
        printf("População: Carta 2 venceu! \n");
     }
     
     //area
     if (area1 >= area2)
     {
        printf("Área: Carta 1 venceu! \n");
     }else
     {
        printf("Área: Carta 2 venceu! \n");
     }
     
     //pib
     if (PIB1 >= PIB2)
     {
        printf("PIB: Carta 1 venceu! \n");
     }else
     {
        printf("PIB: Carta 2 venceu! \n");
     }

     //pontos turisticos
     if (pontos_turisticos1 >= pontos_turisticos2)
     {
        printf("Pontos turisticos: Carta 1 venceu! \n");
     }else
     {
        printf("Pontos turisticos: Carta 2 venceu! \n");
     }

     //densidade populacional
     if (densidade_populacional1 < densidade_populacional2)
     {
        printf("Densidade populacional: Carta 1 venceu! \n");
     }else
     {
        printf("Densidade populacional: Carta 2 venceu! \n");
     }

     //pib per capita
     if (PIB_per_capita1 >= PIB_per_capita2)
     {
        printf("PIB per capita: Carta 1 venceu! \n");
     }else
     {
        printf("PIB per capita: Carta 2 venceu! \n");
     }

     //Super Poder
     if (super_poder1 >= super_poder2)
     {
        printf("Super Poder: Carta 1 venceu! \n");
     }else
     {
        printf("Super Poder: Carta 2 venceu! \n");
     }
     



    return 0;

}