#include <stdio.h>
int main()
{
    int num,originalnum,remainder,result=0;
    printf("Enter a three-digit integer:");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0)
    {
        // remainder contains the last digit remainder=originalnum % 10;
        result+=remainder*remainder*remainder;
        // removing last digit from the original number
        originalnum/=10;
    }
    if(result==num)
    printf("%d is an Armstrong number.",num);
    else
    printf("%d is not an Armstrong num.",num);
    return 0;
}
