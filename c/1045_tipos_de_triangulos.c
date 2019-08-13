#include <stdio.h>
#include <math.h>

int main(){
	int n = 2;
	int cont, i, j, aux;
	float var[n];

	scanf("%f %f %f", &var[0], &var[1], &var[2]);
	
	//Algoritmo de ordenação generico para ordenar vertores com n elementos [inicio].
	//Bubble sort.
	cont = 0;
	while( cont != n){
		for(i = 0; i < n; i++){ // nota: n - 1 já que o ultimo vaçor nao sera ferificado
			if( var[i] < var[i+1]){
				aux = var[i];
				var[i] = var[i+1];
				var[i+1] = aux;
			}
		}
		cont += 1;
	}
	//Fim da ordenação.

	if(var[0] >= (var[1]+var[2]))
		printf("NAO FORMA TRIANGULO\n");
	else{
		if(pow(var[0], 2) == (pow(var[1], 2) + pow(var[2], 2)))
			printf("TRIANGULO RETANGULO\n");
		if(pow(var[0], 2) > (pow(var[1], 2) + pow(var[2], 2)))
			printf("TRIANGULO OBTUSANGULO\n");
		if(pow(var[0], 2) < (pow(var[1], 2) + pow(var[2], 2)))
			printf("TRIANGULO ACUTANGULO\n");
		if(var[0] == var[1] || var[0] == var[2] || var[1] == var[2]){
			if(var[0] == var[1] && var[1] == var[2])
				printf("TRIANGULO EQUILATERO\n");
			else
				printf("TRIANGULO ISOSCELES\n");
		}
	}
	return 0;
}
