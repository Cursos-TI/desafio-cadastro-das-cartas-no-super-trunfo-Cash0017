#include <stdio.h>
int main(){

char codigo[5];
char nome[100];
int populacao;
float area;
float pib;
int pontosturisticos;

printf("cadastro de cidade\n");

printf("digite o codigo da cidade: ");
scanf("%s", codigo);

printf("digite o nome da cidade: ");
scanf("%s", nome);

printf("digite a populacao: ");
scanf("%d", &populacao);

printf("digite a area em km: ");
scanf("%f", &area);

printf("digite o pib: ");
scanf("%f", &pib);

printf("digite o numero de pontos turisticos: ");
scanf("%d", &pontosturisticos);

printf("Dados cadastrados da cidade:\n");
printf("codigo da cidade: %s\n", codigo);
printf("nome da cidade: %s\n", nome);
printf("populacao da cidade: %d\n", populacao);
printf("area de cidade: %f km\n", area);
printf("pib da cidade: %.2f\n", pib);
printf("numero de pontos turisticos: %d\n", pontosturisticos);


return 0;


}