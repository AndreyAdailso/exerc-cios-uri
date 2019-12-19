#include <stdio.h>

int main(){
    int list[100];
    int i, maior = 0, index;

    for(i = 0; i < 100; i++){
        scanf("%d", &list[i]);
    }


    for(i = 0; i < 100; i++){
        if(list[i] > maior){
            maior = list[i];
            index = i+1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", index);

    return 0;
}
