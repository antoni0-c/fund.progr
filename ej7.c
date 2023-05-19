#include<stdio.h>
int main(){
    int num;
    printf("ingrese el número a comprobar\n");
    scanf("%i",&num);
    if((num % 2)==0){
        printf("%i es par",num);
    }
    else{
        printf("%i no es par",num);
    }
}