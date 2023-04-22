#include<stdio.h>
int main()
{
     int n;
     float x;
     
     
     printf("\nenter the number of sides of polygon:\n");
     scanf("%d",&n);
      
     if(n>2)
     {x=(float)n;
     printf("\ninterior angle is:%f\n",180*(x-2)/x);}
     else
     printf("\ninvalid number of sides.\n");
     
     return 0;
}

