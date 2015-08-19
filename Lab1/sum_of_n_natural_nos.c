/*This program is for calculating the sum of first n natural numbers.
- Sakshi Shrivastava v1.0*/

#include<stdio.h>

void main()
{
system("clear");
//Decalartion of variables
int n;
float sum;

//Asking for user's input
printf("For the sum of first N nos, enter the no:");
scanf("%d", &n);

//Formula for calculating sum of first n natural numbers
sum = (n*(n+1))/2;

printf("\nResult: sum = %f\n", sum);

}

