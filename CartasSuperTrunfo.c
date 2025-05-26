#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


    int codigoCarta1, codigoCarta2; // Codigo das Cartas
    int popupacaoCidade1, populacaoCidade2; // População das Cidades
    int pontosTuristicosCidade1, pontosTuristicosCidade2; // Pontos Turísticos das Cidades
    char estado1, estado2; // Estados das cidades
    char nomeEstado1[50], nomeEstado2[50]; // Nomes das cidades
    float areaCidade1, areaCidade2; // Area das Cidades
    float pibCidade1, pibCidade2; // Pib das cidades

    printf("## INICIO - Carta 1 ##\n"); // Inicio da Carta Numero 1

    printf("Inicial do Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Codigo do estado: \n");
    scanf("%d", &codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeEstado1);

    printf("Digite o numero da população: \n");
    scanf("%d", &popupacaoCidade1);

    printf("Digite a área do estado: \n");
    scanf("%f", &areaCidade1);

    printf("Digite o Pib do Estado: \n");
    scanf("%f", &pibCidade1);

    printf("Digite o numero de pontos turísticos em seu estado: \n");
    scanf("%d", &pontosTuristicosCidade1);


    printf("## FIM - Carta 1 ##\n"); // FIM CARTA 1
    printf("## INICIO - EXIBIÇÃO CARTA 1 ## \n");

    printf("Nome do Estado: %s - Codigo: %d - Inicial: %c \n", nomeEstado1, codigoCarta1, estado1);
    printf("Quantidade População: %d - Aréa do Estado: %.2f - Pib: %.2f \n", popupacaoCidade1, areaCidade1, pibCidade1);
    printf("Quantidade de Pontos Turisticos: %d \n", pontosTuristicosCidade1);

    printf("## FIM - EXIBIÇÃO CARTA 1 ## \n ");

    printf("## INICIO - Carta 2 ##\n"); // Inicio da Carta Numero 2

    printf("Inicial do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo do estado: \n");
    scanf("%d", &codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeEstado2);

    printf("Digite o numero da população: \n");
    scanf("%d", &populacaoCidade2);

    printf("Digite a área do estado: \n");
    scanf("%f", &areaCidade2);

    printf("Digite o Pib do Estado: \n");
    scanf("%f", &pibCidade2);

    printf("Digite o numero de pontos turísticos em seu estado: \n");
    scanf("%d", &pontosTuristicosCidade2);


    printf("## FIM - Carta 2 ##\n"); // FIM CARTA 2
    printf("## INICIO - EXIBIÇÃO CARTA 2 ## \n");

    printf("Nome do Estado: %s - Codigo: %d - Inicial: %c \n", nomeEstado2, codigoCarta2, estado2);
    printf("Quantidade População: %d - Aréa do Estado: %.2f - Pib: %.2f \n", populacaoCidade2, areaCidade2, pibCidade2);
    printf("Quantidade de Pontos Turisticos: %d \n", pontosTuristicosCidade2);

    printf("## FIM - EXIBIÇÃO CARTA 2 ## \n ");




    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
