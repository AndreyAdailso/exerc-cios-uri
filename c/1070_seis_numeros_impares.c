#include <stdio.h>

int main(){
    int imput, i;
    
    scanf("%d", &imput);
    
    for(i = 0; i < 12; i++){
        if((imput + i) % 2 != 0)
            printf("%d\n", imput + i);
    } 
    
    return 0;
}
