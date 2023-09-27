#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,min,max;
    printf("Input 3 number\n");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a<b&a<c) min=a;
    else if (b<a&b<c) min=b;
    else min=c;
    printf("The minimum is %d\n",min);

    if(a>b&a>c) max=a;
    else if (b>a&b>c) max=b;
    else  max=c;
    printf("The maximum is %d\n",max);
    return 0;
}
