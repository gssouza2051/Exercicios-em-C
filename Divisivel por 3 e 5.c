/*Desenvolver um algoritmo que leia um número 
inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo. */
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "");
int numero;
printf("\n----------NÚMERO DIVISÍVEL POR 3 E 5----------\n");
printf("Digite um número que seja divisível por 3 e 5 ao mesmo tempo: ");
scanf("%d",&numero);

if (((numero % 5)==0) && ((numero % 3)==0)){
printf("O NÚMERO É DIVISÍVEL\n");
}
else{
printf("O NÚMERO NãO é DIVISÍVEL\n");
}
return 0;
}