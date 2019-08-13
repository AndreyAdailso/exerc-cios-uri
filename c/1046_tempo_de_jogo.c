#include <stdio.h>

int main(){
	int fim, inicio, temp;

	scanf("%d %d", &inicio, &fim);
	
	if(inicio > fim || inicio == fim){
		temp = 24 - (inicio - fim);
	}
	else{
		temp = fim - inicio;;
	}

	printf("O JOGO DUROU %d HORA(S)\n", temp);
	return 0;
}