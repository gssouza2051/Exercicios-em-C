/* Fa�a um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este 
n�mero � par ou impar, se � positivo ou negativo. */

#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int numeroint;

printf("\nDigite um n�mero qualquer: ");
scanf("%d",&numeroint);

if (numeroint > 0){
printf("N�MERO POSITIVO\n");
}

else if (numeroint < 0){
printf("N�MERO NEGATIVO\n");
}

if ( numeroint % 2 == 0){
printf("N�MERO PAR\n");
}

else if ( numeroint % 2 != 0){
printf("N�MERO �MPAR\n");
}

return 0;	
}
