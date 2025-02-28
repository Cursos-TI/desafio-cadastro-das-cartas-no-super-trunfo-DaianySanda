#include <stdio.h>

int main (){

    
    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50]; 
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;

    printf("Digite o nome do estado da primeira carta: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a populacao da primeira carta: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km da primeira carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite o nome do estado da segunda carta: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a populacao da segunda carta: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km da segunda carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos);

    return 0;
    
}  