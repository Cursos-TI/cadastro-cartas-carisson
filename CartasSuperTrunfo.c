#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado, estado1;
char carta[3], carta1[3];
char cidade[20], cidade1[20];
float area, area1, pib, pib1;
int populacao, populacao1, turisticos, turisticos1;
float densidade, percapita, percapita1, densidade1;
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
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turisticos);


    printf("Dados da carta 2\n ");

    printf("Digite o estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", &carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turisticos1);

    densidade = populacao / area;
    percapita = (float) pib / populacao;
    densidade1 = populacao1 / area1;
    percapita1 = (float) pib1 / populacao1;
  // Área para exibição dos dados da cidade

return 0;
} 
