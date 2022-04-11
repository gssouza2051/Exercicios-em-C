/*Desenvolver um algoritmo para pedir
 um mês e ano e exibir o número de dias do mês / ano digitados. */
 
#include<stdio.h>
#include<math.h>
#include<string.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "");
		
int ano, anobissexto, mesfevereirobissexto;
char mes[15];

printf("\nDigite o mês desejado: ");
scanf("%s",mes);
printf("\nDigite o ano desejado: ");
scanf("%d",&ano);

if (ano % 4==0 ) {
anobissexto = 366;
mesfevereirobissexto = 29;
}

else {
anobissexto = 365;
mesfevereirobissexto = 28;
}

if (strcmp(mes,"janeiro") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"fevereiro") == 0){
printf("DIAS = %d\n",mesfevereirobissexto);
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"marco") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"abril") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"maio") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"junho") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"julho") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"agosto") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"setembro") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"outubro") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
else if (strcmp(mes,"novembro") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
else if (strcmp(mes,"dezembro") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

return 0;	

}