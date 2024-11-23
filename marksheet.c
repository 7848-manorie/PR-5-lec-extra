#include<stdio.h>
void main(){
    float a,b,c,avg;
    char name[20];

    printf("enter your name:");
    scanf("%s",&name);
    printf("enter maths marks:");
    scanf("%f",&a);
    printf("enter english marks:");
    scanf("%f",&b);
    printf("enter science marks:");
    scanf("%f",&c);

    avg=(a+b+c)/3;

    printf("\nStudents name is:%s",name);
    printf("\nMaths marks:%f",a);
    printf("\nenglish marks:%f",b);
    printf("\nscience marks:%f",c);

    if(a>100 || b>100 || c>100)
    {
        printf("\nERROR:invalid marks entry");
    }
    else{
    printf("\nAvg marks:%.2f",avg);
    }
}