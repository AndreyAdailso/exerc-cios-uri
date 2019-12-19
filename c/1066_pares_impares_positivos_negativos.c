#include <stdio.h>

int main(){
    int num[5], i, n_par = 0, n_impar = 0, n_positivos = 0, n_negativos = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &num[i]);
        
        if(num[i] % 2 == 0){
            n_par++;
        }else{
            n_impar++;
        }
        if(num[i] > 0){
            n_positivos++;
        }
        if(num[i] < 0){
            n_negativos++;
        }
    }
    
    printf("%d valor(es) par(es)\n", n_par);
    printf("%d valor(es) impar(es)\n", n_impar);
    printf("%d valor(es) positivo(s)\n", n_positivos);
    printf("%d valor(es) negativo(s)\n", n_negativos);

    return 0;
}
