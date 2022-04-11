/* Um comerciante comprou um produto e quer vendê-lo com lucro de 45% se o valor da compra
for menor que 20,00; caso contrário, o lucro será de 30%. Entrar com o valor do produto e
imprimir o valor da venda.  */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
 main()
 {
 	setlocale(LC_ALL,"");
 float valor_produto;
 printf("Informe o valor do produto: ");
 scanf("%f", &valor_produto);
 if (valor_produto < 20)
 printf("O valor da venda é %3.2f\n", valor_produto * 1.45);
 else
 printf("O valor da venda é %3.2f\n", valor_produto * 1.30);
 system("pause");
 return 0;
 } 