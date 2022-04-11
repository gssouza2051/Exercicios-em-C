/*Uma locadora de filmes tem a seguinte regra para aluguel de fitas.
� -As segundas, ter�as e quintas (2, 3 e 5): um desconto de 40% em cima do pre�o normal;
� -As quartas, sextas, s�bados e domingos (4, 6, 7 e 1): pre�o normal;
� -Aluguel de fitas comuns: pre�o normal e aluguel de lan�amentos: acr�scimo de 15% em cima do 
pre�o normal.*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
float preconormal, descontopromo, precototal;
char dia[15], categoria[15];

printf("\nDigite o pre�o normal: ");
scanf("%f",&preconormal);
printf("\nDigite o dia que deseja alugar a(s) fita(s): ");
scanf("%s",dia);
printf("\nDefina a categoria agora: ");
scanf("%s",categoria);

if (strcmp(dia,"segunda") ==0 || strcmp(dia,"terca") ==0 || strcmp(dia,"quinta") == 0){
descontopromo = preconormal - (0.4 * preconormal) ;
}

else if (strcmp(dia,"quarta") == 0|| strcmp(dia,"sexta") == 0|| strcmp(dia,"sabado") ==0|| strcmp(dia,"domingo")==0){
descontopromo = 0;
}

if (strcmp(categoria,"lancamento") == 0){
preconormal = (preconormal * 0.15);	
}

else if (strcmp(categoria,"comum") == 0){
preconormal = preconormal;	
}

precototal = descontopromo + preconormal;
printf("PRE�O FINAL = %.2f\n",precototal);

return 0;	

}