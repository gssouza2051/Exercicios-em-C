/* Um banco concederá um crédito especial aos seus clientes, variável com saldo médio no último ano. 
Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com
 a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor de crédito 
(a porcentagem aplicada sobre o saldo médio) */

#include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
float saldomedio, credito;

printf("\nInforme seu saldo médio no último ano: ");
scanf("%f",&saldomedio);

if (saldomedio < 200){
credito = 0;
}

else if (saldomedio > 201 && saldomedio < 400){
credito = 0.2 * saldomedio;
printf("SALDO MÉDIO = %.2f\n",saldomedio);
printf("VALOR DO CRÉDITO = %.2f\n",credito);
}

else if (saldomedio > 401 && saldomedio < 600){
credito = 0.3 * saldomedio;
printf("SALDO MÉDIO = %.2f\n",saldomedio);
printf("VALOR DO CRÉDITO = %.2f\n",credito);
}

else if (saldomedio > 601){
credito = 0.4 * saldomedio;
printf("SALDO MÉDIO = %.2f\n",saldomedio);
printf("VALOR DO CRÉDITO = %.2f\n",credito);
}

return 0;
}