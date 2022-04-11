//Desenvolver um algoritmo que calcule o salário bruto e líquido de um funcionário.

#include<math.h>
#include<stdio.h>
#include<string.h>
#define salariominimo 136.00
#define salariohora_extra 10.00
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
float salariobruto, salarioliquido, horasextrasreceber, descontoinss, descontoimpostoderenda;
int horaextras;
char nome[20];

printf("\nDigite seu nome: ");
scanf("%s",nome);
printf("\nDigite quantas horas extras você fez: ");
scanf("%d",&horaextras);

horasextrasreceber = horaextras * salariohora_extra;
salariobruto = salariominimo + horasextrasreceber;
descontoimpostoderenda = 0;
descontoinss = 0;

if (salariobruto > 1500){
descontoinss = salariobruto * 0.12;	
}

if (salariobruto > 2000){
descontoimpostoderenda =  salariobruto * 0.2 ;
}

salarioliquido = salariobruto - (descontoinss + descontoimpostoderenda);

printf("SALÁRIO BRUTO = %.2f\n",salariobruto);
printf("SALÁRIO LIQUÍDO = %.2f\n",salarioliquido);

return 0;
}