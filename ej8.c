#include<stdio.h>

int main(){
    int num1,num2,num3;
    printf("ingrese tres números\n");
    scanf("%i%i%i",&num1,&num2,&num3);
    if((num1==num2) && (num2==num3))
    {
        printf("los tres numeros son iguales");
    }
    else if(num1>num2)
    {
        if(num1>num3){
            printf("%i es el mayor",num1);
        }
        else{
            printf("%i es el mayor",num3);
        }
    }
    else if(num2>num3){
            printf("%i es el mayor",num2);
        }
         else{
            printf("%i es el mayor",num3);
        }
}
