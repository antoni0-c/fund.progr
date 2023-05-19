#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Const
const int precio=10;
const int t = 2;
const int a = 4;

//Tipo

typedef struct reg
{
	
	char artesano[50],id_tall[50];
	int talleres[a];
	int total;
	float ing;
	
} reg;

typedef reg vec_tall [t];

//Prototipos
void entrada (vec_tall *v);
void totalx_taller (int x, vec_tall *v);

//Main
	int main(void)
{
	//Var
	vec_tall gente3r;
	
	//Inicio
	entrada (&gente3r);
	totalx_taller (1,&gente3r);
	/*for (i=0; i<t; i++){
		
		totalx_taller (i,&gente3r);
		ingresox_taller (i,&gente3r);
		
	}
	salida (&gente3r);*/
	
	return 0;
}

//Proc
void entrada (vec_tall *v) 
{
	
	int i,j;
	
	for (i=0; i<t; i++){
		printf ("\nIngrese datos del taller %d: \n\nArtesano:\n",i+1);
		fflush(stdin);
		scanf("%s",&v[i]->artesano);
		printf ("\nNombre del taller:\n");
		fflush(stdin);
		scanf("%s",&v[i]->id_tall);
		fflush(stdin);
		for (j=0; j<a; j++){
			printf ("\nIngrese cantidad de asistentes en la comunidad %d\n",j+1);
			scanf ("%d",&v[i]->talleres[j]);
		}
		system("clear");
	}
}

void totalx_taller (int x, vec_tall *v)
{
	
	int i,totalx=0;
	for (i=0; i<a; i++){
		totalx = totalx+(v[x]->talleres[i]);
	}
	v[x]->total = totalx;
	printf ("total: %d",v[i]->total);
}