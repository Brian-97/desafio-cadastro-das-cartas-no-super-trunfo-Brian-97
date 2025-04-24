#include <stdio.h>

int main() {


    int C1_pontos_turisticos;
    int C2_pontos_turisticos;
    float C1_populacao, C1_area, C1_pib, C1_densidade, C1_pib_capita;
    float C2_populacao, C2_area, C2_pib, C2_densidade, C2_pib_capita;
    char C1_cidade[50], C1_cod_cidade[15];
    char C2_cidade[50], C2_cod_cidade[15];

    printf("\t **** Configuração da carta 01 **** \n");
    printf("Informe o nome da cidade 01\n");
    scanf("%49s", C1_cidade);

    printf("Informe o codigo cidade 01\n");
    scanf("%14s", C1_cod_cidade);

    printf("Informe a quantidade de pontos turisticos da cidade 01\n");
    scanf("%d", &C1_pontos_turisticos);

    printf("Informe área da cidade 01\n");
    scanf("%f", &C1_area);

    printf("Informe o PIB cidade 01\n");
    scanf("%f", &C1_pib);

    printf("Informe a população da cidade 01\n");
    scanf("%f", &C1_populacao);

    printf("\t **** Configuração da carta 02 **** \n");
    printf("Informe o nome da cidade 02\n");
    scanf("%49s", C2_cidade);

    printf("Informe o codigo cidade 02\n");
    scanf("%14s", C2_cod_cidade);

    printf("Informe a quantidade de pontos turisticos da cidade 02\n");
    scanf("%d", &C2_pontos_turisticos);

    printf("Informe área da cidade 02\n");
    scanf("%f", &C2_area);

    printf("Informe o PIB cidade 02\n");
    scanf("%f", &C2_pib);

    printf("Informe a população da cidade 02\n");
    scanf("%f", &C2_populacao);

    C1_densidade = C1_populacao / C1_area;
    C1_pib_capita = C1_pib / C1_populacao;

    C2_densidade = C2_populacao / C2_area;
    C2_pib_capita = C2_pib / C2_populacao;

    printf("\t **** Carta configurada 01 **** \n");
    printf("\t\tCidade: %s \n\t\tCodigo: %s \n\t\tPontos Turisticos: %d \n\t\tÁrea da cidade: %f \n" , C1_cidade, C1_cod_cidade, C1_pontos_turisticos, C1_area);
    printf("\t\tPIB: %f \n\t\tPopulação: %f \n" , C1_pib, C1_populacao);
    printf("\t\tDensidade: %f \n\t\tPIB per capita: %f \n\n" , C1_densidade, C1_pib_capita);

    printf("\t **** Carta configurada 02 **** \n");
    printf("\t\tCidade: %s \n\t\tCodigo: %s \n\t\tPontos Turisticos: %d \n\t\tÁrea da cidade: %f \n" , C2_cidade, C2_cod_cidade, C2_pontos_turisticos, C2_area);
    printf("\t\tPIB: %f \n\t\tPopulação: %f \n" , C2_pib, C2_populacao);
    printf("\t\tDensidade: %f \n\t\tPIB per capita: %f \n\n" , C2_densidade, C2_pib_capita);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}