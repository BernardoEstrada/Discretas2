#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void rellenarConjunto(char conj[7], char u[20]);

int main(){
	srand(time(NULL));
	char univ[20];
	char conj1[7];
	char conj2[7];
	char conj3[7];

	for (int i = 0; i < 20; i++){
		univ[i] = i+97;
	}

	rellenarConjunto(conj1, univ);
	rellenarConjunto(conj2, univ);
	rellenarConjunto(conj3, univ);

	printf("\n");
	for (int i = 0; i < 20; ++i){
		printf("%c, ", univ[i]);
	}
	printf("\n");
	for (int i = 0; i < 7; ++i){
		printf("%c, ", conj1[i]);
	}
	printf("\n");
	for (int i = 0; i < 7; ++i){
		printf("%c, ", conj2[i]);
	}
	printf("\n");
	for (int i = 0; i < 7; ++i){
		printf("%c, ", conj3[i]);
	}
	
	return 0;
}

void rellenarConjunto(char conj[7], char u[20]){
	int temp = 0;
	for(int i=0; i<7; i++){
		conj[i] = NULL;
	}

	for(int i=0; i<7; i++){
		temp = rand()%20;
		printf("%c ", u[temp]);
		if(i==0){
			conj[i] = u[temp];
		}
		for(int j=0; j<i; j++){
			if(conj[j]==u[temp]){
				conj[i] = NULL;
				i=7;
				j=7;
				printf("OUT %c %c %i; ", conj[j], u[temp], temp);
			} else{
				conj[i] = u[temp];
			}
		}
	}
}

void menu(){
	printf("Que deseas hacer?\n");
	printf("1-Mostrar Conjunto Universo\n");
	printf("2-Generar Conjuntos\n");
	printf("3-Mostrar conjuntos\n");
	printf("4-Union\n");
	printf("5-Interseccion\n");
	printf("6-Diferencia\n");
	printf("7-Complemento\n");
	printf("8-Conjunto Potencia\n");
	printf("9-Producto cartesiano\n");
	printf("10-Igualdad\n");
	printf("11-Subconjunto\n");
	printf("12-Subconjunto propio\n");
}
