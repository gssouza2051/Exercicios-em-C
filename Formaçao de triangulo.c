/* Fazer um algoritmo que dado três valores A, B e C verificar se eles formam um triângulo. Formando triângulo,
 dizer se é triângulo equilátero, isósceles ou escaleno. */
 
#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL,"");
float A, B, C;

printf("\nDigite o primeiro lado do triângulo: ");
scanf("%f",&A);
printf("\nDigite o segundo lado do triângulo: ");
scanf("%f",&B);
printf("\nDigite o terceiro lado do triângulo: ");
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