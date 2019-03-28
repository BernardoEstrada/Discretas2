#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void rellenarConjunto(char conj[7], char u[20]);
void imprimirConjunto(char conj[], int c, char name[]);

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

	imprimirConjunto(conj1, 7, "c1");
	imprimirConjunto(conj2, 7, "c2");
	imprimirConjunto(conj3, 7, "c3");
	imprimirConjunto(univ, 20, "U");
	
	return 0;
}

void rellenarConjunto(char conj[7], char u[20]){
	int temp = 0;
	for(int i=0; i<7; i++){
		conj[i] = NULL;
	}

	for(int i=0; i<7; i++){
		temp = rand()%20;
		if(i==0){
			conj[i] = u[temp];
		}
		for(int j=0; j<i; j++){
			if(conj[j]==u[temp]){
				conj[i] = NULL;
				i=7;
				j=7;
			} else{
				conj[i] = u[temp];
			}
		}
	}
}

void imprimirConjunto(char conj[], int c, char name[]){
	int i = 0;
	printf("%s = {", name);
	while(conj[i]!=NULL && i<c){
		printf("%c", conj[i]);
		if(i<c-1 && conj[i+1]!=NULL){
			printf(", ");
		}
		i++;
	}
	printf("}\n");
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
