//Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%..

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
float va;
printf("\n\tDigite um numero: ");
scanf("%f",&va);
printf("\n\tValor reajustado em 10%% e: %2.2f\n",va*110/100);
printf("\n\n");
system("pause");
return 0;
} 
