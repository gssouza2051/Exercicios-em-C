//Informar um pre�o de um produto e calcular novo pre�o com desconto de 9%

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL,"");	
 float precoatual;
 printf("Informe o preco atual do produto: ");
 scanf("%f",&precoatual);
 printf("\n\nNovo preco com desconto de 9%% �: %3.2f\n\n",precoatual * 0.91);
 system("PAUSE");
 return 0;
} 
