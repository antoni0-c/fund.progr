#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct est
{
	char cod[50], nomb[50],dir[150],edad[3],sexo[50];
	int cal1,cal2;
	float prom;
} est;

void calc_prom (int dim, est *vec);
void listar (int dim, est *vec);
void llenar (int dim, est *vec);

	int main(void)
{
	
	int n_est;
	est estudiantes [40];
	
	printf ("Ingrese la cantidad de estudiantes:\n");
	scanf ("%d",&n_est);
	system("clear");
	
	llenar (n_est,estudiantes);
	system("clear");
	calc_prom(n_est,estudiantes);
	listar (n_est, estudiantes);
	
	
	return 0;
	
}
//
void llenar (int dim, est *vec)
{
	
	int i;
	
	for (i=0; i<dim; i++){
		
		printf ("Datos del estudiante %d:\n", i+1);
	
		printf ("Codigo:\n");
		fflush (stdin);
		scanf ("%s",&vec[i].cod);
		printf ("Nombre: \n");
		fflush (stdin);
		scanf ("%s",&vec[i].nomb);
		printf ("Direccion:\n");
		fflush(stdin);
		scanf ("%s",&vec[i].dir);
		printf ("Edad:\n");
		fflush(stdin);
		scanf ("%s",&vec[i].edad);
		printf ("Sexo:\n");
		fflush(stdin);
		scanf ("%s",&vec[i].sexo);
		fflush(stdin);
		
		printf ("Ingrese calificaciones 1 y 2:\n");
		scanf ("%d%d",&vec[i].cal1,&vec[i].cal2);
		
	}
	
}
//
void calc_prom (int dim, est *vec)
{
	
	int i;
	
	for (i=0; i<dim; i++){
		vec->prom = ((vec->cal1+vec->cal2)/2);
	
	}
	
}
//
void listar (int dim, est *vec)
{
	
	int i;
	
	for (i=0; i<dim; i++){
		
		printf ("\nDatos del estudiante %d\n",i);
		printf ("\nCodigo: %s\nNombre: %s\nDireccion: %s\nEdad: %s\nSexo: %s\n", vec[i].cod, vec[i].nomb, vec[i].dir,vec[i].edad, vec[i].sexo);
		
	}
	
}