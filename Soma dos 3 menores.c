/*Dados quatro n�meros distintos, desenvolver
 um algoritmo que determine e imprima a soma dos tr�s menores. */
 
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "");
int numero1, numero2, numero3, numero4, soma;

printf("\nDigite o primeiro n�mero: ");
scanf("%d",&numero1);
printf("\nDigite o segundo n�mero: ");
scanf("%d",&numero2);
printf("\nDigite o terceiro n�mero: ");
scanf("%d",&numero3);
printf("\nDigite o �ltimo n�mero: ");
scanf("%d",&numero4);

if(numero1 > numero2 && numero1 > numero3 && numero1 > numero4)
{
soma = (numero2 + numero3 + numero4);
printf("%d\n",soma);
}

else if(numero2 > numero1 && numero2 > numero3 && numero2 > numero4)
{
soma = numero1 + numero3 + numero4;
printf("%d\n",soma);
}

else if(numero3 > numero1 && numero3 > numero2 && numero3 > numero4)
{
soma = numero1 + numero2 + numero4;
printf("%d\n",soma);
}

else if(numero4 > numero1 && numero4 > numero2 && numero4 > numero3)
{
soma = numero1 + numero2 + numero3;
printf("%d\n",soma);
}

return 0;

}