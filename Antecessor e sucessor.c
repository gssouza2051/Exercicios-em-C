//) Ler um n�mero inteiro e imprimir seu sucessor e seu antecessor. 

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"");
int x, n1, n2;
printf("\n\n Digite um numero: ");
scanf("%d",&x);
n1=x+1;
n2=x-1;
printf("\n\nSeu sucessor � : %d",n1);
printf("\n\nSeu antecessor � : %d",n2);
printf("\n\n");
system("pause");
return (0);
}