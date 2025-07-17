#include <stdio.h>
#include <string.h> // Necessário para a função strcspn

int main() {
    // --- Declaração das variáveis para a primeira carta ---
    char estado1[3]; // Para o estado (ex: A)
    char codigo1[5]; // Para o código da carta (ex: A01)
    char nomeCidade1[50]; // Para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // --- Declaração das variáveis para a segunda carta ---
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");

    printf("Digite o estado da primeira cidade: ");
    scanf("%s", estado1);

    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigo1);

    // Limpa o buffer de entrada para evitar problemas com o fgets
    // Isso remove o caractere de nova linha que scanf deixa no buffer
    while (getchar() != '\n'); 
    printf("Digite o nome da primeira cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    // Remove a quebra de linha ('\n') adicionada por fgets, se houver
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; 

    printf("Digite a populacao da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da primeira cidade (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cálculos para a Primeira Carta ---
    // Fazendo um cast para float em populacao1 para garantir que a divisão seja de ponto flutuante
    densidadePopulacional1 = (float)populacao1 / area1;
    // Multiplica o PIB por 1 bilhão para converter de 'bilhões de reais' para 'reais'
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 

    printf("\n"); // Linha em branco para melhor organização

    // --- Cadastro da Segunda Carta ---
    printf("--- Cadastro da Segunda Carta ---\n");

    printf("Digite o estado da segunda cidade: ");
    scanf("%s", estado2);

    printf("Digite o codigo da segunda carta: ");
    scanf("%s", codigo2);

    // Limpa o buffer de entrada
    while (getchar() != '\n'); 
    printf("Digite o nome da segunda cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    // Remove a quebra de linha ('\n') adicionada por fgets, se houver
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a populacao da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da segunda cidade (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos para a Segunda Carta ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; 

    printf("\n"); // Linha em branco para melhor organização

    // --- Exibição dos Dados Cadastrados e Calculados ---
    printf("--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // Formata com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1); // Formata com 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1); // Formata com 2 casas decimais
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); // Formata com 2 casas decimais
    printf("\n");

    printf("--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    return 0;
}
