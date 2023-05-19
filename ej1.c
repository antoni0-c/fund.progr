#include <stdio.h>
int main() {
    float nota;
    int i;
    float suma;
    int n_notas;
    float promedio;
    suma=0;
    i=1;
    printf("ingrese el número de notas a leer\n");
    scanf("%i",&n_notas);
    for(i=1;i<=n_notas;i++) {
        printf("ingrese la nota %i\n",i);
        scanf("%f",&nota);
        suma = suma + nota;
    }
    promedio = suma/n_notas;
    printf("el promedio es de:%f\n",promedio);
}