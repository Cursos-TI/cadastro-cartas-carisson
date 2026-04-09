#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado[2], estado1[2];
char carta[3], carta1[3];
char cidade[20], cidade1[20];
float area, area1;
double pib, pib1;
int turisticos, turisticos1, escolha;
double densidade, percapita, percapita1, densidade1, populacao, populacao1;
double superpoder, superpoder1;

//float comp_pop, comp_area, comp_pib, comp_tur, comp_dens, comp_per, comp_poder;


  // Área para entrada de dados
    printf("Dados da carta 1\n");
    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", &carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a quantidade de habitantes (Milhões): ");
    scanf("%lf", &populacao);

    printf("Digite a area (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB(Bilhões): ");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turisticos);


    printf("Dados da carta 2\n ");

    printf("Digite o Estado: ");
    scanf("%s", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", &carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de habitantes (Milhões): ");
    scanf("%lf", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turisticos1);

    pib=pib*1000000000;
    pib1=pib1*1000000000;
    area=area*1000;
    area1=area1*1000;
    populacao1= populacao1*1000000;
    populacao=populacao*1000000;

    densidade = populacao / area;
    percapita = (float) pib / populacao;
    densidade1 = populacao1 / area1;
    percapita1 = (float) pib1 / populacao1;
    superpoder = (float) populacao + area + pib + turisticos + percapita + (1/densidade); 
    superpoder1 = (float) populacao1 + area1 + pib1 + turisticos1 + percapita1 + (1/densidade1);

  /*comp_area = area>area1;
    comp_dens = densidade > densidade1;
    comp_per = percapita  > percapita1;
    comp_pib = pib > pib1;
    comp_poder = superpoder > superpoder1;
    comp_pop = populacao > populacao1;
    comp_tur = turisticos > turisticos1;*/


  // Área para exibição dos dados da cidade
    printf("*********************\n");
    printf("Dados da %s\n", cidade);
    printf("\n");
    printf("Estado: %s\n Codigo da Carta: %s\n", estado, carta1);
    printf("Cidade: %s\n Populacao: %lf\n", cidade, populacao);
    printf("Area: %.2f\n PIB: %lf\n Pontos turisticos: %d\n ", area, pib, turisticos);
    printf("*********************\n");
    printf("Densidade demografica: %.2f\n", densidade);
    
    printf("Renda Per Capita: %.2f\n", percapita);

    printf("O super poder é: %.2f\n", superpoder);
    printf("\n");
    printf("#####################\n");

    printf("Dados da %s\n", cidade1);
    printf("Estado: %s\n Codigo da Carta: %s\n", estado1, carta1);
    printf("Cidade: %s\n Populacao: %lf\n", cidade1, populacao1);
    printf("Area: %.2f\n PIB: %lf\n Pontos turisticos: %d\n", area1, pib1, turisticos1);
    printf("#####################\n");
    printf("Densidade demografica: %.2f\n", densidade1);
   
    printf("Renda Per Capita: %.2F\n", percapita1);

    printf("O super poder é: %.2lf\n", superpoder1);
    printf("\n");
    printf("\n");
    printf("Escolha uma opção para comparação!\n");
    printf("1. Renda Per Capita!\n");
    printf("2. Densidade Demografica!\n");
    printf("3. Super Poder!\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
     printf("Per Capita!\n");
      break;
    case 2:
     printf("Densidade Demografica!\n");
      break;
      case 3:
     printf("Super Poder!\n");
      break;
    
    default:
    printf("Opção Inválida/n");
      break;
    }
      
      if (escolha == 1 && percapita>percapita1) {
        if(escolha == 2 && densidade<densidade1) {
          if (escolha == 3 && superpoder>superpoder1) {
            printf("*** Cidade %s, %.2lf Venceu ***", cidade, superpoder);
          }else{
            printf("Cidade %s, %.2lf Venceu!", cidade1, superpoder1);
          }
        printf("*** Cidade %s, %.2f Venceu ***", cidade, densidade);
        }else {
          printf("Cidade %s, %.2f Venceu!", cidade1, densidade1);
        }
      printf("*** Cidade %s, %.2f Venceu ***", cidade, percapita);

      }else {
        printf("Cidade %s, %.2f Venceu!", cidade1, percapita1);
      }

return 0;
} 
