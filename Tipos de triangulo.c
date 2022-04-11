/* Fazer um algoritmo que dado os lados de um triângulo A, B e C. Dizer se os lados formam um triângulo:
• Retângulo = (A² = B² + C²);
• Obtusângulo = (A² > B² + C²);
• Acutângulo = (A² < B² + C²) ; */

#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
float A, B, C;

printf("\nDigite o primeiro lado do triângulo: ");
scanf("%f",&A);
printf("\nDigite o segundo  lado do triângulo: ");
scanf("%f",&B);
printf("\nDigite o terceiro lado do triângulo: ");
scanf("%f",&C);

if (pow(A,2) == pow(B,2) + pow(C,2)){
printf("TRIÂNGULO RETÂNGULO\n");
}

else if (pow(A,2) > pow(B,2) + pow(C,2)){
printf("TRIÃNGULO OBTUSÂNGULO\n");
}

else if (pow(A,2) < pow(B,2) + pow(C,2)){
printf("TRIÂNGULO ACUTÂNGULO\n");
}
return 0;	
}