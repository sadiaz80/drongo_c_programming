#include <stdio.h>

int get_salary(double amount, double amount2);
double summations();

void main()
{
    double fn, sn;
    printf("Enter the first number \n");
    scanf("%lf",&fn);

    printf("Enter the second number \n");
    scanf("%lf", &sn);

    // printf(" this is main function \n");
    // printf(" calling get salary \n");
    double xy = get_salary(fn, sn);
    printf("%.2lf \n", xy);
    double s = summations (fn, sn);
    printf("this is last line \n ");
}

int get_salary(double amount, double amount2)
{
    printf("Inside the get_salary function \n");
    double total = amount * amount2;
    return total;
}
double summations (double amount , double amount2){
    double sum =amount + amount2;
    printf ("this is the sum %.2lf \n", sum);
    return sum ;








}
