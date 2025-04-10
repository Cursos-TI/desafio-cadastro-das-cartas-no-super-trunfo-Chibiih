#include <stdio.h>

// Teste Scheilla M M Vieira

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

//Informações importantes
// %d: Imprime um inteiro no formato decimal.
// %f: Imprime um número de ponto flutuante no formato padrão.
// %c: Imprime um único caractere.
// %s: Imprime uma cadeia (string) de caracteres.

int main() {
    // Definindo as variaveis
    char estadoUm, estadoDois, codigoCartaUm[4], codigoCartaDois[4], nomeCidadeUm[35], nomeCidadeDois[35];
    int populacaoUm, populacaoDois, pontosTuristicosUm, pontosTuristicosDois;
    float areaUm, areaDois, pibUm, pibDois, densidadeUm, densidadeDois, pibcapUm, pibcapDois;

    // Coletando os dados pelo usuário

    printf("Inserção de dados para o jogo Super Trunfo \n \n");

    printf("Insira o primeiro estado da carta 1 (Uma letra entre A - H):");
    scanf("%c", &estadoUm);
    
    printf("Insira o código da carta 1 (Sendo a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", &codigoCartaUm);
    
    printf("Insira o nome da Cidade da carta 1: ");
    scanf("%s", &nomeCidadeUm);
    
    printf("Insira a quantidade da população da carta 1: ");
    scanf("%d", &populacaoUm);
    
    printf("Insira a area da carta 1: ");
    scanf("%f", &areaUm);

    printf("Insira o PIB da carta 1: ");
    scanf("%f", &pibUm);

    printf("Insira o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontosTuristicosUm);

    printf("\n\nAgora vamos inserir os dados da Carta 2 \n\nInsira o primeiro estado da carta 2: ");
    // não sei porque ele pula pro proximo então arrumei o erro dessa forma...
    scanf("%c", &estadoDois);
    scanf("%c", &estadoDois);
    
    printf("Insira o código da carta 2: ");
    scanf("%s", &codigoCartaDois);
    
    printf("Insira o nome da Cidade da carta 2: ");
    scanf("%s", &nomeCidadeDois);
    
    printf("Insira a quantidade da população da carta 2: ");
    scanf("%d", &populacaoDois);
    
    printf("Insira a area da carta 2: ");
    scanf("%f", &areaDois);

    printf("Insira o PIB da carta 2: ");
    scanf("%f", &pibDois);

    printf("Insira o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicosDois);

// Mostrando as informações inseridas nas cartas.

    printf("Informações da cartas \n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estadoUm);
    printf("Codigo: %s \n", codigoCartaUm);
    printf("Cidade: %s \n", nomeCidadeUm);
    printf("População: %d \n", populacaoUm);
    printf("Área: %.2f km² \n", areaUm);
    printf("PIB: %.2f bilhões de reais \n", pibUm);
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
    printf("População: %.2d \n", populacaoDois);
    printf("Área: %.2f km² \n", areaDois);
    printf("PIB: %.2f bilhões de reais \n", pibDois);
    printf("Número de pontos turisticos: %d \n", pontosTuristicosDois);
    //Nível aventureiro
    float quociente3 = (float) populacaoDois / areaDois; 
    printf("Densidade populacional 2: %.2f hab/km²\n", quociente3);
    float quociente4 = (float) pibDois / populacaoDois;
    printf("PIB per capita 2: %.2f reais\n", quociente4);

    // Nível Aventureiro:  Calcular densidade populacional (hab/km²) e armazenar em uma variavel float
    // Calcular PIB per capita (reais)
    // Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

    // nivel Mestre:

    return 0;
}
