/* Implementar um algoritmo capaz de encontrar o
 maior dentre 3 números quaisquer. Suponha todos serem distintos */
 
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int numero1, numero2, numero3;

printf("\nDigite um número qualquer: ");
scanf("%d",&numero1);
printf("\nDigite outro valor: ");
scanf("%d",&numero2);
printf("\nDigite um último valor: ");
scanf("%d",&numero3);

if (numero1 > numero2 && numero1 > numero3){
printf("MAIOR NÚMERO = %d\n",numero1);
}

else if (numero2 > numero1 && numero2 > numero3){
printf("MAIOR NÚMERO = %d\n",numero2);
}

else if (numero3 > numero1 && numero3 > numero2){
printf("MAIOR NÚMERO = %d\n",numero3);
}

return 0;	
}