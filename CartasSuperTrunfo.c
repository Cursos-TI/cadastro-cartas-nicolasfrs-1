#include <stdio.h>

// Nivel Novato.
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    int ptsturisticos1, ptsturisticos2; 
    int populacao1, populacao2;
    float pib1, pib2;
    float area1, area2;
    char estado1[10], estado2[10];
    char carta1[10], carta2[10];
    char cidade1[50], cidade2[50];

// Abaixo está o começo do Super Trunfo, aqui apenas apresenta o jogo ao usuario.
    printf ("Carta 1. \n"); 
    printf ("Bem-vindo ao Super Trunfo.\n");
    printf ("Leia as perguntas, e responda corretamente.\n");

// Abaixo começa as perguntas e respostas da Carta 1 ( entradas e saidas )
   
    // Primeiro estado armazenado! (estado1)
    printf (" Digite uma letra para um estado, de 'A' a 'H'; \n" );
    scanf(" %c", &estado1);

    // Primeira carta armazenada! (carta1)
    printf (" Digite o Codigo da Carta, por exemplo; 01. %s \n");
    scanf(" %s", carta1); 

    // Primeira cidade armazenada! (cidade1)
    printf (" Digite o nome da cidade, exemplo ; São Paulo. %c \n" );
    scanf(" %49[^\n]", cidade1);

    // Primeira população armazenada (populacao1)
    printf (" Digite o quanto de população exite nessa cidade; %d \n");
    scanf (" %d", &populacao1);

    // Primeira area armazenada! (area1)
    printf (" Digite a Area da cidade; %f \n");
    scanf (" %f", &area1);

    // Primeiro PIB armazenado! (pib1)
    printf (" Qual o PIB da cidade ?; %e \n");
    scanf (" %e", &pib1);

    // Primeiro PONTO TURISTICO armazenado! (ptsturisticos1)
    printf (" Quantos pontos turisticos exitem na cidade? %d \n");
    scanf (" %d", &ptsturisticos1);

    
    // Abaixo começa a Carta 2

    // Abaixo começa as perguntas e respostas da Carta 2 ( entradas e saidas )
    printf(" Carta 2. \n");
    printf (" Bem vindo a segunda fase do Super Trunfo. \n");
    printf (" Leia e responda. \n"); 

    // Primeiro estado armazenado! (estado2)
    printf (" Digite uma letra para um estado, de 'A' a 'H'; \n" );
    scanf(" %c", &estado2);

    // Primeira carta armazenada! (carta2)
    printf (" Digite o Codigo da Carta, por exemplo; 01. %s \n");
    scanf(" %s", carta2); 

    // Primeira cidade armazenada! (cidade2)
    printf (" Digite o nome da cidade, exemplo ; São Paulo. %c \n" );
    scanf(" %49[^\n]", cidade2);

     // Primeira população armazenada (populacao2)
    printf (" Digite o quanto de população exite nessa cidade; %d \n");
    scanf (" %d", &populacao2);

     // Primeira area armazenada! (area2)
    printf (" Digite a Area da cidade; %f \n");
    scanf (" %f", &area2);

    // Primeiro PIB armazenado! (pib1)
    printf (" Qual o PIB da cidade ?; %e \n");
    scanf (" %e", &pib2);

    // Primeiro PONTO TURISTICO armazenado! (ptsturisticos2)
    printf (" Quantos pontos turisticos exitem na cidade? %d \n");
    scanf (" %d", &ptsturisticos2);

    
    // Agora Super Trunfo vai aparecer 

    // Carta 1

    printf (" Carta 1 \n");
    printf ("Estado; %c\n", estado1 );
    printf ("Carta; %s\n", carta1 );
    printf ("Cidade; %s\n", cidade1 );
    printf ("População; %d\n", populacao1 );
    printf ("Área; %f\n", area1 );
    printf ("PIB; %e\n", pib1 );
    printf ("Pontos Turisticos; %d\n", ptsturisticos1 );

    // Carta 2

 printf (" Carta 1 \n");
    printf ("Estado; %c\n", estado2 );
    printf ("Carta; %s\n", carta2 );
    printf ("Cidade; %s\n", cidade2 );
    printf ("População; %d\n", populacao2 );
    printf ("Área; %f\n", area2 );
    printf ("PIB; %e\n", pib2 );
    printf ("Pontos Turisticos; %d\n", ptsturisticos2 );



    return 0;
}
