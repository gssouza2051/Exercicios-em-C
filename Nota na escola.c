/* Fazer um algoritmo que calcule a m�dia aritm�tica das 3 notas de um
 aluno e mostre, al�m do valor da m�dia, uma mensagem de �Aprovado�, caso a
 m�dia seja igual ou superior a 6, ou a mensagem �reprovado�, caso contr�rio. */
 
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
printf("\nDigite a sua �ltima nota: ");
scanf("%f",&nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 6.00){
printf("\nM�DIA = %.2f\n",media);
printf("\nAPROVADO\n");
}

else if ( media < 6.00){
printf("\nM�DIA = %.2f\n",media);
printf("\nREPROVADO\n");
}	
return 0;	
}