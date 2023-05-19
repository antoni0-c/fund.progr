#include <stdio.h>

float suma (float x, float y);
float resta (float x, float y);
float mult (float x, float y);
float div (float x, float y);

int main (void)
{

	float a, b, res;
	int opc;
	
	
	printf ("\nIngrese numeros a operar:\nNumero A:\n");
	scanf ("%f", &a);
	printf ("\nNumero B:\n");
	scanf ("%f", &b);
	
	selec:
	printf ("\nOperaciones:\n1.- Suma\n2.- Resta\n3.- Multiplicacion\n4.- Division\n");
	scanf ("%d",&opc);
	
	switch (opc){
		
		case 1:
			res = suma (a,b);
			break;
		case 2:
			res = resta (a,b);
			break;
		case 3:
			res = mult (a,b);
			break;
		case 4:
			res = div (a,b);
			break;
		default:
			printf ("\nOpcion no valida, ingrese una opcion de las mencionadas.\n");
			printf ("-------------------------------------------");
			goto selec;
			break;
			
	}
	
	printf ("\n Resultado: %.2f",res);
	if ((opc == 4)&&(b == 0)){
		printf ("-(Error: La division entre 0 no esta definida)-");
	}
	return 0;
}

float suma (float x, float y)
{
	float res;
	
	res = x+y;
	
	return res;
}

float resta (float x, float y)
{
	float res;
	
	res = x-y;
	
	return res;
}
float mult (float x, float y)
{
	float res;
	
	res = x*y;
	
	return res;
}
float div (float x, float y)
{
	float res;
	
	res = x/y;
	
	return res;
}
	