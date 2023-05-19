#include <stdio.h>
#include <stdlib.h>

int bisiesto (int y);

int main () {
	int n, i, ced, fem=0, masc=0, men=0, may=0, desc1 = 0,desc2 = 0,d,m,a, edad, max_d, band;
	char sex;
	
	printf ("\nIngrese cantidad de citas a registrar: ");
	scanf ("%d",&n);
	
	for (i=1; i<=n; i++){
		
		printf ("\nDatos del paciente %d:\n\nCedula: ",i);
		scanf ("%d",&ced);
		
		
		do {
			
			printf ("\nSexo(M/F)\n");
			scanf (" %c",&sex);
		} while (sex != 'M' && sex != 'm' && sex != 'F' && sex != 'f');
		
		if ((sex == 'm') || (sex == 'M')){
			masc += 1;
		} else {
			fem += 1;
		}
			
		
		do {
			
			band = 0;
			printf ("\nFecha de nacimiento:\nDia: ");
			scanf ("%d",&d);
			do {
				printf ("\nMes: ");
				scanf ("%d",&m);
			} while ((m>12)||(m<1));
			
			printf ("\nAño: ");
			scanf ("%d",&a);
			
			switch (m){
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
					max_d = 31;
					break;
				case 4: case 6: case 9: case 11:
					max_d = 30;
					break;
				case 2:
					if (bisiesto(a)==1){
						max_d=29;
					} else {
						max_d=28;
					}
					break;
			}
			
			if (d>max_d){
				printf ("\nEl mes indicado posee hasta %d dias, por favor ingrese una fecha valida\n---------------------------------------------",max_d);
				band = 1;	
			}
				
		} while (band == 1);
		
		edad = 2023-a;
		if (edad >= 18){
			may += 1;
		} else {
			men += 1;
		}
		
		if (((sex == 'F') || (sex == 'f'))&&((ced%2)==0)){
			
			printf ("\nEl cliente es elegible para un descuento del 15%\n");
			desc1 += 1;
			
		} else if ((edad >= 60)&&((sex == 'm') || (sex == 'M'))){
			
			printf ("\nEl cliente es elegible para un descuento del 30%\n");
			desc2 += 1;
			
		}
		
	}
	
	printf ("--------------------------------------------------");
	printf ("\nDatos finales de pacientes:\nPacientes totales: %d\nFemeninos: %d\nMasculinos: %d\n",n,fem,masc);
	printf ("Mayores de edad: %d\nMenores de edad:%d\n",may,men);
	printf ("Pacientes con derecho a descuento del 15%: %d\nPacientes con derecho a descuento del 30%: %d",desc1,desc2);
	
	return 0;
}



int bisiesto (int y)
{
	int res;
	
	if ( (((y%4)==0)&&((y%100)!=0)) || ((y%400)==0)){
		res = 1;
	} else {
		res = 0;
	}
	
	return res;
}
		
