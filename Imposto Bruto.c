/* Desenvolver um algoritmo que determine 
o imposto de renda cobrado de um funcion�rio pelo governo.
 Seu programa dever� ler o valor do sal�rio m�nimo, o n� de dependentes,
  o sal�rio do funcion�rio e o taxa de imposto normal que j� foi paga pelo
   funcion�rio. O imposto bruto �:

� 20% do sal�rio do funcion�rio se o funcion�rio ganha mais de 12 sal�rios m�nimos;
� 8% do sal�rio do funcion�rio se o funcion�rio ganha mais de 5 sal�rios m�nimos e
� Quem ganha menos ou igual de 5 sal�rios m�nimos n�o � cobrado o imposto de renda.
Obs.: Sabe-se que o governo cobra 4% de taxa adicional sobre o IMPOSTO BRUTO. */

#include<stdio.h>
#include<math.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");

int numerodependentes;
float salariominimo, salariofunc, taxaimposto, taxaimpostosalario, impostoderenda, impostobruto, impostoliquido, salariomaximo12, salariomaximo5, calcdependentes; 

printf("\nDigite o valor do sal�rio m�nimo: ");
scanf("%f",&salariominimo);
printf("\nDigite o n�mero de dependentes: ");
scanf("%d",&numerodependentes);
printf("\nDigite o sal�rio do funcion�rio: ");
scanf("%f",&salariofunc);
printf("\nDigite quanto � o valor da taxa de imposto: ");
scanf("%f",&taxaimposto);

salariomaximo12 = salariominimo * 12;
salariomaximo5 = salariominimo * 5;
calcdependentes = numerodependentes * 300.00;
taxaimpostosalario = (taxaimposto / 100) * salariofunc;

if ( salariofunc > salariomaximo12){
impostobruto = 0.2 * salariofunc;
impostobruto = 0.04 * impostobruto + impostobruto;
} 

else if (salariofunc >  salariomaximo5){
impostobruto = 0.08 * salariofunc;
impostobruto = 0.04 * impostobruto + impostobruto;
}

else if (salariofunc <= salariomaximo5){
impostobruto = 0;
}

impostoliquido = impostobruto - calcdependentes ;
impostoderenda = impostoliquido - taxaimpostosalario;

if (impostoderenda == 0){
printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
printf("RESULTADO = %.2f\n",impostoderenda);
printf("IMPOSTO QUITADO\n");
}

else if (impostoderenda < 0){
printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
printf("RESULTADO = %.2f\n",impostoderenda);
printf("IMPOSTO A RECEBER\n");
}

else if (impostoderenda > 0){
printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
printf("RESULTADO = %.2f\n",impostoderenda);
printf("IMPOSTO A PAGAR\n");
}

return 0;
}