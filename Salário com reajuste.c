/* Fazer um algoritmo que calcule e imprima o sal�rio reajustado de 
um funcion�rio de acordo com as seguintes regras:
� Sal�rio de at� R$300,00 reajuste de 50%;
� Sal�rio maiores que R$300,00 reajuste de 30%; */

#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
float salario, salarioreajustado;

printf("\nInforme seu sal�rio:  ");
scanf("%f",&salario);

if (salario <= 300.00){
salarioreajustado = (0.5 * salario) + salario;	
printf("SAL�RIO COM REAJUSTE = %.2f\n",salarioreajustado);
}

else if (salario > 300.00){
salarioreajustado = (0.3 * salario) + salario;	
printf("SAL�RIO COM REAJUSTE = %.2f\n",salarioreajustado);
}
return 0;	
}