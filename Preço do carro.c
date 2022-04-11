/* Desenvolver um algoritmo para calcular e imprimir o preço final de um carro. O valor do preço inicial
 de fábrica é fornecido por meio de entrada. O carro pode ter as seguintes opções:
• (a) Ar condicionado: R$ 1750,00
• (b) Pintura Metálica: R$ 800,00
• (c) Vidro Elétrico: R$ 1200,00
• (d) Direção Hidráulica: R$ 2000,00 */

#include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
char resposta1[10], resposta2[10], resposta3[10], resposta4[10];
float precofinal, precocarro, v1, v2, v3, v4;

printf("\nInforme o preço inicial de fábrica desse carro: ");
scanf("%f",&precocarro);
printf("\nO carro tem ar condicionado? ");
scanf("%s",resposta1);
printf("\nO carro tem pintura metálica? ");
scanf("%s",resposta2);
printf("\nO carro tem vidro elétrico? ");
scanf("%s",resposta3);
printf("\nO carro tem direção hidráulica? ");
scanf("%s",resposta4);


if (strcmp(resposta1,"sim")== 0){
v1 = 1750.00;
}

if (strcmp(resposta2,"sim")== 0){
v2 = 800.00;

}

if (strcmp(resposta3,"sim")== 0){
v3 = 1200.00;

}

if (strcmp(resposta4,"sim")== 0){
v4 = 2000.00;

}
precofinal = precocarro + v1 + v2 + v3 + v4  ;
printf("PRECO FINAL = %.2f\n",precofinal);

return 0;
}