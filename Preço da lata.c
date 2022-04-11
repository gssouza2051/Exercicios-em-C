/* Construa um algoritmo que calcule e escreva o custo e a quantidade de
 latas de tinta necess�rias, para pintar tanques cil�ndricos de combust�vel.
  � fornecida as seguintes informa��es: o pre�o da lata de 5 litros, o raio e a altura
 dos tanques cil�ndricos. Cada litro de tinta pinta 3 metros quadrados. */
 
 #include<math.h>
#include<stdio.h>
#include<string.h>
#define pi 3.1415
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
float precolata, altura, arealateral, areadabase, areatotal, custo;
int raio, quantidadelatas;

printf("\nDigite o pre�o da lata de 5 litros: ");
scanf("%f",&precolata);
printf("\nDigite o raio dos tanques cil�ndricos: ");
scanf("%d",&raio);
printf("\nDigite a altura dos tanques cil�ndricos: ");
scanf("%f",&altura);

areadabase = pi * pow(raio,2);
arealateral = 2 * pi * raio * altura;
areatotal = (2 * areadabase) + arealateral;

quantidadelatas = areatotal / 15;
custo = quantidadelatas * precolata;

printf("QUANTIDADE DE LATAS = %d\n",quantidadelatas);
printf("CUSTO = %.2f\n",custo);

return 0;
 
}
