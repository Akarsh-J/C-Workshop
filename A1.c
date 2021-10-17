#include<stdio.h>

void main()
{
    int a,b;

    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);

    printf("\n Before swapping:\n a = %d\n b  =%d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n After swapping:\n a = %d\n b = %d",a,b);
    
}