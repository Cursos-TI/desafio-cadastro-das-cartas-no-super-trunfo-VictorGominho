#include <stdio.h>
#include <string.h>


int main() {
     char estado1, codigo1[4], nome1[50], estado2, codigo2[4], nome2[50];
     int ponTuristicos1, ponTuristicos2;
     unsigned long int populacao1, populacao2;
     float area1, pib1, area2, pib2, densoPop1, densoPop2, pibCapita1, pibCapita2, superPoder1, superPoder2;
     int resultadoPop, resultadoArea, resultadoPib, resultadoPont, resultadoDensPop, resultadoPibCap, resultadoSuper;

     printf("Digite as seguintes informações da carta 1: \n\n");

     printf("Nome da carta, sem acentos: ");
     scanf("%[^\n]s", nome1); // Habilita strings compostas

     printf("Estado (primeira letra): ");
     scanf(" %c", &estado1);

     printf("Código (letra do estado + número): ");
     scanf("%s", codigo1);

     printf("População: ");
     scanf("%lu", &populacao1);

     printf("Área em Km²: ");
     scanf("%f", &area1);

     printf("PIB em bilhões de reais: ");
     scanf("%f", &pib1);

     printf("Número de pontos turísticos: ");
     scanf("%d", &ponTuristicos1);

     //Calculando a densidade populacional e PIB per capita:
     densoPop1 = populacao1 / area1;

     pibCapita1 = (pib1 * 1000000000) / populacao1;
     //Já que o usuário coloca o valor em bilhões, temos que multiplicar o valor da variável.

     printf("\n\nDigite as seguintes informações da carta 2: \n\n");
     scanf("%*c"); //EXTREMAMENTE importante pra o código não pular

     printf("Nome da carta, sem acentos: ");
     scanf("%[^\n]s", nome2);
       
     printf("Estado (primeira letra): ");
     scanf(" %c", &estado2);

     printf("Código (letra do estado + número): ");
     scanf("%s", codigo2);

     printf("População: ");
     scanf("%lu", &populacao2);

     printf("Área em Km²: ");
     scanf("%f", &area2);

     printf("PIB em bilhões de reais: ");
     scanf("%f", &pib2);

     printf("Número de pontos turísticos: ");
     scanf("%d", &ponTuristicos2);

     //Calculando a densidade populacional e PIB per capita:
     densoPop2 = populacao2 / area2;

     pibCapita2 = (pib2 * 1000000000) / populacao2;

     //Calculando o Super Poder de ambas as cartas
     superPoder1 = populacao1 + area1 + pib1 + pibCapita1 + ponTuristicos1 - densoPop1;
     superPoder2 = populacao2 + area2 + pib2 + pibCapita2 + ponTuristicos2 - densoPop2;
     /*
     printf("Super poder 1: %.2f\n", superPoder1);
     printf("Super poder 2: %.2f\n", superPoder2);
     */
    
     //Imprimindo resultados:
     printf("\nCarta 1:\n");
     printf("Estado: %c \n", estado1);
     printf("Código: %s \nNome: %s \nPopulação: %lu", codigo1, nome1, populacao1);
     printf("\nÁrea: %.2fKm² \nPIB: R$ %.2f bilhões \nPontos turísticos: %d", area1, pib1, ponTuristicos1);
     printf("\nDensidade Populacional: %.2f hab/km²", densoPop1);
     printf("\nPIB per Capita: R$ %.2f", pibCapita1);

     printf("\n\nCarta 2:\n");
     printf("Estado: %c \n", estado2);
     printf("Código: %s \nNome: %s \nPopulação: %lu", codigo2, nome2, populacao2);
     printf("\nÁrea: %.2fKm² \nPIB: R$ %.2f bilhões \nPontos turísticos: %d", area2, pib2, ponTuristicos2);
     printf("\nDensidade Populacional: %.2f hab/km²", densoPop2);
     printf("\nPIB per Capita: R$ %.2f", pibCapita2);

     //Comparando as cartas
     resultadoPop = populacao1 > populacao2;
     resultadoArea = area1 > area2;
     resultadoPib = pib1 > pib2;
     resultadoPont = ponTuristicos1 > ponTuristicos2;
     resultadoDensPop = densoPop1 < densoPop2;
     resultadoPibCap = pibCapita1 > pibCapita2;
     resultadoSuper = superPoder1 > superPoder2;

     printf("\n\nComparação de Cartas:\n\n");
     /*
     Essa seção do código claramente precisa de uma condição if pra mostrar a carta certa, mas o exercício não permite, então os resultados são estáticos. Existem outros métodos, mas estou tentando usar somente o que foi ensinado até agora.
     */
     printf("População: Carta 1 venceu (%d)\n", resultadoPop);
     printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
     printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
     printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPont);
     printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoDensPop);
     printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibCap);
     printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuper);

     return 0;
}