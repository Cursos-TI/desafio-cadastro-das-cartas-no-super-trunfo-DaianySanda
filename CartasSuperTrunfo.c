#include <stdio.h>

int main (){
  
    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50]; 
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    return 0;

}