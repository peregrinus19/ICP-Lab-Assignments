/*This program is for swapping the values of two variables without using a temporary variable.
- Sakshi Shrivastava v1.0*/

#include<stdio.h>

void main()
{
system("clear");
//Declaration of variables
int x, y;

//Asking for user's input
printf("Enter two numbers: ");
scanf("%d %d", &x,&y);

//Swapping the values of the two variables
x= x+y;
y= x-y;
x= x-y;

printf("\nx=%d y=%d\n", x,y);

}

