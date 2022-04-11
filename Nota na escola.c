/* Fazer um algoritmo que calcule a média aritmética das 3 notas de um
 aluno e mostre, além do valor da média, uma mensagem de “Aprovado”, caso a
 média seja igual ou superior a 6, ou a mensagem “reprovado”, caso contrário. */
 
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
float nota1, nota2, nota3, media;

printf("\nDigite sua primeira nota: ");
scanf("%f",&nota1);
printf("\nDigite a sua segunda nota: ");
scanf("%f",&nota2);
printf("\nDigite a sua última nota: ");
scanf("%f",&nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 6.00){
printf("\nMÉDIA = %.2f\n",media);
printf("\nAPROVADO\n");
}

else if ( media < 6.00){
printf("\nMÉDIA = %.2f\n",media);
printf("\nREPROVADO\n");
}	
return 0;	
}