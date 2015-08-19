/*This program is for calculating the circumference and area of a circle.
- Sakshi Shrivastava v1.0*/

#include<stdio.h>

void main()
{
system("clear");
//Declaration of variables
float r, cir, area;

//Asking for user's input
printf("Enter radius:");
scanf("%f",&r);

//Formula of circumference and area of a circle
cir = 2.0*3.14*r;
area = 3.14*r*r;

printf("\n circle with radius %f has circumference %f and area %f\n",r, cir, area);

}

