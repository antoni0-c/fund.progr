#include <stdio.h>
#include <stdlib.h>

int es_par (int x);
int es_primo (int x);
int calc_0 (int x);

int main (){
	
	int ing = 0, num, pares = 0, impares = 0, primos = 0, ceros = 0;
	char opc;
	
	do{
		
		++ing;
		
		printf ("\nIngrese un numero:\n");
		scanf ("%d",&num);
	
		if (es_par (num)==1){
			pares += 1;
		} else {
			impares +=1;
		}
	
		if (es_primo (num)==1){
			primos += 1;
		}
	
		ceros += calc_0(num);
	
		printf ("\nDesea ingresar otro numero? (y - si ; n - no)\n");
		scanf (" %c",&opc);
		
		system ("clear");
	
	} while (opc == 'y');
	
	printf ("\nNumeros ingresados: %d\n",ing);
	printf ("Pares: %d\nImpares: %d\nPrimos: %d\nVeces que se ingresaron ceros: %d",pares,impares,primos,ceros);
	
	
	return 0;
}

int es_par (int x){
	
	int res;
	if ((x % 2)==0) {
		res = 1;
	} else res = 0;
	
	return res;
	
}

int es_primo (int x){
	
	int res = 1,i = 2;
	
	do {
		
		if ((x % i)==0){
			res = 0;
		}
		i += 1;
		
	} while ((res == 1) && (i<x));
	
	return res;
	
}

int calc_0 (int x){
	
	int cont = 0,aux,dig;
	
	aux = x;
	do {
		dig = aux%10;
		aux = aux/10;
		if (dig == 0){
			cont += 1;
		} 
	} while (aux != 0);
	
	return cont;
	
}