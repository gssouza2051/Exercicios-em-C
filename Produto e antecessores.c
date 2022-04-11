//Ler um número do teclado e imprimir todos os números de 1 até o número lido. Imprimir o
//produto dos números. 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
 int x, max=0, p=1;
 printf("\n\t INFORME UM NÚMERO : ");
 scanf("%d",&max);
 for(x=1;x<=max;x++)
 {
//Valor menor ou igual ao numero informado.
 printf("\n\t Número gerados: %d ",x);
 p=p*x;
 }
 printf("\n\n O produto dos numeros gerados é: %d",p);
 printf("\n\n");
 system("pause");
 return(0);
} 