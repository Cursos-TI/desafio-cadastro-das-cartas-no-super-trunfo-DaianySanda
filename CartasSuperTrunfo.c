#include <stdio.h>


int main (){

    //***DESAFIO SUPER TRUNFO
    printf("\n");
    printf("***Bem-vindo ao jogo Super Trunfo!***\n");
    printf("\n");

    //declaração de variaveis das cartas
    char pais1 [101];
    char pais2 [100];
    char codigo_da_carta1[51];
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

    printf("Digite a populacao do país primeira carta: \n");
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
         int primeiro_atributo, segundo_atributo;
         int resultado1, resultado2;

         printf("\n");
         printf("1: População:\n");
         printf("2. Área:\n");
         printf("3. PIB:\n");
         printf("4. Número de pontos turísticos:\n");
         printf("5. Densidade demográfica:\n");
         
         printf("Escolha o primeiro atributo que será usado para comparar as cartas: \n");
         scanf("%d", &primeiro_atributo);

         //PRIMEIRO ATRIBUTO
         switch (primeiro_atributo)
         {
         //população
         case 1:
         printf("Você escolheu o primeiro atributo em população. \n");
         resultado1 = populacao1 > populacao2 ? 1 : 0;
         break;
    
         //área
         case 2:
         printf("Você escolheu o primeiro atributo em área. \n");
         resultado1 = area1 > area2 ? 1 : 0;     
         break;
    
         //PIB
         case 3:
         printf("Você escolheu o primeiro atributo em PIB. \n");
         resultado1 = PIB1 > PIB2 ? 1 : 0;         
         break;
    
         //Pontos turísticos
         case 4:
         printf("Você escolheu o primeiro atributo em pontos turísticos. \n");
         resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
         break;
    
         //Densidade demográfica
         case 5:
         printf("Você escolheu o primeiro atributo em densidade populacional. \n");
         resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;      
         break;
    
         default:
         printf("Opção invalida!");
         break;
         }

         //SEGUNDO ATRIBUTO
         
         printf("\n");
         printf("1: População:\n");
         printf("2. Área:\n");
         printf("3. PIB:\n");
         printf("4. Número de pontos turísticos:\n");
         printf("5. Densidade demográfica:\n");
         
         printf("Escolha o segundo atributo que será usado para comparar as cartas: \n");
         printf("Atenção: você deve escolher um atributo diferente do primeiro. \n");
         scanf("%d", &segundo_atributo);

         //se o jogador escolher o mesmo atributo

         if (primeiro_atributo == segundo_atributo)
         {
            printf("ATENÇÃO! Você escolheu o mesmo atributo!\n");
         } else { 
            switch (segundo_atributo)
            {
            case 1:
            printf("Você escolheu o primeiro atributo em população. \n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
          
            //área
            case 2:
            printf("Você escolheu o primeiro atributo em área. \n");
            resultado1 = area1 > area2 ? 1 : 0;     
            break;
          
            //PIB
            case 3:
            printf("Você escolheu o primeiro atributo em PIB. \n");
            resultado1 = PIB1 > PIB2 ? 1 : 0;         
            break;
          
            //Pontos turísticos
            case 4:
            printf("Você escolheu o primeiro atributo em pontos turísticos. \n");
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;
          
            //Densidade demográfica
            case 5:
            printf("Você escolheu o primeiro atributo em densidade populacional. \n");
            resultado1 = densidade_populacional1 < densidade_populacional2 ? 0 : 1;      
            break;
          
            default:
            printf("Opção invalida!");
            break;

            }

            //***RESULTADO 
            printf("\n");
            printf("*****Resultado das comparações:*****\n");
            printf("\n");   
            printf("Carta 1 - País: %s \n", pais1);     
            printf("Carta 2 - País: %s \n", pais2);
            printf("\n"); 
    
            //primeiro atributo     
            if (primeiro_atributo == 1)
            {
            printf("Primeiro atribuito usado na comparação: população \n");
            printf("A população dos países são:\n");
            printf("Carta 1: %d\n", populacao1);
            printf("Carta 2: %d\n", populacao2);
            printf("A vencedora em população é a carta: %d \n", (populacao1 > populacao2) * 1 + (populacao1 <= populacao2) * 2);
            printf("\n"); 
            }else if (primeiro_atributo == 2)
            {
            printf("Primeiro atribuito usado na comparação: área \n");
            printf("A área em km² dos países são:\n");
            printf("Carta 1: %f\n", area1);
            printf("Carta 2: %f\n", area2);
            printf("A vencedora em area é a carta: %d \n", (area1 > area2) * 1 + (area1 <= area2) * 2);
            printf("\n"); 
            } else if (primeiro_atributo == 3)
            {
            printf("Primeiro atribuito usado na comparação: PIB\n");
            printf("O PIB dos países é:\n");
            printf("Carta 1: %f\n", PIB1);
            printf("Carta 2: %f\n", PIB2);
            printf("A vencedora em PIB é a carta: %d \n", (PIB1 > PIB2) * 1 + (PIB1 <= PIB2) * 2 );
            printf("\n"); 
            } else if (primeiro_atributo == 4)
            {
            printf("Primeiro atribuito usado na comparação: pontos turísticos\n");
            printf("Os números de pontos turísticos dos países são:\n");
            printf("Carta 1: %d\n", pontos_turisticos1);
            printf("Carta 2: %d\n", pontos_turisticos2);
            printf("A vencedora em pontos turisticos é a carta: %d \n", (pontos_turisticos1 > pontos_turisticos2) * 1 + (pontos_turisticos1 <= pontos_turisticos2) * 2);
            printf("\n"); 
            } else if (primeiro_atributo == 5)
            {
            printf("Primeiro atribuito usado na comparação: densidade populacional\n");
            printf("A densidade populacional dos países é:\n");
            printf("Carta 1: %f\n", densidade_populacional1);
            printf("Carta 2: %f\n", densidade_populacional2);
            printf("A vencedora em densidade populacional é a carta:%d \n", (densidade_populacional1 < densidade_populacional2) * 1 + (densidade_populacional1 >= densidade_populacional2) * 2);
            printf("\n"); 
            }
   
            //segundo atributo
            if (segundo_atributo == 1)
            {
            printf("Segundo atribuito usado na comparação: população \n");
            printf("A população dos países são:\n");
            printf("Carta 1: %d\n", populacao1);
            printf("Carta 2: %d\n", populacao2);
            printf("A vencedora em população é a carta: %d \n", (populacao1 > populacao2) * 1 + (populacao1 <= populacao2) * 2);
            printf("\n"); 
            }else if (segundo_atributo == 2)
            {
            printf("Segundo atribuito usado na comparação: área \n");
            printf("A área em km² dos países são:\n");
            printf("Carta 1: %f\n", area1);
            printf("Carta 2: %f\n", area2);
            printf("A vencedora em area é a carta: %d \n", (area1 > area2) * 1 + (area1 <= area2) * 2);
            printf("\n"); 
            } else if (segundo_atributo == 3)
            {
            printf("Segundo atribuito usado na comparação: PIB\n");
            printf("O PIB dos países é:\n");
            printf("Carta 1: %f\n", PIB1);
            printf("Carta 2: %f\n", PIB2);
            printf("A vencedora em PIB é a carta: %d \n", (PIB1 > PIB2) * 1 + (PIB1 <= PIB2) * 2 );
            printf("\n"); 
            } else if (segundo_atributo == 4)
            {
            printf("Segundo atribuito usado na comparação: pontos turísticos\n");
            printf("Os números de pontos turísticos dos países são:\n");
            printf("Carta 1: %d\n", pontos_turisticos1);
            printf("Carta 2: %d\n", pontos_turisticos2);
            printf("A vencedora em pontos turisticos é a carta: %d \n", (pontos_turisticos1 > pontos_turisticos2) * 1 + (pontos_turisticos1 <= pontos_turisticos2) * 2);
            printf("\n"); 
            } else if (segundo_atributo == 5)
            {
            printf("Segundo atribuito usado na comparação: densidade populacional\n");
            printf("A densidade populacional dos países é:\n");
            printf("Carta 1: %f\n", densidade_populacional1);
            printf("Carta 2: %f\n", densidade_populacional2);
            printf("A vencedora em densidade populacional é a carta:%d \n", (densidade_populacional1 < densidade_populacional2) * 1 + (densidade_populacional1 >= densidade_populacional2) * 2);
            printf("\n"); 
            }

            //RESULTADO FINAL

            if (resultado1 && resultado2)
            {
               printf("Parabéns, você venceu!\n");
            }else if (resultado1 != resultado2)
            {
               printf("Empatou!\n");
            }else
            {
               printf("Infelizmente, você perdeu!\n");
            }
           
            
         }
    return 0;
   
}
