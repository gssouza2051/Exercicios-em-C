/* Fazer um algoritmo que dado os lados de um tri�ngulo A, B e C. Dizer se os lados formam um tri�ngulo:
� Ret�ngulo = (A� = B� + C�);
� Obtus�ngulo = (A� > B� + C�);
� Acut�ngulo = (A� < B� + C�) ; */

#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
float A, B, C;

printf("\nDigite o primeiro lado do tri�ngulo: ");
scanf("%f",&A);
printf("\nDigite o segundo  lado do tri�ngulo: ");
scanf("%f",&B);
printf("\nDigite o terceiro lado do tri�ngulo: ");
scanf("%f",&C);

if (pow(A,2) == pow(B,2) + pow(C,2)){
printf("TRI�NGULO RET�NGULO\n");
}

else if (pow(A,2) > pow(B,2) + pow(C,2)){
printf("TRI�NGULO OBTUS�NGULO\n");
}

else if (pow(A,2) < pow(B,2) + pow(C,2)){
printf("TRI�NGULO ACUT�NGULO\n");
}
return 0;	
}