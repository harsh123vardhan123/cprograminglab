#include <stdio.h>
int main()
{
    int first=0,second=1,third,i,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("\n The fibonacci sequence is:\n");
    for(i=0;i<n;i++)
    {
        third=first+second;
        printf("%d",third);
        first=second;
        second=third;
    }
    printf("\n");
    return 0;
}