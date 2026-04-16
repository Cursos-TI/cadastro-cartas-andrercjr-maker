#include <stdio.h>
// Desafio Super Trunfo - Países

int main() {
// carta 01
char Estado[50];
char Código[50];
char Cidade[50];
int População1;
float ÁreaKm11;
float PIB1;
int Númerodepontoturístico1;
float Densidadepopulacional1;
float PIBpercapita1;
float SuperPoder1;

//Carta 01
printf("Estado:  \n");
scanf("%s", Estado);
printf("código da carta: \n");
scanf("%s", Código);
printf("Nome da cidade: \n");
scanf("%s", Cidade);
printf("População: \n");
scanf("%d", &População1);
printf("Área em Km²: \n");
scanf("%f", &ÁreaKm11);
printf("PIB: \n");
scanf("%f", &PIB1);
printf("Número de ponto turístico: \n");
scanf("%d", &Númerodepontoturístico1);

//Carta 01
Densidadepopulacional1 = (float)População1 / ÁreaKm11;
    PIBpercapita1 = PIB1 / (float)População1;
    SuperPoder1 = (float)População1 + ÁreaKm11 + PIB1 + (float)Númerodepontoturístico1 + PIBpercapita1 + (1.0f / Densidadepopulacional1);


    printf("\nCarta 01:\n");
    printf("Estado: %s - Código: %s\n", Estado, Código);
    printf("Cidade: %s - População: %d\n", Cidade, População1);
    printf("Área: %.2f Km² - PIB: %.2f\n", ÁreaKm11, PIB1);
    printf("Densidade Populacional: %.2f hab/Km²\n", Densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", PIBpercapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);


//Carta02
char Estado2[50];
char Código2[50];
char Cidade2[50];
int População2;
float ÁreaKm22;
float PIB2;
int Númerodepontoturístico2;
float Densidadepopulacional2;
float PIBpercapita2;
float SuperPoder2;

printf("Estado: \n");
scanf("%s", Estado2);
printf("código da carta: \n");
scanf("%s", Código2);
printf("Nome da cidade: \n");
scanf("%s", Cidade2);
printf("População: \n");
scanf("%d", &População2);
printf("Área em Km²: \n");
scanf("%f", &ÁreaKm22);
printf("PIB: \n");
scanf("%f", &PIB2);
printf("Número de ponto turístico: \n");
scanf("%d", &Númerodepontoturístico2);

//Carta 02
Densidadepopulacional2 = (float)População2 / ÁreaKm22;
    PIBpercapita2 = PIB2 / (float)População2;
SuperPoder2 = (float)População2 + ÁreaKm22 + PIB2 + (float)Númerodepontoturístico2 + PIBpercapita2 + (1.0f / Densidadepopulacional2);


    printf("\nCarta 02:\n");
    printf("Estado: %s - Código: %s\n", Estado2, Código2);
    printf("Cidade: %s - População: %d\n", Cidade2, População2);
    printf("Área: %.2f Km² - PIB: %.2f\n", ÁreaKm22, PIB2);
    printf("Densidade Populacional: %.2f hab/Km²\n", Densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", PIBpercapita2);
    
    printf("\n=== RESULTADOS DAS COMPARAÇÕES (1 para Carta 1 vence, 0 para Carta 2 vence) ===\n");

    printf("População: %d\n", População1 > População2);
    printf("Área: %d\n", ÁreaKm11 > ÁreaKm22);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: %d\n", Númerodepontoturístico1 > Númerodepontoturístico2);
    printf("Densidade Populacional: %d\n", Densidadepopulacional1 < Densidadepopulacional2); // Menor vence
    printf("PIB per Capita: %d\n", PIBpercapita1 > PIBpercapita2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);
    

return 0;

} 
