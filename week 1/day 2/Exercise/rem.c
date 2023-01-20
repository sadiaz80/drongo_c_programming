#include<stdio.h>

//int main(){

   // int days , weeks , years;

    //days = 1329;

   // weeks = ( days % 365 ) / 7 ;
   // years = ( days / 365);
   // days = days- ((years*365) + (weeks*7));

   // printf("years : %d \n", years);
   // printf("weeks: %d \n ",weeks);
   // printf("days: %d\n ", days);

//return(0);

int main (){

char id[10];
int hrs ;
double value , salary ;
printf(" imput employee id (max. char 10)");
scanf(" %s" , id);

printf("input working hrs:");
scanf("%d",&hrs);

printf("\n salary amount/hrs:");
scanf("%lf",&value);

salary= value * hrs ;
printf("\n Employee id = %s \n salary = U$ %.2lf\n", id,salary );
return 0;







}






