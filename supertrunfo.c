#include <stdio.h>
int main(){

char codigo[5];
char nome[100];
float populacao;
float area;
float pib;
int pontosturisticos;
float pibpercapita;
float densidade;





printf("cadastro de cidade\n");

printf("digite o codigo da cidade: ");
scanf("%s", codigo);

printf("digite o nome da cidade: ");
scanf("%s", nome);

printf("digite a populacao: ");
scanf("%f", &populacao);

printf("digite a area em km: ");
scanf("%f", &area);

printf("digite o pib: ");
scanf("%f", &pib);

printf("digite o numero de pontos turisticos: \n");
scanf("%d", &pontosturisticos);

pibpercapita = pib / populacao;
densidade = populacao / area;

printf("Dados cadastrados da cidade:\n");
printf("codigo da cidade: %s\n", codigo);
printf("nome da cidade: %s\n", nome);
printf("populacao da cidade: %.3f\n", populacao);
printf("area de cidade: %f km\n", area);
printf("pib da cidade: %.2f\n", pib);
printf("numero de pontos turisticos: %d\n", pontosturisticos);
printf("pib Per Capita: %.2f\n", pibpercapita);
printf("densidade: %.2f\n", densidade);




return 0;


}