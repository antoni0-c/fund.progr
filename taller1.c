#include <stdio.h>
#include <stdlib.h>
const int price1 = 50;
const int price2 = 80;
const float disc1 = 0.08;
const float disc2 = 0.06;
const float disc3 = 0.3;
const float disc4 = 0.0;


int main ()
{
	
	int price, yrs, quant, total, bb = 0, t = 0, disc_quant = 0;
	char opc, cont;
	float disc, profit, disc_total = 0,total_profits = 0;
	
	
do{
	printf ("\nIngrese los datos respectivos:\n");
	do {
	
	printf ("\nArticulo a comprar: (a.- Malla de beisbol ; b.- Malla de tenis)\n");
	scanf (" %c",&opc);
	
	} while ((opc != 'a' && opc != 'A') && (opc != 'b' && opc != 'B'));
	
	
	printf ("\nIngrese cantidad de articulo a comprar (mts):\n");
	scanf ("%i",&quant);
	
	
	printf ("\nIngrese años como comprador del cliente (en caso de tener menos de un año, ingresar 0):\n");
	scanf ("%i",&yrs);
	
	if ((yrs>5) && (yrs<15)){
		
		switch (opc){
			
			case 'a': case 'A':
			disc = disc1;
			disc_quant += 1;
			break;
			
			default:
			disc = disc2;
			disc_quant += 1;
			break;
			
		}
		
	} else if (yrs>=15){
		
		disc = disc3;
		disc_quant +=1;
		
	} else {
		
		disc = disc4;
		
	}
	
	if ((opc == 'A') || (opc == 'a')){
		
		price = price1;
		bb += quant;
		
	} else {
		
		price = price2;
		t += quant;
		
	}
	
	
	total = quant*price;
	disc_total += (total*disc);
	profit = total - (total*disc);
	total_profits += profit;
	
	
	printf ("\nTotal neto: %d\n", total);
	printf ("\nTotal con descuento (ganancia para la empresa):%f\n",profit);
	
	printf ("\nOtro cliente?(ingrese 'y' para seguir ingresando)\n");
	scanf (" %c",&cont);
	system("clear");
	
} while ((cont == 'y') || (cont == 'Y'));

	printf ("\nResultados:\n");
	
	printf ("\nCantidad (en mts) de mallas de beisbol: %i\nCantidad (en mts) de mallas de tenis: %i\n",bb,t);
	
	
	if (bb>t){
		
		printf ("\nSe vendieron mas mts de mallas de beisbol\n");
		
	} else if (t>bb){
		
		printf ("\nSe vendieron mas mts de mallas de tenis\n");
		
	} else {
		
		printf ("\nAmbas mallas se vendieron en igual cantidad\n");
		
	}

	
	printf ("\nCantidad de clientes con descuento: %i\nTotal en descuentos: %f",disc_quant,disc_total);
	
	printf ("\nTotal de ganancias: %f",total_profits);
	
		
	
	
	return 0;
	
}