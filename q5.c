#include<stdio.h>
int main() 
{ 
float marks;

printf("\nenter the marks of the student:\n");
scanf("%f",&marks);

if(marks>=86&&marks<=100)//if marks are between 86 to 100 student gets A+ grade.
printf("\nA+\n");
else if(marks>=71&&marks<86)//if marks are between 71 to 86 student gets A- grade.
printf("\nA-\n");
else if(marks>=56&&marks<71)//if marks are between 56 to 71 student gets B+ grade.
printf("\nB+\n");
else if(marks>=41&&marks<56)//if marks are between 41 to 56 student gets B- grade.
printf("\nB-\n");
else if(marks>=26&&marks<41)//if marks are between 26 to 41 student gets C grade.
printf("\nC\n");
else if(marks<26)//if marks are less than 26 student gets F grade.
printf("\nF\n");
else 
printf("\ninvalid marks\n");//in all other cases 

return 0;
}
