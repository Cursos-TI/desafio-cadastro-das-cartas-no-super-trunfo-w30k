#include <stdio.h>

int main() {
    // Carta 1
    int populacao, pontoturistico;
    float area, pib;
    float densidade, pib_per_capita;
    char estado[20], codigodacarta[20], nomedacidade[100];

    // Carta 2
    int populacao2, pontoturistico2;
    float area2, pib2;
    float densidade2, pib_per_capita2;
    char estado2[20], codigodacarta2[20], nomedacidade2[100];

    // Entrada dos dados da Carta 1
    printf("Estado:\n");
    scanf("%s", estado);

    printf("Código Da Carta:\n");
    scanf("%s", codigodacarta);

    printf("Nome Da Cidade:\n");
    scanf(" %[^\n]", nomedacidade);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área (em km²):\n");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontoturistico);

    // Cálculos da Carta 1
    densidade = populacao / area;
    pib_per_capita = (pib * 1000000000) / populacao;

    // Entrada dos dados da Carta 2
    printf("Estado:\n");
    scanf("%s", estado2);

    printf("Código Da Carta:\n");
    scanf("%s", codigodacarta2);

    printf("Nome Da Cidade:\n");
    scanf(" %[^\n]", nomedacidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontoturistico2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código Da Carta: %s\n", codigodacarta);
    printf("Nome Da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código Da Carta: %s\n", codigodacarta2);
    printf("Nome Da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}

