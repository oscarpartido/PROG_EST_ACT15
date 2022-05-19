/*
autor: oscar vivaldi partido ramirez  realizado:: 21/02/2022
programa que pida numeros y calcule su suma usando el ciclo for
*/
#include <stdio.h>

int main(){
	float numero, suma=0;
	int i=1;
	
	for(int i=1; i<=20; i++){
		printf("Introduce el valor numero %d: ",i);
		scanf("%f",&numero);
		suma=suma+numero;
	}
	printf("la suma es %.2f", suma);
	
	return 0;
	}

