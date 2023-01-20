#include<stdio.h>

// this is main function
int main(){
    printf(" program starts\n");

    int sum, num1, num2;
    // int sum:
    // int num;
    // int num2;
    printf("Enter first number\n");
    scanf("%i", &num1);
    printf("Enter second number\n");
    scanf("%i",&num2);
    sum=num1 + num2;
    printf("the sum of %i + %i = %i \n", num1, num2,sum);
}

