/*This program is for finding total marks of 5 subjects and its percentage.
- Sakshi Shrivastava v1.0*/

#include<stdio.h>

void main()
{
system("clear");
//Declaration of variables
int m1, m2, m3, m4, m5, total_marks;
float percentage;

//Asking for user's input
printf("Enter marks of 5 subjects out of 75:");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

//Formula for finding total marks and percentage
total_marks = m1+m2+m3+m4+m5;
percentage = (total_marks*100)/375;

printf("\nResult: Total of 5 subjects is %d and percentage is %f\n", total_marks, percentage);

}

