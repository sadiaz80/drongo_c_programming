
#include <stdio.h>

void main()

{
    double tax = 0.0735, bill, emp_discount = 0.15, discount_price, total;
    int emp;

    printf("Enter your bill amount \n");
    scanf("%lf", &bill);

    printf("Enter 1: for employees or 2: for non_employees");
    scanf("%i", &emp);

    if (emp == 1)
    {
        discount_price = bill - (bill * emp_discount);
        total = discount_price + (discount_price * tax);
        printf("the total for an employee is %.2lf \n", total);

    }
    else
    { 
        total = bill + ( bill * tax);
        printf("the total for non employee is %2.lf \n", total);

    
    }
}
