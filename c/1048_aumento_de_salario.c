#include <stdio.h>

int main(){

	float salario, novoSalario, reajuste;
	int porc;

	scanf("%f", & salario);

	if(salario <= 400.00){
		reajuste = salario*15/100;
		novoSalario = salario + reajuste;
		porc = 15;
	}
	else if(400.01 <= salario && salario <= 800.00){
		reajuste = salario*12/100;
		novoSalario = salario + reajuste;
		porc = 12;
	}
	else if(800.01 <= salario && salario <= 1200.00){
		reajuste = salario*10/100;
		novoSalario = salario + reajuste;
		porc = 10;
	}
	else if(1200.01 <= salario && salario <= 2000.00){
		reajuste = salario*7/100;
		novoSalario = salario + reajuste;
		porc = 7;
	}
	else if(2000.00 < salario){
		reajuste = salario*4/100;
		novoSalario = salario + reajuste;
		porc = 4;
	}
	printf("Novo salario: %.2f\n", novoSalario);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %d %%\n", porc);

	return 0;
}
