#include <stdio.h>

int main(){
    int cont, sec_cont, i = 0, j = 7;
    for(cont = 1; cont <= 9; cont++){
        if(cont % 2 != 0){
            i = cont;
            for(sec_cont = 0; sec_cont < 3; sec_cont++){
                printf("I=%d J=%d\n", i, j-sec_cont);
            }
        }
    }
    return 0;
}
