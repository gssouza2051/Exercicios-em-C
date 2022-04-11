/* Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO. 
O custo da �gua varia dependendo
 se o consumidor � residencial,
 comercial ou industrial. A regra para calcular a conta �:
� Residencial: R$5,00 de taxa mais R$0,05 por m� gastos;
� Comercial: R$500,00 para os primeiros 80 m� gastos mais R$0,25 por m� gastos;
� Industrial: R$800,00 para os primeiros 100 m� gastos mais R$0,04 por m� gastos;
O programa dever� ler a conta do cliente, consumo de �gua por metros c�bicos e o tipo de consumidor 
( residencial, comercial e industrial ). Como resultado, imprima a conta do cliente e o valor real a ser
 pago pelo mesmo. */
 
 #include<stdio.h>
#include<math.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
int contacliente, consumoagua;
float formula;
char tipoconsumidor[15];

printf("\nDigite a sua conta: ");
scanf("%d",&contacliente);
printf("\nDigite o valor de quanto voc� consume de �gua: ");
scanf("%d",&consumoagua);
printf("\nInforme se voc� � residencial,comercial ou industrial: ");
scanf("%s",tipoconsumidor);

if (strcmp(tipoconsumidor,"residencial") == 0){
formula = 5.00 + (0.05 * consumoagua);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

if (strcmp(tipoconsumidor,"comercial") == 0 && consumoagua <= 80 ){
formula = 500.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

else if (strcmp(tipoconsumidor,"comercial") == 0 && consumoagua > 80 ){
formula = 500.00 + ((consumoagua - 80) * 0.25);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua <= 100){
formula = 800.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f",formula);
}
else if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua > 100){
formula = 800.00 + ((consumoagua - 100 )* 0.04);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

return 0;	

}