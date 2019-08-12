//O uri não aceita esse.
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, num_notas, num_moedas;
	double val;
	double v_notas[6] = {100, 50, 20, 10, 5, 2};
	double v_moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
	
	scanf("%lf",&val);
	printf("NOTAS:\n");
	/*Divide o valor pela nota e depois multiplica o numero das
	notas pelas notas para subitrair esse valor do valor final.
	*/
	for(i = 0; i < 6; i++){
		num_notas = val / v_notas[i];
		val -= (num_notas*v_notas[i]);
		printf("%d nota(s) de R$ %.2lf\n", num_notas, v_notas[i]);
	}

	printf("MOEDAS:\n");
	for(i = 0; i < 6; i++){
		num_moedas = val / v_moedas[i];
		val -= (num_moedas*v_moedas[i]);
		printf("%d moeda(s) de R$ %.2lf\n", num_moedas, v_moedas[i] );
	}
	return 0;
}
