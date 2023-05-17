#include<stdio.h>

int x,y,opc;
float res;

int suma (int a, int b);
float resta (int a, int b);
float mult (int a, int b);
float divis (int a, int b);

int main()
{
	printf("ingrese a:\n");
	scanf("%i",&x);
	printf("\ningrese b:\n");
	scanf("%i",&y);
	printf("\ningrese opcion: 1- Suma; 2- Resta; 3- Multiplicacion; 4- Division; 5- Factorial");
	scanf("%i",&opc);
	
	switch (opc) {
		case 1:
			res=suma (x,y);
			break;
			
		case 2:
			res=resta (x,y);
			break;
			
		case 3:
			res=mult (x,y);
			break;
			
		case 4:
			res=divis (x,y);
			break;
		
		
	}
	
	printf("%f",res);
	
	return 0;
}

int suma (int a, int b){
	
	int res;
	
	res=a+b;
	
	return(res);
}
	
	
float resta (int a, int b){
	
	float res;
	
	res=a-b;
	
	return(res);
}

float mult (int a, int b){
	
	float res;
	
	res=a*b;
	
	return(res);
}
float divis (int a, int b){
	
	float res;
	
	res=a/b;
	
	
	return(res);
}
