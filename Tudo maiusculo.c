//Digitar um nome e solicitar que seja mostrado em maiúsculo na tela. 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
main()
{
 int x,tam;
 float M;
 char nome[30];
 printf("\nDigite um nome: ");
 gets(nome);
 tam = strlen(nome);
 for(x=0; x<=tam-1; x++)
 {
 printf("%c\a",toupper(nome[x]));
 for(M=1; M<=10000000; M++);
 }
 printf("\n");
 system("pause");
 return(0);
} 