/* Calcule e imprima o valor em reais de cada kw o valor em reais a ser pago o novo valor a ser
pago por essa residencia com um desconto de 10%. Dado: 100 kilowatts custa 1/7 do salario
minimo. quantidade de kw gasto por residencia */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"");
 float SM, kwgasto, umkw;
 printf("Informe o valor do salário mínimo: ");
 scanf("%f",&SM);
 printf("\n\nInforme total Kw gasto na residência: ");
 scanf("%f",&kwgasto);
 umkw = SM/7/100;
 printf("\n\nO valor de 1 Kw é: %3.2f\n\n",umkw);
 printf("\nO valor a ser pago pela residência é: %4.2f",kwgasto * umkw);
 printf("\n\nNovo valor a ser pago com desconto de 10%% é: %3.2f\n\n",(kwgasto * umkw) * 0.90);
 system("PAUSE");
 return 0;
} 