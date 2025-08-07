#include <stdio.h>

int main(){

//CARTA 1 alagoas

    char codigo[20],cidade[50],estado[20];
    int populacao;
    float area,PIB;
    int pontos_turisticos;
    


    printf("alagoas:\n");

    printf("digite codigo da carta:");
    scanf("%s", &codigo);

    printf("digite a populacao:\n");
    scanf("%d", &populacao);


    printf("digite a area:\n");
    scanf("%f", &area);
    
    printf("digite o PIB:\n");
    scanf("%f", &PIB);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("digite o estado:\n");
    scanf("%s", &estado);

    printf("digite a cidade:\n");
    scanf("%s", &cidade);

    // Cálculos
    float dencidade = populacao / area;
    float pib_per_capita = PIB / populacao;

    



    //CARTA 2 PARAÍBA
    char codigo2[20],estado2[20],cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, PIB2;
    


    printf("\nCARTA2_paraiba:\n");

    printf("digite o codigo da carta:");
    scanf("%s", &codigo2);

    printf("diga a populacao:");
    scanf("%d", &populacao2);

    printf("diga a area:");
    scanf("%f", &area2);
    
    printf("diga o PIB:");
    scanf("%f", &PIB2);

    printf("diga os pontos turisticos:");
    scanf("%d", &pontos_turisticos2);

    printf("digite o estado:\n");
    scanf("%s", &estado2);

    printf("digite a cidade:\n");
    scanf("%s", &cidade2);

    float dencidade2 = populacao2 / area2;
    float pib_per_capita2 = PIB2 / populacao2;

     //EXIBIÇÃO
    printf("\nCARTA: %s (alagoas)\n", codigo);
    printf("populacao: %d\n",populacao);
    printf("area: %.2f\n",area);
    printf("PIB: %.2f\n",PIB);
    printf("pontos_turisticos: %d\n",pontos_turisticos);
    printf("estado: %s\n",estado);
    printf("cidade: %s\n",cidade);
    printf("dencidade populacional: %.2f\n", dencidade);
    printf("pib_per_capita: %.2f pib_per_capiata");


    printf("\nCARTA: %s (paraiba)\n", codigo2);15456
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("PIB: %.2f\n",PIB2);
    printf("pontos_turisticos: %d\n", pontos_turisticos2);
    printf("estado: %s\n",estado2);
    printf("cidade: %s\n", cidade2);
    printf("dencidade populacional: %.2f\n", dencidade2);
    printf("pib_per_capita: %.2f pib_per_capiata2");


    return 0;}
    