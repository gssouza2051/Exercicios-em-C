/*Escrever um algoritmo que leia o código de um aluno e suas três notas. 
Calcular a média ponderada do aluno, considerando que o peso para a maior 
nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas,
 a média calculada e uma mensagem “Aprovado” se a média for maior ou igual a
 5 e “reprovado” se a média for menor que 5. */
 
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int cod_aluno;
float nota1, nota2, nota3, mediaponderada;

printf("\nDigite o código de sua matrícula: ");
scanf("%d",&cod_aluno);
printf("\nDigite a sua primeira nota: ");
scanf("%f",&nota1);
printf("\nDigite a sua segunda nota: ");
scanf("%f",&nota2);
printf("\nDigite a sua terceira nota: ");
scanf("%f",&nota3);

if (nota1 > nota2 && nota1 > nota3){
mediaponderada = (( nota1 * 4 ) + (nota2 * 3) + (nota3 * 3)) /10;
}

else if (nota2 > nota1 && nota2 > nota3){
mediaponderada = (( nota2 * 4 ) + (nota1 * 3) + (nota3 * 3)) /10;
}

else if (nota3 > nota1 && nota3 > nota2){
mediaponderada = (( nota3 * 4 ) + (nota1 * 3) + (nota2 * 3.)) /10;
}

if (mediaponderada >= 5.00){
printf("CÓDIGO = %d\n",cod_aluno);
printf("NOTA 1 = %.2f\n",nota1);
printf("NOTA 2 = %.2f\n",nota2);
printf("NOTA 3 = %.2f\n",nota3);
printf("MEDIA = %.2f\n",mediaponderada);
printf("APROVADO\n");
}

else if (mediaponderada < 5.00){
printf("CODIGO = %d\n",cod_aluno);
printf("NOTA 1 = %.2f\n",nota1);
printf("NOTA 2 = %.2f\n",nota2);
printf("NOTA 3 = %.2f\n",nota3);
printf("MEDIA = %.2f\n",mediaponderada);
printf("REPROVADO\n");
}

return 0;	
}
 