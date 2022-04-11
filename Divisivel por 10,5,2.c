//Receber um número do teclado e informar se ele é divisível por 10, por 5, por 2 ou se não é
//divisível por nenhum destes. 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main()
{
 setlocale(LC_ALL,"");
 int numero;
 printf("Informe um valor positivo: ");
 scanf("%d", &numero);
 if (numero % 10 == 0 && numero%5 == 0 && numero % 2 == 0)
 printf("O número é divisível por 10, 5 e 2\n");
 else
 printf("O número não é divisível por 10, 5 e 2\n");
 system("pause");
 return 0;
}
