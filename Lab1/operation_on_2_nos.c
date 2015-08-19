/*This program is for performing operations of addition, subtraction, multiplication and division on two variables.
- Sakshi Shrivastava v1.0*/

#include<stdio.h>

void main()
{
system("clear");
//Declaration of variables
int a, b, sum, difference, product;
float quotient, remainder;

//Asking for user's input
printf("Enter two numbers:");
scanf("%d %d", &a, &b);

sum = a+b;  //addition
difference = a-b; //subtraction
quotient = a/b; //division
product = a*b;  //multiplication
remainder = a%b; //finding remainder

printf("\nResult: sum = %d, difference = %d, quotient = %f, product = %d, remainder = %f\n", sum, difference, quotient, product, remainder);

}

