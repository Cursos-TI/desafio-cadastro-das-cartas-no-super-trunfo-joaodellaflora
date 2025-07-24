#include <stdio.h>

int main() {
    // Variaveis para armazenar os dados da carta
char estado[50];
char codigo_carta[10];
char nome_cidade[100];
int populacao = 0;
float area = 0;
float pib = 0;
int nro_pontos_turisticos = 0;


printf("Carta do Trunfo - 1\n");
// Solicita os dados da carta
printf("Digite o estado: ");
// Solicita o estado
scanf("%s", estado);

printf("Digite o codigo da carta: ");
// Solicita o codigo da carta
scanf("%s", codigo_carta);

printf("Digite o nome da cidade: ");
// Solicita o nome da cidade
scanf("%s", nome_cidade);

printf("Digite a populacao: ");
// Solicita a populacao
scanf("%d", &populacao);

printf("Digite a area: ");
// Solicita a area
scanf("%f", &area);

printf("Digite o PIB: ");
// Solicita o PIB
scanf("%f", &pib);

printf("Digite o numero de pontos turisticos: ");
// Solicita o numero de pontos turisticos
scanf("%d", &nro_pontos_turisticos);

// Exibe os dados da primeira carta
printf("Carta do Trunfo - 1\n");

printf("\nEstado: %s\n", estado);

printf("Codigo da carta: %s\n", codigo_carta);

printf("Nome da cidade: %s\n", nome_cidade);

printf("Populacao: %d\n", populacao);

printf("Area: %f\n", area);

printf("PIB: %f\n", pib);

printf("Numero de pontos turisticos: %d\n", nro_pontos_turisticos);

printf("\n");

// Repetindo o processo para a segunda carta

printf("Carta do Trunfo - 2\n");

printf("Digite o estado: ");

scanf("%s", estado);

printf("Digite o codigo da carta: ");

scanf("%s", codigo_carta);

printf("Digite o nome da cidade: ");

scanf("%s", nome_cidade);

printf("Digite a populacao: ");

scanf("%d", &populacao);

printf("Digite a area: ");

scanf("%f", &area);

printf("Digite o PIB: ");

scanf("%f", &pib);

printf("Digite o numero de pontos turisticos: ");

scanf("%d", &nro_pontos_turisticos);

// Exibe os dados da segunda carta

printf("Carta do Trunfo - 2\n");

printf("\nEstado: %s\n", estado);

printf("Codigo da carta: %s\n", codigo_carta);

printf("Nome da cidade: %s\n", nome_cidade);

printf("Populacao: %d\n", populacao);

printf("Area: %f\n", area);

printf("PIB: %f\n", pib);

printf("Numero de pontos turisticos: %d\n", nro_pontos_turisticos);

return 0;

}