#include <stdio.h>

int main(){
	int v1, v2, v3, a, b, c, aux;
	scanf("%d %d %d", &v1, &v2, &v3);
	a = v1;
	b = v2;
	c = v3;
	if(a > b && a > c){
		if(b < c){
			aux = b;
			b = c;
			c = aux;
		}
	}
	else if(b > a && b > c){
		aux = a;
		a = b;
		b = aux;
		if(b < c){
			aux = b;
			b = c;
			c = aux;
		}
	}
	else if(c > a && c > b){
		aux = a;
		a = c;
		c = aux;
		if(b < c){
			aux = b;
			b = c;
			c = aux;
		}
	}
	printf("%d\n", c);
	printf("%d\n", b);
	printf("%d\n", a);
	printf("\n");
	printf("%d\n", v1);
	printf("%d\n", v2);
	printf("%d\n", v3);
	
	return 0;
}
