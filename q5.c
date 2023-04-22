#include<stdio.h>
int main() 
{ 
float marks;

printf("\nenter the marks of the student:\n");
scanf("%f",&marks);

if(marks>=86&&marks<=100)
printf("\nA+\n");
else if(marks>=71&&marks<86)
printf("\nA-\n");
else if(marks>=56&&marks<71)
printf("\nB+\n");
else if(marks>=41&&marks<56)
printf("\nB-\n");
else if(marks>=26&&marks<41)
printf("\nC\n");
else if(marks<26)
printf("\nF\n");
else 
printf("\ninvalid marks\n");

return 0;
}
