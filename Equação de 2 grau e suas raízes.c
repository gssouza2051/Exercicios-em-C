/*Desenvolver um algoritmo que leia os coeficientes (a , b e c) 
de uma equação do segundo grau e calcule suas raízes. O programa deve mostrar, quando po
ssível, o valor das raízes calculadas e a classificação das raízes. */
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "");	
float a, b, c, delta, X1, X2;
printf("\nDigite o valor de a: ");
scanf("%f",&a);
printf("\nDigite o valor de b: ");
scanf("%f",&b);
printf("\nDigite o valor de c: ");
scanf("%f",&c);

delta = (pow(b,2) - 4 * a * c);
X1 = (-b + sqrt(delta))/(2 * a);
X2 = (-b - sqrt(delta))/ (2 * a);

if (delta == 0)
{
printf("RAIZ UNICA\n");
printf("X1 = %.2f\n",X1);
}

else if (delta < 0 )
{
printf("RAIZES IMAGINARIAS\n");
}

else if (delta > 0 )
{
printf("RAIZES DISTINTAS\n");
printf("X1 = %.2f\n",X1);
printf("X2 = %.2f\n",X2);
}

return 0;

}

