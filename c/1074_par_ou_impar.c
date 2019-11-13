#include <stdio.h>
#include <stdlib.h>

int main(){
	int *v;
	int i, num_componentes;

	scanf("%d", &num_componentes);

	v = (int *) malloc(num_componentes * sizeof(int));
	
	for(i = 0; i < num_componentes; i++)
		scanf("%d", &v[i]);

	for(i = 0; i < num_componentes; i++){
		if( v[i] == 0){
			printf("NULL");
		}else{
			if(v[i] % 2 == 0){
				printf("EVEN ");
				if(v[i] > 0)
					printf("POSITIVE");
				else
					printf("NEGATIVE");
			}else{
				printf("ODD ");
				if(v[i] > 0)
					printf("POSITIVE");
				else
					printf("NEGATIVE");
			}	
		}
		printf("\n");
	}

	return 0;
}
	
