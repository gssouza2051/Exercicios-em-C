/* Fazer um algoritmo que calcule e imprima o salário reajustado de 
um funcionário de acordo com as seguintes regras:
• Salário de até R$300,00 reajuste de 50%;
• Salário maiores que R$300,00 reajuste de 30%; */

#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
float salario, salarioreajustado;

printf("\nInforme seu salário:  ");
scanf("%f",&salario);

if (salario <= 300.00){
salarioreajustado = (0.5 * salario) + salario;	
printf("SALÁRIO COM REAJUSTE = %.2f\n",salarioreajustado);
}

else if (salario > 300.00){
salarioreajustado = (0.3 * salario) + salario;	
printf("SALÁRIO COM REAJUSTE = %.2f\n",salarioreajustado);
}
return 0;	
}