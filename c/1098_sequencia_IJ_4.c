#include <stdio.h>

int main(){
    int cont, cont_sec;
    float I = 0,J = 0;
    
    for(cont = 0; cont <= 10; cont++){
        for(cont_sec = 1; cont_sec <= 3; cont_sec++){
            if(cont == 0 || cont == 5 || cont == 10){
                printf("I=%d J=%d\n", (int)I, (int)J+cont_sec);
            }else{
                printf("I=%.1f J=%.1f\n", I, J+cont_sec);
            }
        }
        I += 0.2;
        J += 0.2;
    }
    return 0;
}
