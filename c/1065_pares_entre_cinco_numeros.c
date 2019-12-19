#include <stdio.h>

int main(){
    int num[5];
    int n_par = 0, i;

    for(i = 0; i < 5; i++){
        scanf("%d", &num[i]);
        if(num[i] % 2 == 0)
            n_par++;
    }
    printf("%d valores pares\n", n_par);

    return 0;
}
