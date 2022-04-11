/* Números quadrados perfeitos são aqueles cuja raiz quadrada é um número inteiro.
 Fazer um algoritmo que dado um número
 inteiro positivo, calcule se ele é ou não um quadrado perfeito. */
 
 #include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int numero, verificaint;
float verificar, intoufloat;

printf("\nDigite um número qualquer: ");
scanf("%d",&numero);

verificar = sqrt(numero);
verificaint = verificar;
intoufloat = verificar - verificaint;

if (intoufloat == 0){
printf("É QUADRADO PERFEITO\n");
}

else {
printf("NÃO É QUADRADO PERFEITO\n");
} 

return 0;
}