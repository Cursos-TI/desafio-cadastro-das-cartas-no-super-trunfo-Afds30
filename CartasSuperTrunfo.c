#include <stdio.h>
#include <string.h> // Necessário para a função strcspn

int main() {
    // --- Declaração das variáveis para a primeira carta ---
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; // População agora é unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // --- Declaração das variáveis para a segunda carta ---
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2; // População agora é unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");

    printf("Digite o estado da primeira cidade (ex: A): ");
    scanf("%s", estado1);

    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", codigo1);

    while (getchar() != '\n'); // Limpa o buffer de entrada
    printf("Digite o nome da primeira cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a populacao da primeira cidade: ");
    scanf("%lu", &populacao1); // Use %lu para unsigned long int

    printf("Digite a area da primeira cidade (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cálculos para a Primeira Carta ---
    densidadePopulacional1 = (float)populacao1 / area1;
    // Converte PIB de bilhões para unidades para cálculo per capita
    pibPerCapita1 = (pib1 * 1000000000.0F) / populacao1; 
    
    // Cálculo do Super Poder 1 (inverso da densidade: 1/densidade)
    // Garante que a densidade não seja zero para evitar divisão por zero
    if (densidadePopulacional1 != 0) {
        superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0F / densidadePopulacional1);
    } else {
        superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1; // Se densidade for zero, não soma o inverso
    }

    printf("\n");

    // --- Cadastro da Segunda Carta ---
    printf("--- Cadastro da Segunda Carta ---\n");

    printf("Digite o estado da segunda cidade (ex: B): ");
    scanf("%s", estado2);

    printf("Digite o codigo da segunda carta (ex: B02): ");
    scanf("%s", codigo2);

    while (getchar() != '\n'); // Limpa o buffer de entrada
    printf("Digite o nome da segunda cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a populacao da segunda cidade: ");
    scanf("%lu", &populacao2); // Use %lu para unsigned long int

    printf("Digite a area da segunda cidade (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos para a Segunda Carta ---
    densidadePopulacional2 = (float)populacao2 / area2;
    // Converte PIB de bilhões para unidades para cálculo per capita
    pibPerCapita2 = (pib2 * 1000000000.0F) / populacao2; 

    // Cálculo do Super Poder 2 (inverso da densidade: 1/densidade)
    if (densidadePopulacional2 != 0) {
        superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0F / densidadePopulacional2);
    } else {
        superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2; // Se densidade for zero, não soma o inverso
    }

    printf("\n");

    // --- Exibição dos Dados Cadastrados e Calculados (opcional, para conferência) ---
    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // --- Comparação de Cartas ---
    printf("--- Comparacao de Cartas ---\n");

    // População (maior vence)
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));

    // Área (maior vence)
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));

    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));

    // Pontos Turísticos (maior vence)
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2));

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2));

    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2));

    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2));
    printf("\n");

    return 0;
}