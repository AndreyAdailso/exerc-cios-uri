#include <stdio.h>

int soma_valores_impares(int a, int b);

int main(int argc, char const *argv[])
{
	int x, y;

	scanf("%d %d", &x, &y);

	printf("%d\n", soma_valores_impares(x, y));

	return 0;
}

int soma_valores_impares(int a, int b){
	int i, aux,
	soma = 0;
	if(b > a){
		aux = a;
		a = b;
		b = aux;
	}
	for(i = b+1; i < a; i++){
		if(i % 2 != 0){
			soma += i;
		}
	}
	return soma;
}
