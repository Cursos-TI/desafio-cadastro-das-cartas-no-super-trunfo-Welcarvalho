#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Organização das Var dividias em conjunto 1 e 2
    char    estado1 , estado2;
    char    codCard1[4],  codCard2[4];
    char    namecid1[20], namecid2[20];
    int     populacao1, populacao2;
    float   area1, area2;
    float   pib1, pib2;
    int     numTuriste1, numTuriste2; 
    
    //Apresentação do Jogo
    printf("**Olá sejá bem vindo**\n-----------------------\n SUPER TRUNFO - CIDADES\n-----------------------\n\n");
    
    //Escolha da Carta 1:
    printf("-->CARTA N1<--\n");
    printf("Digite uma letra de A a H representando um dos estados\n");
    scanf(" %c", &estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (Ex: A01, B03)\n");
    scanf("%s", codCard1);
    printf("Informe o nome da cidade\n");
    scanf("%s", namecid1);
    printf("Informe o número de Habitantes\n");
    scanf("%d", &populacao1);
    printf("Informe a área da Cidade (km²)\n");
    scanf("%f", &area1);
    printf("Informe o (PIB) da Cidade\n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de Pontos Turísticos:\n");
    scanf("%d", &numTuriste1);

    
    printf("\n\nCARTA N1\n"); 
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCard1);
    printf("Nome da cidade: %s\n", namecid1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %fkm²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numTuriste1);

    return 0;
}
