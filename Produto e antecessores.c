//Ler um n�mero do teclado e imprimir todos os n�meros de 1 at� o n�mero lido. Imprimir o
//produto dos n�meros. 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
 int x, max=0, p=1;
 printf("\n\t INFORME UM N�MERO : ");
 scanf("%d",&max);
 for(x=1;x<=max;x++)
 {
//Valor menor ou igual ao numero informado.
 printf("\n\t N�mero gerados: %d ",x);
 p=p*x;
 }
 printf("\n\n O produto dos numeros gerados �: %d",p);
 printf("\n\n");
 system("pause");
 return(0);
} 