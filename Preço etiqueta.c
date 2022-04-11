/* Elabore um algoritmo que calcule o que deve ser pago por um produto considerando o preço normal de 
etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela para ler qual a condição
 de pagamento escolhido e efetuar o cálculo adequado. */
 
#include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int codigo;
float valorproduto, calculo;

printf("\nDigite o código da tabela [1,2,3,4]: ");
scanf("%d",&codigo);
printf("\nInforme o valor do produto: ");
scanf("%f",&valorproduto);

if (codigo == 1){
calculo = valorproduto - (0.1 * valorproduto);
}

else if  (codigo == 2){
calculo = valorproduto - (0.05 * valorproduto);
}

else if  (codigo == 3){
calculo = valorproduto;
}

else if  (codigo == 4){
calculo = valorproduto + (0.1 * valorproduto);
}

printf("PRECO FINAL = %.2f\n",calculo);
return 0;
}