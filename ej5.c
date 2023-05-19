#include<stdio.h>
int main(){
    int num1,num2,aux;
    printf("ingrese dos números\n");
    scanf("%i%i",&num1,&num2);
    aux=num2;
    num2=num1;
    num1=aux;
    printf("nuevos valores: %i, %i",num1,num2);
}