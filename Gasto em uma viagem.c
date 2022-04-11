/* Calcular o Consumo de um veículo conforme os dados informado no teclado: Tempo em horas,
velocidade média e distância */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
main()
{
 setlocale(LC_ALL,"");
 int horas, velmedia;
 float distancia, consumo;
 printf("Informe o tempo gasto na viagem em horas: ");
 scanf("%d", &horas);
 printf("Informe a velocidade média do veículo: ");
 scanf("%d", &velmedia);
 distancia = horas * velmedia;
 consumo = distancia / 12;
 printf("Foram gastos %4.2f de combustivel \n",consumo);
 system("pause");
 return 0;
} 
