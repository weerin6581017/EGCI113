#include <stdio.h>
#include <math.h>

int main()
{
   int a,b,c;
    printf("Enter a b c:\n");
    scanf("%d %d %d",&a,&b,&c);
//part1
printf("The equation is ");
   if (a==0&&b==0&&c==0)
    {
        printf("0\n");
        printf("The solution is 0^2+0+0 = 0");
    }

switch(a)
{
   case 0: break;
   case 1: printf("x^2"); break;
   case -1: printf("-x^2"); break;
   default: printf("%dx^2",a);
}

if(b>0&&a!=0) printf("+");

switch(b)
{
    case 0: break;
    case 1: printf("x"); break;
    case -1: printf("-x"); break;
    default: printf("%dx",b);

}
if(c>0&&(a!=0||b!=0)) printf("+");
switch (c)
{
    case 0: break;
    default: printf("%d\n",c);
}
    //printf("The equation is '%dx^2+%dx+%d'\n",a,b,c);

//part2
   double r;
   r=pow(b,2)-(4*a*c);
   if(r<0)//case1
   {
        printf("b^2-4ac = %.2lf\n",r);
        printf("Negative square root\n");
       printf("The solution does not exist.");
   }
   else if (a==0&&b!=0)//case2
   {
       printf("a=0\n");
       float x;
        x=-(float)c/(float)b;
       printf("The solution is -(%d)/%d = %.2lf",c,b,x);
   }
   else if (a==0&&b==0&&c!=0)//case3
   {
      printf("a and b is 0\n");
      printf("There is no real solution.");

   }
   else if (r==0&&(a!=0||b!=0||c!=0))
   {
        printf("b^2-4ac = %.2lf\n",r);
       printf("A single solution.\n");
       float x;
       x=-(float)b/(2*(float)a);
       printf("The solution is -b/2a = %.2lf",x);
   }

   else if (a!=0||b!=0||c!=0)
   {
    printf("b^2-4ac = %lf\n",r);
       printf("Two solutions.\n");
       float x1,x2;
       x1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
       x2= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
       printf("There are %.2lf and %.2lf.",x1,x2);
   }

    return 0;
}
