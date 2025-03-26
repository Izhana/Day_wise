#include<stdio.h>  
int main() 
{   
   float fahrenheit,celsius;  
   printf("Enter the temp in celsius =");
   scanf("%f",&celsius);
  fahrenheit=((celsius*9)/5)+32;  
   printf("Temperature in fahrenheit is:  %f",fahrenheit);
   printf("\n\n Enter the temp in fahrenheit =");
   scanf("%f",&fahrenheit);
   celsius=((fahrenheit-32/9)*5);
    printf("Temperature in celsius is:  %f",celsius);
    return (0);  
    }
