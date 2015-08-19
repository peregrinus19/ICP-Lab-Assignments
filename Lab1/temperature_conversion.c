/*This program is for converting temperature from Fahrenheit to Celsius and visa-versa.
- Sakshi Shrivastava v1.0*/

#include<stdio.h>

void main()
{
system("clear");
//Declaration of variables
float F, C;

//Asking for user's input i Fahrenheit
printf("Enter temperature in Fahrenheit: ");
scanf("%f",&F);

//Converting Fahrenheit to Celsius
C = (5/9)*(F-32);
printf("\nConversion from Fahrenheit to Celsius is %f\n",C);

//Asking for user's input in Celsius
printf("Enter temperature in Celsius: ");
scanf("%f",&C);

//Converting Celsius to Fahrenheit
F = ((9/5)*C)+32;
printf("\nConversion from Celsius to Fahrenheit is %f\n",F);
}

