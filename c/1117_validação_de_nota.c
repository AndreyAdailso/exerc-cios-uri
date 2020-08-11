#include <stdio.h>

float inputnota();

int main(){
    
    float primeiraNota, segundaNota, media;
    primeiraNota = inputnota();
    segundaNota = inputnota();

    media = (primeiraNota + segundaNota)/2;


    printf("media = %.2f\n", media);

    return 0;
}

float inputnota(){
    float input;
    while (1){
        scanf("%f", &input);
        if ( 0 <= input && input <= 10){
            break;
        }
        else{
            printf("nota invalida\n");
        }
    }
    return input;
}
