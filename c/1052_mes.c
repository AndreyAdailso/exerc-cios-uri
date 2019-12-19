#include <stdio.h>
#include <string.h>

int main(){
    int imput;
    char *meses[12] = {"January", "February", "March", "April", "May", "June",
     "July", "August", "September", "October", "November", "December"};

     scanf("%d", &imput);
     printf("%s\n", meses[imput - 1]);

     return 0;
}
