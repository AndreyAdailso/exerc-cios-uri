#include <stdio.h>

int main(){
	int i, j;
	int cont_valores_positivos = 0;
	int numeroDeValores = 6;
	float valores[numeroDeValores];

	for(i = 0; i < numeroDeValores; i++){
		scanf("%f", &valores[i]);
	}
	
	for(j = 0; j < numeroDeValores; j++){
		if(valores[j] > 0)
			cont_valores_positivos += 1;
	}
	printf("%d valores positivos\n",cont_valores_positivos);

	return 0;
}