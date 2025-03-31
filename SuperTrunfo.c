#include <stdio.h>

 // Carta 1.

int main(){

int populacao;
int pontoturistico;
float area;
float pib;
char estado[20]; 
char codigodacarta[20];
char nomedacidade[20];

// Carta 2.

int populacao2;
int pontoturistico2;
float area2;
float pib2;
char estado2[20]; 
char codigodacarta2[20];
char nomedacidade2[20];

printf("Estado:\n");
scanf("%s", &estado);

printf("Código Da Carta:\n");
scanf("%s", &codigodacarta);

printf("Nome Da Cidade:\n");
scanf("%s", &nomedacidade);

printf("População:\n");
scanf("%d", &populacao);

printf("Área:\n");
scanf("%f", &area);

printf("PIB:\n");
scanf("%f", &pib);

printf("Pontos turísticos:\n");
scanf("%d", &pontoturistico);

printf("Estado: %s\n", estado);
printf("Código Da Carta: %s\n", codigodacarta);
printf("Nome Da Cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Área: %f\n", area);
printf("PIB: %f\n", pib);

// Carta 2.

printf("Estado:\n");
scanf("%s", &estado2);

printf("Código Da Carta:\n");
scanf("%s", &codigodacarta2);

printf("Nome Da Cidade:\n");
scanf("%s", &nomedacidade2);

printf("População:\n");
scanf("%d", &populacao2);

printf("Área:\n");
scanf("%f", &area2);

printf("PIB:\n");
scanf("%f", &pib2);

printf("Pontos turísticos:\n");
scanf("%d", &pontoturistico2);

printf("Estado: %s\n", estado2);
printf("Código Da Carta: %s\n", codigodacarta2);
printf("Nome Da Cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("Área: %f\n", area2);
printf("PIB: %f\n", pib2);


    return 0;

}
