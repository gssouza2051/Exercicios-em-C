/*Um certo a�o � classificado de acordo com o resultado de tr�s testes abaixo, que devem
 determinar se o mesmo satisfaz as especifica��es:
1. Conte�do de Carbono abaixo de 7;
2. Dureza Rockwell maior do que 50;
3. Resist�ncia � tra��o maior do que 80.000 */

#include<stdio.h>
#include<math.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int conteudo, dureza, resistencia;

printf("\nDigite a quantidade conte�do do carbono: ");
scanf("%d",&conteudo);
printf("\nDigite o valor da dureza: ");
scanf("%d",&dureza);
printf("\nInforme a resist�ncia � tra��o: ");
scanf("%d",&resistencia);    

if (conteudo < 7 && dureza > 50 && resistencia > 80000){
printf("ACO DE GRAU = 10\n");
}

else if (conteudo < 7 && dureza > 50 && resistencia <= 80000) {
printf("ACO DE GRAU = 9\n");
}

else if (conteudo < 7 && dureza <= 50 && resistencia <= 80000){
printf("ACO DE GRAU = 8\n");
}

else if (conteudo >= 7 && dureza <= 50 && resistencia <= 80000){
printf("ACO DE GRAU = 7\n");
}	

return 0;
}