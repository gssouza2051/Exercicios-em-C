/* Fazer um algoritmo que dado tr�s valores A, B e C verificar se eles formam um tri�ngulo. Formando tri�ngulo,
 dizer se � tri�ngulo equil�tero, is�sceles ou escaleno. */
 
#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL,"");
float A, B, C;

printf("\nDigite o primeiro lado do tri�ngulo: ");
scanf("%f",&A);
printf("\nDigite o segundo lado do tri�ngulo: ");
scanf("%f",&B);
printf("\nDigite o terceiro lado do tri�ngulo: ");
scanf("%f",&C);

if (C > A + B  || A > B + C  || B > A + C ){
printf("NAO FORMAM UM TRIANGULO\n");
}

else if ( A != B && A != C &&  B != C ){
printf("TRIANGULO ESCALENO\n");
} 

else if ( A == B && A == C){
printf("TRIANGULO EQUILATERO\n");
}

else if (A == B || A == C || B == C){
printf("TRIANGULO ISOSCELES\n");
}

return 0;	
}