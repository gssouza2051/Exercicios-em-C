/* A cidade de Perdiz das Cruzes possui um �nico posto telef�nico. Por este posto s�o feitas todas as
 liga��es interurbanas da cidade. O valor a se pago e calculado seguindo as seguintes regras:
� Taxa de R$2,00 pela liga��o, R$1,00 para os 3 primeiros minutos;
� Acima do tr�s primeiros minutos as regras s�o de R$1,50 para cada intervalo de
 5 minutos e R$0.25 para cada minuto abaixo disto. */
 
 #include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
char nome[20];
int tempo, aux1, aux2,novotempo;
float calculo, total, restohoras;

printf("\nDigite seu nome: ");
scanf("%s",nome);
printf("\nInforme quantos minutos voc� ficou na liga��o: ");
scanf("%d",&tempo);

if (tempo <= 3){
calculo = 3;
printf("USU�RIO = %s\n",nome);
printf("CONTA = %.2f\n",calculo);
}

else if (tempo > 3){
novotempo = tempo - 3;
aux1 = novotempo / 5;
aux2 = novotempo % 5;
calculo =  aux1 * 1.50;
restohoras = aux2 * 0.25;
total = 3 +  calculo + restohoras;
printf("USU�RIO = %s\n",nome);
printf("CONTA = %.2f\n",total);
}
return 0;
}