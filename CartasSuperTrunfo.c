#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Adson

int main() {

   // Declaração das variáveis para a primeira carta
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char nome1[50];

    // Declaração das variáveis para a segunda carta
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    char nome2[50];

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &nome1);

    printf("Digite a populacao da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da primeira cidade (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); 

    // --- Cadastro da Segunda Carta ---
    printf("--- Cadastro da Segunda Carta ---\n");

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &nome2);

    printf("Digite a populacao da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da segunda cidade (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // --- Exibição dos Dados Cadastrados ---
    printf("--- Dados da Primeira Carta ---\n");
    printf("nome do aluno: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\n");

    printf("--- Dados da Segunda Carta ---\n");
    printf("nome do aluno: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("\n");

    return 0;
}
