#include<stdio.h>
int main()
{
    int a,i=2,c=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(i<=a)
    {
        if(a%i==0)
        {
            c++;
        }
        i++;
    }
    if(c==1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    return 0;
}