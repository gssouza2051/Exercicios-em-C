/* Fazer um algoritmo que dado um número, calcular e escrever se este é 
positivo ou negativo, e múltiplo ou não de 3, ao mesmo tempo. */

#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
int numero;

printf("\nDigite um número qualquer:  ");
scanf("%d",&numero);

if (numero < 0)
{
printf("NEGATIVO\n");
}
else if (numero > 0)
{
printf("POSITIVO\n");
}

if (numero % 3 != 0)
{
printf("NAO MULTIPLO DE 3\n");
}

else if (numero % 3 == 0)
{
printf("MULTIPLO DE 3\n");
}
return 0;	
}