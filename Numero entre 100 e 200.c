/* Receber um numero e verificar se está entre 100 e 200. Se estiver na faixa,imprimir: "Voce
digitou um numero entre 100 e 200", Senão estiver na faixa,imprimir:"Voce digitou um numero
fora da faixa entre100 e 200".  */

#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
main()
{
 int num;
 printf ("informe um numero:");
 scanf("%d",&num);
 if(num>=100 && num<=200)
 printf("Voce digitou um numero entre 100 e 200");
 else
 printf("Voce digitou um numero fora da faixa 100 e 200");
 printf ("\n\n");
 system("PAUSE");
 return 0;
 } 