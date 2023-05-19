#include<stdio.h>
#define P_AZ 3.0
#define P_CAF 0.72
int main() {
    float total, az, caf, resto;
    printf("ingrese monto a dividir\n");
    scanf("%f",&total);
    az=total/2;
    caf=total/3;
    resto=total-az-caf;
    az=az/P_AZ;
    caf=caf/P_CAF;
    printf ("azúcar:%fkg\ncafé:%fkg\nsobrante:%f$",az,caf,resto);
    return 0;
}