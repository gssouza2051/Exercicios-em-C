//Receber um n�mero do teclado e informar se ele � divis�vel por 10, por 5, por 2 ou se n�o �
//divis�vel por nenhum destes. 

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
 printf("O n�mero � divis�vel por 10, 5 e 2\n");
 else
 printf("O n�mero n�o � divis�vel por 10, 5 e 2\n");
 system("pause");
 return 0;
}
