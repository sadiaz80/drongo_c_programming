#include<stdio.h>

void main(){

    int password= 234, userpassword;

printf (" Enter your password \n");
    scanf("%i",&userpassword);
    if(userpassword == password)
    {

        printf ("login \n");
        printf("Approved \n");
    }
     else
     {
         printf (" wrong password\n");
       printf("Forget password \n");

     }  
    

}




