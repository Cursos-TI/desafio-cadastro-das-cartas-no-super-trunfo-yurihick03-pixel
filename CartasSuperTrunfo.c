#include <stdio.h>

int main(){

//CARTA 1 MACEIÓ
    int populacao, pontos_turisticos;
    float area, PIB;

    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;

    printf("MACEIO:\n");
    printf("diga a populacao:\n");
    scanf("%d", &populacao);

    printf("diga a area:\n");
    scanf("%f", &area);
    
    printf("diga o PIB:\n");
    scanf("%f", &PIB);

    printf("diga os pontos turisticos:");
    scanf("%f", pontos_turisticos);




    //CARTA 2 jOÃO PESSOA
    int populacao, pontos_turisticos;
    float area, PIB;
    
    printf("JOAO PESSOA");
    printf("diga a populacao:\n");
    scanf("%d", &populacao);

    printf("diga a area:\n");
    scanf("%f", &area);
    
    printf("diga o PIB:\n");
    scanf("%f", &PIB);

    printf("diga os pontos turisticos:");
    scanf("%f", pontos_turisticos);

     //EXIBIÇÃO
    printf("\nMACEIO:");
    printf("populacao: %d\n", populacao);
    printf("area: %2f\n", area);
    printf("PIB: %2f\n",PIB);
    printf("pontos_turisticos: %d\n", pontos_turisticos);
    
    return 0;}
    