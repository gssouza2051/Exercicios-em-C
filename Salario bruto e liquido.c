//Desenvolver um algoritmo que calcule o sal�rio bruto e l�quido de um funcion�rio.

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
printf("\nDigite quantas horas extras voc� fez: ");
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

printf("SAL�RIO BRUTO = %.2f\n",salariobruto);
printf("SAL�RIO LIQU�DO = %.2f\n",salarioliquido);

return 0;
}