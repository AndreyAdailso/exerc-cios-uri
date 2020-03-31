#include <stdio.h>

int main(){
    
    int cont, n_casos, n_cobaias;
    float tot_ratos = 0,
    tot_sapos = 0,
    tot_coelhos = 0,
    tot_cobaias = 0;
    char tipo_cobaias;

    scanf("%d", &n_casos);
    
    for(cont = 0; cont < n_casos; cont++){
        scanf("%d %c", &n_cobaias, &tipo_cobaias);
        if(tipo_cobaias == 'R'){
            tot_ratos += n_cobaias;
        }else if(tipo_cobaias == 'S'){
            tot_sapos += n_cobaias;
        }else if(tipo_cobaias == 'C'){
            tot_coelhos += n_cobaias;
        }
    }
    
    tot_cobaias = tot_coelhos + tot_ratos + tot_sapos;

    printf("Total: %.0f cobaias\n", tot_cobaias);
    printf("Total de coelhos: %.0f\n", tot_coelhos);
    printf("Total de ratos: %.0f\n", tot_ratos);
    printf("Total de sapos: %.0f\n", tot_sapos);
    printf("Percentual de coelhos: %.2f %%\n", tot_coelhos*100/tot_cobaias);
    printf("Percentual de ratos: %.2f %%\n", tot_ratos*100/tot_cobaias);
    printf("Percentual de sapos: %.2f %%\n", tot_sapos*100/tot_cobaias);

    return 0;
}
