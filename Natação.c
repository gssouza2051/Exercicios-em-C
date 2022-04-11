/* Fazer um algoritmo que receba a idade e o nome de um nadador e imprima o nome, a 
idade e a categoria do nadador seguindo as seguintes regras: */

#include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int idade;
char nome[20];

printf("\nDigite a sua idade: ");
scanf("%d",&idade);
printf("\nDigite seu nome: ");
scanf("%s",nome);

if (idade >= 5 && idade <= 10){
printf("%s\n",nome);
printf("%d\n",idade);
printf("INFANTIL\n");
}
else if (idade >= 11 && idade <= 17){
printf("%s\n",nome);
printf("%d\n",idade);
printf("JUVENIL\n");

}
else if (idade >= 18 ){
printf("%s\n",nome);
printf("%d\n",idade);
printf("SÊNIOR\n");
}	

return 0;
}