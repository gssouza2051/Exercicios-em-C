/* Criar uma função que retorna o seguinte: A função recebe 3 valores float (n1,N2,n3)e retornar
o (x*x)+y+z ou seja : O quadrado do 1º + a soma dos outros dois. Vai retornar o tipo inteiro.  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
float calcula (float x, float y, float z)
 {
 return (pow(x,2)+(y+z));
 }
main()
{
 int x;
 float vet[3];
 for(x=0;x<=2;x++)
 {
 printf("\n[%d] digite um numero: ",x);
 scanf("%f",&vet[x]);
 }
 printf("\n\nResultado[(x*x)+y+z]: %3.2f\n", calcula(vet[0],vet[1],vet[2]));
 printf("\n\n");
 system("pause");
 return(0);
} 