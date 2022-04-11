/* Faça um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este 
número é par ou impar, se é positivo ou negativo. */

#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int numeroint;

printf("\nDigite um número qualquer: ");
scanf("%d",&numeroint);

if (numeroint > 0){
printf("NÚMERO POSITIVO\n");
}

else if (numeroint < 0){
printf("NÚMERO NEGATIVO\n");
}

if ( numeroint % 2 == 0){
printf("NÚMERO PAR\n");
}

else if ( numeroint % 2 != 0){
printf("NÚMERO ÍMPAR\n");
}

return 0;	
}
