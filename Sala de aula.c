/*Desenvolver um algoritmo para ler o n�mero de uma sala
 de aula, sua capacidade e o total de alunos matriculados na mesma e 
 imprimir uma linha mostrando o n�mero da sala, sua capacidade, o n�mero de cadeiras 
ocupadas e sua disponibilidade indicando se a sala est� lotada ou n�o. */

#include<stdio.h>
#include<math.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"");	
	
int numerosala, capacidade, alunosmatriculados;

printf("\nDigite a quantidade de alunos presentes: ");
scanf("%d",&numerosala);
printf("\nDigite a capacidade de alunos nessa sala: ");
scanf("%d",&capacidade);
printf("\nDigite a quantidade de alunos matriculados nessa sala: ");
scanf("%d",&alunosmatriculados);

if (alunosmatriculados >= capacidade)
{
printf("SALA = %d\n",numerosala);
printf("CAPACIDADE = %d\n",capacidade);
printf("CADEIRAS OCUPADAS = %d\n",alunosmatriculados);
printf("SALA LOTADA\n");
}

else if (alunosmatriculados < capacidade)
{
printf("SALA = %d\n",numerosala);
printf("CAPACIDADE = %d\n",capacidade);
printf("CADEIRAS OCUPADAS = %d\n",alunosmatriculados);
printf("SALA N�O LOTADA\n");
}

return 0;
}