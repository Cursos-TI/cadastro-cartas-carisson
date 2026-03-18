#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado, estado1;
char carta[3], carta1[3];
char cidade[20], cidade1[20];
float area, area1;
double pib, pib1;
int populacao, populacao1, turisticos, turisticos1;
float densidade, percapita, percapita1, densidade1;

float superpoder, superpoder1;
//float comp_pop, comp_area, comp_pib, comp_tur, comp_dens, comp_per, comp_poder;


  // Área para entrada de dados
    printf("Dados da carta 1\n");
    printf("Digite o estado: ");
    scanf("%c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", &carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a area em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
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

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turisticos1);

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
    printf("Dados da Carta 1\n");
    printf("Estado: %c\n Codigo da Carta: %s\n", estado, carta);
    printf("Cidade: %s\n Populacao: %d\n", cidade, populacao);
    printf("Area: %.2f\n PIB: %lf\n Pontos turisticos: %d\n ", area, pib, turisticos);

    printf("Densidade demografica: %.2f\n", densidade);
    
    printf("Renda Per Capita: %.2f\n", percapita);

    printf("O super poder é: %.2f\n", superpoder);

    printf("Dados da Carta 2\n");
    printf("Estado: %c\n Codigo da Carta: %s\n", estado1, carta1);
    printf("Cidade: %s\n Populacao: %d\n", cidade1, populacao1);
    printf("Area: %.2f\n PIB: %.2f\n Pontos turisticos: %d\n", area1, pib1, turisticos1);

    printf("Densidade demografica: %.2f\n", densidade1);
   
    printf("Renda Per Capita: %.2F\n", percapita1);

    printf("O super poder é: %.2f\n", superpoder1);

   /* printf("Comparação das Cartas, \nconsiderando 1 vence a carta 1 e o vence a carta 2:\n");
    printf("População: %d\n", comp_pop);
    printf("Área: %d\n", comp_area);
    printf("PIB: %d\n", comp_pib);
    printf("Pontos turisticos: %d\n", comp_tur);
    printf("Desnidade Populacional: %d\n", comp_dens);
    printf("PIB per Capita: %d\n", comp_per);
    printf("Super Poder: %d\n", comp_poder);*/

    if(pib>pib1){
      printf("Carta 1 venceu!\n com um PIB de %lf\n", pib);
    }else{
      printf("Carta 2 venceu!\n Com um PIB de %lf\n", pib1);
    };
    if(densidade<densidade1){
      printf("Carta 1 venceu!\n com uma densidade populacional de %.2f\n", densidade);
    }else{
      printf("Carta 2 venceu!\n Com uma densidade populacional de %.2f\n", densidade1);
    };

    if(populacao>populacao1){
      printf("Carta 1 venceu!\n com uma população de %d", populacao);
    }else{
      printf("Carta 2 venceu!\n Com uma população de %d", populacao1);
    };


return 0;
} 
