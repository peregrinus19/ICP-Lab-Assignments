/*This program is for finding Simple Interest.
- Sakshi Shrivastava v1.0*/

#include<stdio.h>

void main()
{
system("clear");
//Decalartion of variables
int P, R, N;
float SI;

//Asking for user's input
printf("Enter Principle Amt, Rate of Interest, and no of years:");
scanf("%d %d %d",&P,&R,&N);

//Formula for finding Simple Interest
SI= (P*R*N)/100;

printf("\nResult: Simple Interest = %f\n",SI);

}

