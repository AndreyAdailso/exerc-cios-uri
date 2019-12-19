#include <stdio.h>
#include <stdlib.h>

int main(){
    float var[3];
    int input, i;
    float *media;

    scanf("%d", &input);

    media = (float*) malloc(input * sizeof(float));

    for(i = 0; i < input; i++){
        scanf("%f %f %f", &var[0], &var[1], &var[2]);
        media[i] = (2*var[0] + 3*var[1] + 5*var[2]) / 10;
    }
    
    for(i = 0; i < input; i++){
        printf("%.1f\n", media[i]);
    }
    return 0;
}
