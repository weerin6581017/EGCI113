#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,i,n;
    count=0;
    printf("Input a number:");
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
    {
        if(i%10==3) count++;
    }
    printf("There are %d of 3 in this %d.",count,n);
    return 0;
}
