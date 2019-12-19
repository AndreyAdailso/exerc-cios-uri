#include <stdio.h>

int main(){
    int i, N, X, fora_intervalo = 0, dentro_intervalo = 0;
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        if(X >= 10 && X <= 20 ){
            dentro_intervalo++;
        }else{
            fora_intervalo++;
        }
    }

    printf("%d in\n", dentro_intervalo);
    printf("%d out\n", fora_intervalo);

    return 0;
}
