#include <stdio.h>
#include <string.h>


int main() {
     char estado1, codigo1[4], nome1[50], estado2, codigo2[4], nome2[50];
     int populacao1, ponTuristicos1, populacao2, ponTuristicos2;
     float area1, pib1, area2, pib2;

     printf("Digite as seguintes informações da carta 1: \n\n");

     printf("Nome da carta, sem acentos: ");
     scanf("%[^\n]s", nome1); // Aparentemente o C ODEIA strings compostas e acentos.

     /*
     Facilmente a parte do código que me quebrou. Eu não faço idéia de por que é tão difícil ler uma string composta em C, mas tudo que podia ter dado errado pra essa linha de código não funcionar, deu. Se eu implementar essa solução em outro código e falhar, posso muito bem desistir dessa linguagem de programação. E eu ainda não consegui fazer funcionar com palavras com acento.
     */
       
     printf("Estado (primeira letra): ");
     scanf(" %c", &estado1);

     printf("Código (letra do estado + número): ");
     scanf("%s", codigo1);

     /*
     Eu tentei fazer com que o código montasse o código da carta sozinho, invés de depender do usuário, mas sem uma estrutura de repetição, é complicado. Refazer mais tarde em um outro exercício?
     */

     printf("População: ");
     scanf("%d", &populacao1);

     printf("Área em Km²: ");
     scanf("%f", &area1);

     printf("PIB em bilhões de reais: ");
     scanf("%f", &pib1);

     printf("Número de pontos turísticos: ");
     scanf("%d", &ponTuristicos1);

     printf("\n\nDigite as seguintes informações da carta 2: \n\n");
     scanf("%*c"); //EXTREMAMENTE importante pra o código não pular

     printf("Nome da carta, sem acentos: ");
     scanf("%[^\n]s", nome2);
       
     printf("Estado (primeira letra): ");
     scanf(" %c", &estado2);

     printf("Código (letra do estado + número): ");
     scanf("%s", codigo2);

     printf("População: ");
     scanf("%d", &populacao2);

     printf("Área em Km²: ");
     scanf("%f", &area2);

     printf("PIB em bilhões de reais: ");
     scanf("%f", &pib2);

     printf("Número de pontos turísticos: ");
     scanf("%d", &ponTuristicos2);

     printf("\nCarta 1:\n");
     printf("Estado: %c \n", estado1);
     printf("Código: %s \nNome: %s \nPopulação: %d", codigo1, nome1, populacao1);
     printf("\nÁrea: %.2fKm² \nPIB: R$ %.2f bilhões \nPontos turísticos: %d", area1, pib1, ponTuristicos1);

     printf("\n\nCarta 2:\n");
     printf("Estado: %c \n", estado2);
     printf("Código: %s \nNome: %s \nPopulação: %d", codigo2, nome2, populacao2);
     printf("\nÁrea: %.2fKm² \nPIB: R$ %.2f bilhões \nPontos turísticos: %d", area2, pib2, ponTuristicos2);

     return 0;
}