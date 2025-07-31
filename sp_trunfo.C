#include <stdio.h>

int main() {
    // Variaveis para armazenar os dados da carta
char estado[50];

char estado2[50];

char codigo_carta[10];

char nome_cidade[100];

char nome_cidade2[100];

unsigned long int populacao1 = 0;

unsigned long int populacao2 = 0;

float area1 = 0;

float area2 = 0;

float pib1 = 0;

float pib2 = 0;

int nro_pontos_turisticos1 = 0;

int nro_pontos_turisticos2 = 0;

float densidade_populacional1 = 0;

float densidade_populacional2 = 0;

float pib_per_capita1 = 0;

float pib_per_capita2 = 0;

float inverso_densidade_populacional1 = 0;

float inverso_densidade_populacional2;

float super_poder1 = 0;

float super_poder2 = 0;


int comparacao;

//-----------------------------------------------------------------------------------------------------------------------------//
// Solicita os dados da primeira carta

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
scanf("%lu", &populacao1);

printf("Digite a area: ");
// Solicita a area
scanf("%f", &area1);

printf("Digite o PIB: ");
// Solicita o PIB
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
// Solicita o numero de pontos turisticos
scanf("%d", &nro_pontos_turisticos1);

//Calcular densidade populacional

densidade_populacional1 = populacao1 / area1;

//Calcular PIB per capita

pib_per_capita1 = pib1 / populacao1;

//Calcular inverso da densidade populacional
inverso_densidade_populacional1 = area1 / populacao1;

//Calcular super poder
super_poder1 = populacao1 + area1 + pib1 + nro_pontos_turisticos1 + densidade_populacional1 + pib_per_capita1 + inverso_densidade_populacional1;

printf("\n");
//------------------------------------------------------------------------------------------------------------------//

// Repetindo o processo para a segunda carta

printf("Carta do Trunfo - 2\n");

printf("Digite o estado: ");

scanf("%s", estado2);

printf("Digite o codigo da carta: ");

scanf("%s", codigo_carta);

printf("Digite o nome da cidade: ");

scanf("%s", nome_cidade2);

printf("Digite a populacao: ");

scanf("%lu", &populacao2);

printf("Digite a area: ");

scanf("%f", &area2);

printf("Digite o PIB: ");

scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");

scanf("%d", &nro_pontos_turisticos2);

//Calcular densidade populacional
densidade_populacional2 = populacao2 / area2;

//Calcular PIB per capita
pib_per_capita2 = pib2 / populacao2;

//Calcular inverso da densidade populacional
inverso_densidade_populacional2 = area2 / populacao2;

//Calcular super poder
super_poder2 = populacao2 + area2 + pib2 + nro_pontos_turisticos2 + densidade_populacional2 + pib_per_capita2 + inverso_densidade_populacional2;

printf("\n");

//-----------------------------------------------------------------------------------------------------------------------------//

// Exibe os dados da primeira carta

printf("Carta do Trunfo - 1\n");

printf("\nEstado: %s\n", estado);

printf("Codigo da carta: %s\n", codigo_carta);

printf("Nome da cidade: %s\n", nome_cidade);

printf("Populacao: %lu\n", populacao1);

printf("Area: %.2f\n", area1);

printf("PIB: %.2f\n", pib1);

printf("Numero de pontos turisticos: %d\n", nro_pontos_turisticos1);

printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);

printf("PIB per capita: %.2f reais\n", pib_per_capita1);

// Exibir super poder
printf("Super Poder: %.2f\n", super_poder1);

printf("\n");

//------------------------------------------------------------------------------------------------------------------//

// Exibe os dados da segunda carta

printf("Carta do Trunfo - 2\n");

printf("\nEstado: %s\n", estado2);

printf("Codigo da carta: %s\n", codigo_carta);

printf("Nome da cidade: %s\n", nome_cidade2);

printf("Populacao: %lu\n", populacao2);

printf("Area: %.2f\n", area2);

printf("PIB: %.2f\n", pib2);

printf("Numero de pontos turisticos: %d\n", nro_pontos_turisticos2);

printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);

printf("PIB per capita: %.2f reais\n", pib_per_capita2);

// Exibir super poder
printf("Super Poder: %.2f\n", super_poder2);

printf("\n");

//-----------------------------------------------------------------------------------------------------------------------------//

//Comparação de atributos

if (area1 > area2) {
    printf("A carta 1- %s, %s, %.2f.\n", estado, nome_cidade, area1);
    printf("A carta 2- %s, %s, %.2f.\n", estado2, nome_cidade2, area2);
    printf("A carta 1 possui valor maior de area.\n");
} else if (area1 < area2) {
    printf("A carta 1- %s, %s, %.2f.\n", estado, nome_cidade, area1);
    printf("A carta 2- %s, %s, %.2f.\n", estado2, nome_cidade2, area2);
    printf("A carta 2 possui valor maior de area.\n");
} else {
    printf("A carta 1- %s, %s, %.2f.\n", estado, nome_cidade, area1);
    printf("A carta 2- %s, %s, %.2f.\n", estado2, nome_cidade2, area2);
    printf("As cartas possuem a mesma area.\n");
}
//-----------------------------------------------------------------------------------------------------------------------------//
//Comparar densidade populacional
if (densidade_populacional1 > densidade_populacional2) {
    printf("A carta 1- %s, %s, %.2f.\n", estado, nome_cidade, densidade_populacional1);
    printf("A carta 2- %s, %s, %.2f.\n", estado2, nome_cidade2, densidade_populacional2);
    printf("A carta 1 possui maior densidade populacional.\n");
} else if (densidade_populacional1 < densidade_populacional2) {
    printf("A carta 1- %s, %s, %.2f.\n", estado, nome_cidade, densidade_populacional1);
    printf("A carta 2- %s, %s, %.2f.\n", estado2, nome_cidade2, densidade_populacional2);
    printf("A carta 2 possui maior densidade populacional.\n");
} else {
    printf("A carta 1- %s, %s, %.2f.\n", estado, nome_cidade, densidade_populacional1);
    printf("A carta 2- %s, %s, %.2f.\n", estado2, nome_cidade2, densidade_populacional2);
    printf("As cartas possuem a mesma densidade populacional.\n");
}

int resultadoB = (densidade_populacional1 < densidade_populacional2) ? 1 : (densidade_populacional1 > densidade_populacional2) ? 2 : 0;
// Exibir o resultado da comparação
printf(resultadoB == 1 ? "A carta 1 com menor densidade populacional é a vencedora.\n" : "A carta 2 com menor densidade populacional é vencedora.\n");
printf("\n");


// Resultado da comparação
//int resultadoA = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
// Exibir o resultado da comparação
//printf(resultadoA == 1 ? "A carta 1 é vencedora.\n" : "A carta 2 é vencedora.\n");
//printf("\n");





}