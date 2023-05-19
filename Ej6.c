#include<stdio.h>
#define TASA 1.66386

int main(){
    float x;
    float res;
    printf("ingrese cantidad en dólares \n");
    scanf("%f",&x);
    res=x*TASA;
    printf("equivalente en euros: %f",res);
    return 0;
}
    