#include <stdio.h>



int main() {
    // Carta 1
    char codigo1[20], cidade1[50], estado1[20];
    unsigned long int populacao1;
    float area1, PIB1;
    int pontos_turisticos1;

    printf("__CARTA1__\n");
    printf("código: "); scanf("%s", codigo1);
    printf("estado: "); scanf("%s", estado1);
    printf("cidade: "); scanf("%s", cidade1);
    printf("população: "); scanf("%lu", &populacao1);
    printf("área (km): "); scanf("%f", &area1);
    printf("PIB (em bilhões): "); scanf("%f", &PIB1);
    printf("pontos turísticos: "); scanf("%d", &pontos_turisticos1);

    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (PIB1 * 1e9) / populacao1;
    float super_poder1 = populacao1 + area1 + PIB1 * 1e9 +
                         pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

    // Carta 2
    char codigo2[20], cidade2[50], estado2[20];
    unsigned long int populacao2;
    float area2, PIB2;
    int pontos_turisticos2;

    printf("\n__CARTA2__\n");
    printf("código: "); scanf("%s", codigo2);
    printf("estado: "); scanf("%s", estado2);
    printf("cidade: "); scanf("%s", cidade2);
    printf("população: "); scanf("%lu", &populacao2);
    printf("área (km): "); scanf("%f", &area2);
    printf("PIB (em bilhões): "); scanf("%f", &PIB2);
    printf("pontos turísticos: "); scanf("%d", &pontos_turisticos2);

    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (PIB2 * 1e9) / populacao2;
    float super_poder2 = populacao2 + area2 + PIB2 * 1e9 +
                         pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Comparações
    printf("\n___COMPARAÇÃO DE CARTAS___\n");
    printf("População: Carta1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos turísticos: Carta1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("PIB per capita: Carta1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super poder: Carta1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}