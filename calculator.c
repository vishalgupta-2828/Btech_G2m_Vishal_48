#include<stdio.h>

int main(){

    float num1,num2;
    char operator;

    //talking input
    printf("enter first number");
    scanf("%f",&num1);

    printf("enter an operator(+,-,*,/):");
    scanf("%c",&operator);

    printf("enter second number");
    scanf("%f",&num2);

    //switch case for operation
    switch(operator){
        case '+':
        printf("Result = %.2f\n",num1 + num2);
        break;

        case '-':
          printf("result = %.2f\n",num1 - num2);
          break;

        case '*':
          printf("result = %.2f\n",num1*num2);
          break;

        case '/':
        if (num2 !=0){
          printf("Result = %.2f\n", num1/num2);
        }else
          printf("error! Division by zero is not allowed.\n");
          break;

        default:
          printf("invalid oprator!\n");

    } 
    return 0;
}        





