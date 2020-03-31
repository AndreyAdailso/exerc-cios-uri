#include <stdio.h>

int main(){
    int cont, i= 1, j = 60;
    for(cont = 0; cont <= 12; cont++){
        printf("I=%d J=%d\n", i+(cont*3), j-(cont*5));
    }
    return 0;
}
