#include <stdio.h>

// Teste Scheilla M M Vieira

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// o que é necessário para montar a estrutura basica

// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
// Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
// Nome da Cidade: O nome da cidade. Tipo: char[] (string)
// População: O número de habitantes da cidade. Tipo: int
// Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
// PIB: O Produto Interno Bruto da cidade. Tipo: float
// Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

// %d: Imprime um inteiro no formato decimal.
// %i: Equivalente a %d.
// %f: Imprime um número de ponto flutuante no formato padrão.
// %e: Imprime um número de ponto flutuante na notação científica.
// %c: Imprime um único caractere.
// %s: Imprime uma cadeia (string) de caracteres.

int main() {
    // Definindo as variaveis
    char estadoUm, estadoDois, codigoCartaUm[4], codigoCartaDois[4], nomeCidadeUm[35], nomeCidadeDois[35];
    int populacaoUm, populacaoDois, pontosTuristicosUm, pontosTuristicosDois;
    float areaUm, areaDois, pibUm, pibDois;

    // Coletando os dados pelo usuário e imprimindo na tela os dados colidos.

    printf("Inserção de dados para o jogo Super Trunfo \n \n");

    printf("Insira o primeiro estado da carta 1 (Uma letra entre A - H):");
    scanf("%c", &estadoUm);
    printf("Estado um: %c \n", estadoUm);
    
    printf("Insira o código da carta 1 (Sendo a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", &codigoCartaUm);
    printf("Código da carta 1: %s \n", codigoCartaUm);
    
    printf("Insira o nome da Cidade da carta 1: ");
    scanf("%s", &nomeCidadeUm);
    printf("Nome da cidade 1: %s \n", nomeCidadeUm);
    
    printf("Insira a quantidade da população da carta 1: ");
    scanf("%d", &populacaoUm);
    printf("População 1:  %d \n", populacaoUm);
    
    printf("Insira a area da carta 1: ");
    scanf("%f", &areaUm);
    printf("Área 1: %f \n", areaUm);

    printf("Insira o PIB da carta 1: ");
    scanf("%f", &pibUm);
    printf("PIB 1: %f \n", pibUm);

    printf("Insira o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontosTuristicosUm);
    printf("Pontos Turisticos 1: %d \n", pontosTuristicosUm);


    printf("\n\nAgora vamos inserir os dados da Carta 2 \n\nInsira o primeiro estado da carta 2: ");
    // não sei porque ele pula pro proximo então arrumei o erro dessa forma...
    scanf("%c", &estadoDois);
    scanf("%c", &estadoDois);
    printf("Estado dois: %c \n", estadoDois);
    
    printf("Insira o código da carta 2: ");
    scanf("%s", &codigoCartaDois);
    printf("Código da carta 2: %s \n", codigoCartaDois);
    
    printf("Insira o nome da Cidade da carta 2: ");
    scanf("%s", &nomeCidadeDois);
    printf("Nome da cidade 2: %s \n", nomeCidadeDois);
    
    printf("Insira a quantidade da população da carta 2: ");
    scanf("%d", &populacaoDois);
    printf("População 2:  %d \n", populacaoDois);
    
    printf("Insira a area da carta 2: ");
    scanf("%f", &areaDois);
    printf("Área 2: %f \n", areaDois);

    printf("Insira o PIB da carta 2: ");
    scanf("%f", &pibDois);
    printf("PIB 2: %f \n", pibDois);

    printf("Insira o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicosDois);
    printf("Pontos Turisticos 2: %d \n", pontosTuristicosDois);

// Mostrando as informações inseridas nas cartas.

    printf("Informações da cartas \n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estadoUm);
    printf("Codigo: %s \n", codigoCartaUm);
    printf("Cidade: %s \n", nomeCidadeUm);
    printf("População: %d \n", populacaoUm);
    printf("Área: %f km² \n", areaUm);
    printf("PIB: %f bilhões de reais \n", pibUm);
    printf("Número de pontos turisticos: %d \n", pontosTuristicosUm);
    // Adicionando nivel aventureiro
    float quociente = (float) populacaoUm / areaUm; 
    printf("Densidade populacional 1: %.2f hab/km²\n", quociente);
    float quociente2 = (float) pibUm / populacaoUm;
    printf("PIB per capita 1: %.2f reais\n \n", quociente2);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estadoDois);
    printf("Codigo: %s \n", codigoCartaDois);
    printf("Cidade: %s \n", nomeCidadeDois);
    printf("População: %d \n", populacaoDois);
    printf("Área: %f km² \n", areaDois);
    printf("PIB: %f bilhões de reais \n", pibDois);
    printf("Número de pontos turisticos: %d \n", pontosTuristicosDois);
    //Nível aventureiro
    float quociente3 = (float) populacaoDois / areaDois; 
    printf("Densidade populacional 2: %.2f hab/km²\n", quociente3);
    float quociente4 = (float) pibDois / populacaoDois;
    printf("PIB per capita 2: %.2f reais\n", quociente4);

    // Nível Aventureiro:  Calcular densidade populacional (hab/km²) e armazenar em uma variavel float
    // Calcular PIB per capita (reais)
    // Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.



    return 0;
}
