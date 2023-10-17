#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,num;
    printf("Input a number:");
    scanf("%d",&n);
    printf("The reverse of the number is ");
    for(i=n;i>0;i/=10)
    {
        num=i%10;
        printf("%d",num);
    }
    printf(".");
    return 0;
}
