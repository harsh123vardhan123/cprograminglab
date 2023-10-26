#include <stdio.h>
int main()
{
    int choice;
    float r,s,l,b;
    float area,perimeter;
    printf("Select any one Choice from the following:");
    printf("\n1.Circle");
    printf("\n2.Square");
    printf("\n2.Rectangle");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==1)
   { printf("enter the radius of the circle:");
    scanf("%f",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("\nArea is: %.2f",area);
    printf("\nPerimeter is:%.2f",perimeter);
   }
   else if(choice==2)
   {
    printf("Enter the side of the square:");
    scanf("%f",&s);
    area=s*s;
    perimeter=4*s;
    printf("\nArea is:%.2f",area);
    printf("\nPerimter is:%.2f,perimeter");
   }
   else if(choice==3)
   {
    printf("Enter the length and breadth of the rectangle:");
    scanf("%f%f",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("\nArea is:%.2f",area);
    printf("\nPerimter is:%.2f",perimeter);
   }
   else{
    printf("Invalid number");
   }
   return 0;
}