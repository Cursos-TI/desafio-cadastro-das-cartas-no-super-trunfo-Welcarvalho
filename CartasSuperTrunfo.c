#include <stdio.h>



int main() {
    //D1: Organização das Var dividias em conjunto 1 e 2
    //D2: Criação das float para operação matematica densidPop e perCap 
    char    estado1 , estado2;
    char    codCard1[4],  codCard2[4];
    char    namecid1[20], namecid2[20];
    unsigned long int populacao1, populacao2;
    float   area1, area2;
    float   pib1, pib2;
    int     numTuriste1, numTuriste2;
    float   densidPop1, densidPop2;
    float   perCap1, perCap2;
    float   soma1, soma2;
    int     resultado;
    
    
    //D1: Apresentação do Jogo
    printf("**Olá sejá bem vindo**\n-----------------------\n SUPER TRUNFO - CIDADES\n-----------------------\n\n");
    
    //D1: Escolha da Carta 1:
    printf("-->CARTA N1<--\n");
    printf("Digite uma letra de A a H representando um dos estados\n");
    scanf(" %c", &estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (Ex: A01, B03)\n");
    scanf("%s", codCard1);
    printf("Informe o nome da cidade\n");
    scanf("%s", namecid1);
    printf("Informe o número de Habitantes\n");
    scanf("%lu", &populacao1);
    printf("Informe a área da Cidade (km²)\n");
    scanf("%f", &area1);
    printf("Informe o (PIB) da Cidade\n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de Pontos Turísticos:\n");
    scanf("%d", &numTuriste1);

    //D1: Escolha da Carta 2:
    printf("\n\n-->CARTA N2<--\n");
    printf("Digite uma letra de A a H representando um dos estados\n");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (Ex: A01, B03)\n");
    scanf("%s", codCard2);
    printf("Informe o nome da cidade\n");
    scanf("%s", namecid2);
    printf("Informe o número de Habitantes\n");
    scanf("%lu", &populacao2);
    printf("Informe a área da Cidade (km²)\n");
    scanf("%f", &area2);
    printf("Informe o (PIB) da Cidade\n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de Pontos Turísticos:\n");
    scanf("%d", &numTuriste2);


    //D1: Respostas CartaN1
    //D2: Nova pergnta sobre Densidade Pop e Pip per capita
    //D2: Implementado cod para calcular a D. populacional e  PIB per capita.
    printf("\n\nCARTA N1\n"); 
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCard1);
    printf("Nome da cidade: %s\n", namecid1);
    printf("População: %lu\n", populacao1);
    printf("Área (em km²): %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numTuriste1);
    densidPop1 = (float) populacao1 /area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidPop1);
    perCap1 = (float) pib1 / populacao1;
    printf("PIB per Capita: %.2f reais\n", perCap1);
    soma1 = (float) populacao1 + area1 + pib1 + numTuriste1 + densidPop1 + perCap1;
    printf("Super Poder: %.2f", soma1);

    //D1: Respostas CartaN2
    //D2: Nova pergnta sobre Densidade Pop e Pip per capita
    printf("\n\n\nCARTA N2\n"); 
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCard2);
    printf("Nome da cidade: %s\n", namecid2);
    printf("População: %lu\n", populacao2);
    printf("Área (em km²): %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numTuriste2);
    densidPop2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidPop2);
    perCap2 = (float) pib2 / populacao2;
    printf("PIB per Capita: %.2f reais\n", perCap2);
    soma2 = (float) populacao2 + area2 + pib2 + numTuriste2 + densidPop2 + perCap2;
    printf("Super Poder: %.2f\n\n", soma2);

    //Comparação de Cartas:

    printf("Comparação de Cartas:\n");
    resultado = populacao1 > populacao2;
    printf("População: %d\n", resultado);
    resultado = area1 > area2;
    printf("Área:%d\n", resultado);
    resultado = pib1 > pib2;    
    printf("PIB: %d\n", resultado);
    resultado = numTuriste1 > numTuriste2;
    printf("Pontos Turísticos: %d\n", resultado);
    resultado = densidPop1 < densidPop2;
    printf("Densidade Populacional: %d\n", resultado);
    resultado = perCap1 > perCap2;
    printf("PIB per Capita: %d\n", resultado);
    resultado = soma1 > soma2;
    printf("Super Poder: %d\n", resultado);
    

    return 0;
}
