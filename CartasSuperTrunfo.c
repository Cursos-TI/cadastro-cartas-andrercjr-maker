#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Carta 01
char Estado[2];
char Código[1];
char Cidade[2];
int População;
float ÁreaKm2;
float PIB;
int Númerodepontoturístico;

printf("Estado:  \n");
scanf("%s", &Estado);
printf("código da carta: \n");
scanf("%s", &Código);
printf("Nome da cidade: \n");
scanf("%s", &Cidade);
printf("População: \n");
scanf("%d", &População);
printf("Área em Km²: \n");
scanf("%f", &ÁreaKm2);
printf("PIB: \n");
scanf("%f", &PIB);
printf("Número de ponto turístico: \n");
scanf("%d", &Númerodepontoturístico);

//Carta02
char Estado2[2];
char Código2[1];
char Cidade2[2];
int População2;
float ÁreaKm22;
float PIB2;
int Númerodepontoturístico2;

printf("Estado: \n");
scanf("%s", &Estado2);
printf("código da carta: \n");
scanf("%s", &Código2);
printf("Nome da cidade: \n");
scanf("%s", &Cidade2);
printf("População: \n");
scanf("%d", &População2);
printf("Área em Km²: \n");
scanf("%f", &ÁreaKm22);
printf("PIB: \n");
scanf("%f", &PIB2);
printf("Número de ponto turístico: \n");
scanf("%d", &Númerodepontoturístico2);


  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
