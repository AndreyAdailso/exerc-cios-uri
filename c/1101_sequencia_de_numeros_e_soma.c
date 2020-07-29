#include <stdio.h>

int main(){
    int cont, aux, N, M, soma = 0;
    while (1){
        soma = 0;
        scanf("%d %d", &N, &M);
        if(N <= 0 || M <= 0)
            break;
        if(N > M){
            aux = M;
            M = N;
            N = aux;
        }
        for(cont = N; cont <= M; cont++){
            soma += cont;
            printf("%d ", cont);
        }
        printf("Sum=%d\n", soma);
    }
    
    return 0;
}