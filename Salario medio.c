/* Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com saldo m�dio no �ltimo ano. 
Fa�a um algoritmo que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com
 a tabela abaixo. Mostre uma mensagem informando o saldo m�dio e o valor de cr�dito 
(a porcentagem aplicada sobre o saldo m�dio) */

#include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
float saldomedio, credito;

printf("\nInforme seu saldo m�dio no �ltimo ano: ");
scanf("%f",&saldomedio);

if (saldomedio < 200){
credito = 0;
}

else if (saldomedio > 201 && saldomedio < 400){
credito = 0.2 * saldomedio;
printf("SALDO M�DIO = %.2f\n",saldomedio);
printf("VALOR DO CR�DITO = %.2f\n",credito);
}

else if (saldomedio > 401 && saldomedio < 600){
credito = 0.3 * saldomedio;
printf("SALDO M�DIO = %.2f\n",saldomedio);
printf("VALOR DO CR�DITO = %.2f\n",credito);
}

else if (saldomedio > 601){
credito = 0.4 * saldomedio;
printf("SALDO M�DIO = %.2f\n",saldomedio);
printf("VALOR DO CR�DITO = %.2f\n",credito);
}

return 0;
}