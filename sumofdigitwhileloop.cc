#include <stdio.h>
int main()
{
    int n,sum=0,m;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=n)
    {
        m=n%10;
        sum+=m;
        n/=10;
    }
    printf("The sum of the digit is %d.\n",sum);
    return 0;
}