/*This program is for swapping the values of two variables using a temporary variable.
- Sakshi Shrivastava v1.0*/

#include<stdio.h>

void main()
{
system("clear");
//Declaration of variables
int x, y, temp;

//Asking for user's input
printf("Enter two numbers: ");
scanf("%d %d", &x,&y);

//Swapping the values of the two variables
temp = x;
x = y;
y = temp;

printf("\nx=%d y=%d\n", x,y);

}

