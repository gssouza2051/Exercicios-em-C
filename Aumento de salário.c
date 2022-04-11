/* Uma empresa concederá uma aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabla abaixo. Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o 
novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, receber 40% de aumento. 
Mostre o salário antigo , o novo salário e a diferença. */

#include<math.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
float salario, aumento, novosalario, diferencas;
char cargo[15];

printf("\nDigite seu salário atual: ");
scanf("%f",&salario);
printf("\nInform seu cargo [gerente,engenheiro,técnico,outro] : ");
scanf("%s",cargo);

if (strcmp(cargo,"gerente") == 0){
aumento = 0.1 * salario;
novosalario = salario + aumento;
diferencas = novosalario - salario;
printf("ANTIGO SALÁRIO = %.2f\n",salario); 
printf("NOVO SALÁRIO = %.2f\n",novosalario);
printf("DIFERENCA ENTRE SALÁRIOS = %.2f\n",diferencas);
}

else if (strcmp(cargo,"engenheiro") == 0){
aumento = 0.2 * salario;
novosalario = salario + aumento;
diferencas = novosalario - salario;
printf("ANTIGO SALÁRIO = %.2f\n",salario); 
printf("NOVO SALÁRIO = %.2f\n",novosalario);
printf("DIFERENCA ENTRE SALÁRIOS = %.2f\n",diferencas);
}

else if (strcmp(cargo,"técnico") == 0){
aumento = 0.3 * salario;
novosalario = salario + aumento;
diferencas = novosalario - salario;
printf("ANTIGO SALÁRIO = %.2f\n",salario); 
printf("NOVO SALÁRIO = %.2f\n",novosalario);
printf("DIFERENCA ENTRE SALÁRIOS = %.2f\n",diferencas);
}

else{
aumento = 0.4 * salario;
novosalario = salario + aumento;
diferencas = novosalario - salario;
printf("ANTIGO SALÁRIO = %.2f\n",salario); 
printf("NOVO SALÁRIO = %.2f\n",novosalario);
printf("DIFERENCA ENTRE SALÁRIOS = %.2f\n",diferencas);
}

return 0;
}

