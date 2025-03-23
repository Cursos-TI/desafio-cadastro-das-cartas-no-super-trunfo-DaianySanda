#include <stdio.h>


int main (){

    //***DESAFIO SUPER TRUNFO

    //declaração de variaveis das cartas
    char pais1 [100];
    char pais2 [100];
    char codigo_da_carta1[50];
    char codigo_da_carta2[50];
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
    printf("Digite o nome do país da primeira carta: \n");
    scanf("%s", &pais1);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &codigo_da_carta1);

    printf("Digite a população do país primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km do país primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do país da primeira carta: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos do país da primeira carta: \n");
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
    printf("Digite o nome do país da segunda carta: \n");
    scanf("%s", &pais2);

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &codigo_da_carta2);

    printf("Digite a populacao do país da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km do país da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do país da segunda carta: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos do país da segunda carta: \n");
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
    printf("O nome do país é: %s \n", pais1);
    printf("O codigo da carta é : %s \n", codigo_da_carta1);
    printf("A população é: %d \n", populacao1);
    printf("A area em km é: %f \n", area1);
    printf("O PIB é: %f \n", PIB1);
    printf("O numero de pontos turisticos é: %d \n", pontos_turisticos1);
    printf("A densidade populacional é:%.2f \n", densidade_populacional1);
    printf("O PIB per capito é:%.2f \n", PIB_per_capita1);
    printf("O Super Poder é: %f \n", super_poder1);

    printf("\n");
    printf("Dados da Carta 02:\n");
    printf("O nome do país é: %s \n",pais2);
    printf("O codigo da carta é: %s \n", codigo_da_carta2);
    printf("A populacao  é: %d \n", populacao2);
    printf("A area em km é: %f \n", area2);
    printf("O PIB  é: %f \n", PIB2);
    printf("O numero de pontos turisticos é: %d \n", pontos_turisticos2);
    printf("A densidade populacional é:%.1f \n", densidade_populacional2);
    printf("O PIB per capito é:%.1f \n", PIB_per_capita2);
    printf("O Super Poder é: %f \n", super_poder2);

    //MENU INTERATIVO PARA COMPARAÇÃO DE CARTAS 
    int opcao1;

   printf("\n");
   printf("Escolha o atributo que será usado para comparar as cartas:\n");
   printf("1. Nome do país:\n");
   printf("2: População:\n");
   printf("3. Área:\n");
   printf("4. PIB:\n");
   printf("5. Número de pontos turísticos:\n");
   printf("6. Densidade demográfica:\n");
   scanf("%d", &opcao1);

   //***RESULTADO FINAL 
   printf("\n");
   printf("*****Resultado das comparações*****\n");
   printf("\n");   
   printf("Carta 1 - País: %s \n", pais1);     
   printf("Carta 2 - País: %s \n", pais2);
    
   //nome do país
   switch (opcao1)
   {
      case 1:
      printf("Atribuito usado na comparação: nomes dos países \n");
      printf("\n"); 
      printf("Os nomes dos países são:\n");
      printf("Carta 1: %s\n", pais1);
      printf("Carta 2: %s\n", pais2);
      printf("\n"); 
      if (pais1 && pais2)
      {
      printf("Empatou!");
      }
          
      break;
         
      //população
      case 2:
      printf("Atribuito usado na comparação: população \n");
      printf("\n"); 
      printf("A população dos países são:\n");
      printf("Carta 1: %d\n", populacao1);
      printf("Carta 2: %d\n", populacao2);
      printf("\n"); 
      if (populacao1 > populacao2)
      {
      printf("População: Carta 1 venceu! \n");
      } else if (populacao1 == populacao2)
      {
      printf("Empatou!");
      } else
      {
      printf("População: Carta 2 venceu! \n");
      }
      break;
    
      //área
      case 3:
      printf("Atribuito usado na comparação: área \n");
      printf("\n"); 
      printf("A área em km² dos países são:\n");
      printf("Carta 1: %f\n", area1);
      printf("Carta 2: %f\n", area2);
      printf("\n"); 
      if (area1 > area2)
      {
      printf("Área: Carta 1 venceu! \n");
      } else if (area1 == area2)
      {
      printf("Empatou!");
      } else
      {
      printf("Área: Carta 2 venceu! \n");
      }
      break;
    
      //PIB
      case 4:
      printf("Atribuito usado na comparação: PIB\n");
      printf("\n"); 
      printf("O PIB dos países é:\n");
      printf("Carta 1: %f\n", PIB1);
      printf("Carta 2: %f\n", PIB2);
      printf("\n");
      if (PIB1 > PIB2)
      {
      printf("PIB: Carta 1 venceu! \n");
      } else if (PIB1 == PIB2)
      {
      printf("Empatou!");
      } else
      {
      printf("Área: Carta 2 venceu! \n");
      }
      break;
    
      //Pontos turísticos
      case 5:
      printf("Atribuito usado na comparação: pontos turísticos\n");
      printf("\n"); 
      printf("Os números de pontos turísticos dos países são:\n");
      printf("Carta 1: %d\n", pontos_turisticos1);
      printf("Carta 2: %d\n", pontos_turisticos2);
      printf("\n"); 
      if (pontos_turisticos1 > pontos_turisticos2)
      {
      printf("Pontos turísticos: Carta 1 venceu! \n");
      } else if (pontos_turisticos1 == pontos_turisticos2)
      {
      printf("Empatou!");
      } else
      {
      printf("Pontos turísticos: Carta 2 venceu! \n");
      }
      break;
    
      //Densidade demográfica
      case 6:
      printf("Atribuito usado na comparação: densidade populacional\n");
      printf("\n"); 
      printf("A densidade populacional dos países é:\n");
      printf("Carta 1: %f\n", densidade_populacional1);
      printf("Carta 2: %f\n", densidade_populacional2);
      printf("\n"); 
      
      if (densidade_populacional1 < densidade_populacional2)
      {
      printf("Densidade demográfica: Carta 1 venceu! \n");
      } else if (densidade_populacional1 == densidade_populacional2)
      {
      printf("Empatou!");
      } else
      {
         printf("Densidade populacional: Carta 2 venceu! \n");
      }
      break;
 
      default:
      printf("Opção invalida!");
       break;
   }

return 0;

}