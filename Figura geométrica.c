/* Desenvolver um algoritmo com as opções de calcular e imprimir o volume e a área da 
superfície de um cone reto, um cilindro ou uma esfera. O algoritmo deverá ler a opção
 da figura desejada (cone / cilindro / esfera) e de acordo com a 
opção escolhida calcular o volume e a área da superfície da figura pedida. Fórmulas: */

#include<stdio.h>
#include<math.h>
#include<string.h>
#include <locale.h>
#define pi 3.1415

int main()
{
setlocale(LC_ALL,"");
   float raio, altura, volume, area;
   char tipo[10];

   printf("\nDigite o raio: ");
   scanf("%f",&raio);
   printf("\nDigite a altura da figura: ");
   scanf("%f",&altura);
   printf("\nQual a figura desejada?[cone/cilindro/esfera]: ");
   scanf("%s",tipo);

   if (strcmp(tipo,"cone")==0){
       volume = ((pi * pow(raio,2)) * altura) / 3;
       area = (pi * raio) * sqrt(pow(raio,2) + pow(altura,2));
       printf("VOLUME = %.2f\n",volume);
       printf("AREA = %.2f\n",area);
   }

else if (strcmp(tipo,"cilindro")==0){
       volume = ((pi * pow(raio,2)) * altura);
       area = (2 * pi) * (raio * altura);
       printf("VOLUME = %.2f\n",volume);
       printf("AREA = %.2f\n",area);
   }

   else if (strcmp(tipo,"esfera")==0){
       volume = (pi * 4 * pow(raio,3)) / 3;
       area = (4 * (pi * pow(raio,2)));
       printf("VOLUME = %.2f\n",volume);
       printf("AREA = %.2f\n",area);
   }

return 0;
}
