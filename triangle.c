#include<stdio.h>
#include<math.h>
int main ()
{
    int a , b, c, s, area;
    printf("enter all three sides of the triangle");
    scanf("%d %d %d\n",&a,&b,&c);
    
    s =(a+b+c)/2;
    area = sqrt( s*(s-a)*(s-b)*(s-c));
    printf("the area is = %d",area);

    return 0;
}