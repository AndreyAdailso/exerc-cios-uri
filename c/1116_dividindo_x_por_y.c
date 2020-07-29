#include <stdio.h>

int main(){
    int N, x, y, j;
    float quociente;

    scanf("%d", &N);

    for(j = 0; j < N; j++){
        scanf("%d %d", &x, &y);
        if(y == 0)
            printf("divisão impossivel\n");
        else{
            quociente = ((float)x/(float)y);
            printf("%.1f\n", quociente);
        }
    }
    
    return 0;
}
