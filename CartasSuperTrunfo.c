#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char    estado;
    char    codCard;
    char    namecid;
    int     populacao;
    float   areaKm;
    float   pib;
    int     numTuriste; 
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
    printf("**Olá sejá bem vindo ao jogo Super Trunfo de Países**\n **Neste jogo você vai ter a oportunidade de inserir os dados de duas cartas do Super Trunfo**\n\n");
    printf("-->CARTA N1<--\n");
    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf(" %c", &estado);
    printf("A letra escolhida foi: %c\n\n", estado);
    /*printf("Escolha o código da Carta A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");*/
    
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc. 
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
