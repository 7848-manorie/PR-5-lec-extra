#include<stdio.h>
void main(){
    int a,b;
    printf("enter a value of the first number:");
    scanf("%d",&a);
    printf("enter a value of the second number:");
    scanf("%d",&b);

    if (a<=b)
    {
        printf("The minimum value is:%d",a);
    }
    else{
        printf("The maximum value is:%d",b);
    }
}