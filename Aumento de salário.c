/* Uma empresa conceder� uma aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo, 
conforme a tabla abaixo. Fa�a um algoritmo que leia o sal�rio e o cargo de um funcion�rio e calcule o 
novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, receber 40% de aumento. 
Mostre o sal�rio antigo , o novo sal�rio e a diferen�a. */

#include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
float salario, aumento, novosalario, diferencas;
char cargo[15];

printf("\nDigite seu sal�rio atual: ");
scanf("%f",&salario);
printf("\nInform seu cargo [gerente,engenheiro,t�cnico,outro] : ");
scanf("%s",cargo);

if (strcmp(cargo,"gerente") == 0){
aumento = 0.1 * salario;
novosalario = salario + aumento;
diferencas = novosalario - salario;
printf("ANTIGO SAL�RIO = %.2f\n",salario); 
printf("NOVO SAL�RIO = %.2f\n",novosalario);
printf("DIFERENCA ENTRE SAL�RIOS = %.2f\n",diferencas);
}

else if (strcmp(cargo,"engenheiro") == 0){
aumento = 0.2 * salario;
novosalario = salario + aumento;
diferencas = novosalario - salario;
printf("ANTIGO SAL�RIO = %.2f\n",salario); 
printf("NOVO SAL�RIO = %.2f\n",novosalario);
printf("DIFERENCA ENTRE SAL�RIOS = %.2f\n",diferencas);
}

else if (strcmp(cargo,"t�cnico") == 0){
aumento = 0.3 * salario;
novosalario = salario + aumento;
diferencas = novosalario - salario;
printf("ANTIGO SAL�RIO = %.2f\n",salario); 
printf("NOVO SAL�RIO = %.2f\n",novosalario);
printf("DIFERENCA ENTRE SAL�RIOS = %.2f\n",diferencas);
}

else{
aumento = 0.4 * salario;
novosalario = salario + aumento;
diferencas = novosalario - salario;
printf("ANTIGO SAL�RIO = %.2f\n",salario); 
printf("NOVO SAL�RIO = %.2f\n",novosalario);
printf("DIFERENCA ENTRE SAL�RIOS = %.2f\n",diferencas);
}

return 0;
}

