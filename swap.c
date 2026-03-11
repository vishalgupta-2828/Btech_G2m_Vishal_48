#include<stdio.h>
int main ()
{
    int a ,b ;
    printf("enter two numbers");
    scanf("%d %d \n",&a,&b);

    printf("the enter numbers are %d and %d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;

    printf("the values after swapping are = %d and %d",a,b);

    return 0;
}