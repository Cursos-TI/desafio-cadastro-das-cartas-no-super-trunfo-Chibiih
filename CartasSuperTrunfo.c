#include <stdio.h>

// Teste Scheilla M M Vieira

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// o que é necessário para montar a estrutura basica

// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
// Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
// Nome da Cidade: O nome da cidade. Tipo: char[] (string)
// População: O número de habitantes da cidade. Tipo: int
// Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
// PIB: O Produto Interno Bruto da cidade. Tipo: float
// Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

int main() {
    // Definindo as variaveis
    char estadoUm, estadoDois, codigoCartaUm[4], codigoCartaDois[4], nomeCidadeUm[35], nomeCidadeDois[35];
    int populacaoUm, populacaoDois, pontosTuristicosUm, pontosTuristicosDois;
    float areaUm, areaDois, pibUm, pibDois; 
    
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
