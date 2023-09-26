#include <stdio.h>
#include <math.h>

int main()
{
   int a,b,c;
   printf("Enter a,b,c (respectiely):");
   scanf("%d,%d,%d",&a,&b,&c);
   double x1,x2;
   x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
   x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
   printf("x1=%lf\n",x1);
   printf("x2=%lf\n",x2);
    return 0;
}
