#include<stdio.h>
#include<math.h>
int main()
{
     double a,b,c,d,x;

     printf("\nenter the coefficients of x^2,x,and constant of the quadratic equation respectively:\n");
     scanf("%lf%lf%lf",&a,&b,&c);
     if(a!=0)
     {
            d=b*b-4*a*c;
            x=sqrt(d);
            if(d>0)
            printf("\ntwo real roots exist:%.3lf\t%.3lf\n",(-b+x)/(2*a),(-b-x)/(2*a));
            else if(d==0)
            printf("\none real roots exist:%.3lf",-b/(2*a));
            else 
            printf("\nno real roots exist.\n");
            }

    else 
    printf("\ngiven equation is not a quadratic equation.\n");

    return 0;
}
