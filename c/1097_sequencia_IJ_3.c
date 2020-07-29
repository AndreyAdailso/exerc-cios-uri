#include <stdio.h>

int main(){
    int cont, cont_sec,
    I = 0,
    J = 7;

    for(cont = 0; cont <= 9; cont++){
        if(cont % 2 != 0){
            I = cont;
            for(cont_sec = 0; cont_sec < 3;cont_sec++){
                printf("I=%d J=%d\n", I, J - cont_sec);
            }
            J += 2;
        }
    }
    return 0;
}
