/* Implementar um algoritmo capaz de encontrar o
 maior dentre 3 n�meros quaisquer. Suponha todos serem distintos */
 
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int numero1, numero2, numero3;

printf("\nDigite um n�mero qualquer: ");
scanf("%d",&numero1);
printf("\nDigite outro valor: ");
scanf("%d",&numero2);
printf("\nDigite um �ltimo valor: ");
scanf("%d",&numero3);

if (numero1 > numero2 && numero1 > numero3){
printf("MAIOR N�MERO = %d\n",numero1);
}

else if (numero2 > numero1 && numero2 > numero3){
printf("MAIOR N�MERO = %d\n",numero2);
}

else if (numero3 > numero1 && numero3 > numero2){
printf("MAIOR N�MERO = %d\n",numero3);
}

return 0;	
}