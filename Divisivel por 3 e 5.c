/*Desenvolver um algoritmo que leia um n�mero 
inteiro e verifique se o n�mero � divis�vel por 5 e por 3 ao mesmo tempo. */
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "");
int numero;
printf("\n----------N�MERO DIVIS�VEL POR 3 E 5----------\n");
printf("Digite um n�mero que seja divis�vel por 3 e 5 ao mesmo tempo: ");
scanf("%d",&numero);

if (((numero % 5)==0) && ((numero % 3)==0)){
printf("O N�MERO � DIVIS�VEL\n");
}
else{
printf("O N�MERO N�O � DIVIS�VEL\n");
}
return 0;
}