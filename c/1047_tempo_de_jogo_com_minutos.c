#include <stdio.h>

int main(){
	int horaInicial = 0, horaFinal = 0, minutoInicial = 0, minutoFinal = 0;
	int hTemp = 0, mTemp = 0;

	scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

	if(horaInicial > horaFinal || horaInicial == horaFinal)
		hTemp = 24 - (horaInicial - horaFinal);
	else
		hTemp = horaFinal - horaInicial;
	
	if(minutoInicial > minutoFinal || minutoInicial == minutoFinal){
		if(hTemp != 0 )
			hTemp = hTemp -1;
		mTemp = 60 - (minutoInicial - minutoFinal);
	}
	else{
		mTemp = minutoFinal - minutoInicial;
	}
	if(mTemp == 60){
		mTemp = 0;
		hTemp += 1;
	}
	if(horaInicial == horaFinal && minutoInicial < minutoFinal)
		hTemp = 0;

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hTemp, mTemp);

	return 0;
}
