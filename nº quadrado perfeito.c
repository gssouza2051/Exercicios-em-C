/* N�meros quadrados perfeitos s�o aqueles cuja raiz quadrada � um n�mero inteiro.
 Fazer um algoritmo que dado um n�mero
 inteiro positivo, calcule se ele � ou n�o um quadrado perfeito. */
 
 #include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int numero, verificaint;
float verificar, intoufloat;

printf("\nDigite um n�mero qualquer: ");
scanf("%d",&numero);

verificar = sqrt(numero);
verificaint = verificar;
intoufloat = verificar - verificaint;

if (intoufloat == 0){
printf("� QUADRADO PERFEITO\n");
}

else {
printf("N�O � QUADRADO PERFEITO\n");
} 

return 0;
}