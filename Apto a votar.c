// Ler a idade de uma pessoa e informar a sua classe eleitoral. 
//a. Não- eleitor (abaixo de 16 anos)
//b. Eleitor obrigatório (entre 18 e 65 anos)
//c. Eleitor facultativo (entre 16 e 18 e maior de 65 anos)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
 main()
 {
 int idade;
 printf("Informe sua idade: ");
 scanf("%d", &idade);
 if (idade < 16)
 printf("Nao eleitor.\n");
 else
 if (idade >= 18 && idade <=65)
 printf("Eleitor obrigatorio.\n");
 else
 if ((idade >= 16 && idade < 18) || (idade > 65))
 printf("Eleitor faculdativo.\n");
 system("pause");
 return 0;
 }