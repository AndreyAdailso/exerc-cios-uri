#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	printf("iniciando...");
	int i, n, num_notas, num_moedas;
	float val;
	float v_notas[6] = {100, 50, 20, 10, 5, 2};
	float v_moedas[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
	
	printf("Digite um valor:\n");
	scanf("%f",&val);
	printf("NOTAS:\n");
	for(i = 0; i < 6; i++){
		num_notas = val / v_notas[i];
		//val = fmod(val, v_notas[i]);
		val -= (num_notas*v_notas[i]);
		printf("%d nota(s) de R$ %.2f\n",num_notas, v_notas[i]);
	}
	printf("valor : %f\n", val);
	printf("MOEDAS:\n");
	for(i = 0; i < 6; i++){
		num_moedas = val / v_moedas[i];
		//val = fmod(val, v_moedas[i]);
		val -= (num_moedas*v_moedas[i]);
		printf("%d moeda(s) de R$ %.2f\n", num_moedas, v_moedas[i] );
	}
	return 0;
}
