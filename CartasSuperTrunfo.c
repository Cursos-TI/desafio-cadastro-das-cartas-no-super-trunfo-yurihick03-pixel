#include <stdio.h>

int main(){

//CARTA 1 alagoas
    int populacao1, pontos_turisticos1;
    float area1, PIB1;

    char codigo[5];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;


    printf("alagoas:\n");

    printf("digite codigo da carta:");
    scanf("%s", codigo);

    printf("digite a area1:\n");
    scanf("%f", &area1);
    
    printf("digite o PIB1:\n");
    scanf("%f", &PIB1);

    printf("digite o numero de pontos turisticos1:\n");
    scanf("%d", pontos_turisticos1);




    //CARTA 2 PARAÍBA
    char codigo2[5];
    int populacao2, pontos_turisticos2;
    float area2, PIB2;
    
    printf("\nCARTA2_paraiba:\n");

    printf("digite o codigo da carta:\n");
    scanf("%s", codigo2);

    printf("diga a populacao2:\n");
    scanf("%d", &populacao2);

    printf("diga a area2:\n");
    scanf("%f", &area2);
    
    printf("diga o PIB2:\n");
    scanf("%f", &PIB2);

    printf("diga os pontos turisticos2:");
    scanf("%d", pontos_turisticos2);

     //EXIBIÇÃO
    printf("\nCARTA: %s (alagoas)\n", codigo);
    printf("populacao: %d\n", populacao1);
    printf("area: %2f\n", area1);
    printf("PIB: %2f\n",PIB1);
    printf("pontos_turisticos: %d\n", pontos_turisticos1);




    printf("\nCARTA: %s (paraiba)\n", codigo2);
    printf("populacao: %d\n", populacao2);
    printf("area: %2f\n", area2);
    printf("PIB: %2f\n",PIB2);
    printf("pontos_turisticos: %d\n", pontos_turisticos2);

    
    return 0;}
    