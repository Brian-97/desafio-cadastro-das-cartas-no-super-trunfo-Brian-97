#include <stdio.h>

int main() {


    int pontos_turisticos;
    float populacao, area, pib, densidade, pib_capita;
    char cidade[50], cod_cidade[15];

    printf("Informe o nome da cidade \n");
    scanf("%49s", cidade);

    printf("Informe o codigo cidade \n");
    scanf("%14s", cod_cidade);

    printf("Informe a quantidade de pontos turisticos da cidade \n");
    scanf("%d", &pontos_turisticos);

    printf("Informe área da cidade \n");
    scanf("%f", &area);

    printf("Informe o PIB cidade \n");
    scanf("%f", &pib);

    printf("Informe a população da cidade \n");
    scanf("%f", &populacao);

    densidade = populacao / area;
    pib_capita = pib / populacao;

    printf("\t **** Carta configurada **** \n");
    printf("\t\tCidade: %s \n\t\tCodigo: %s \n\t\tPontos Turisticos: %d \n\t\tÁrea da cidade: %f \n" , cidade, cod_cidade, pontos_turisticos, area);
    printf("\t\tPIB: %f \n\t\tPopulação: %f \n" , pib, populacao);
    printf("\t\tDensidade: %f \n\t\tPIB per capita: %f \n\n" , densidade, pib_capita);

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
