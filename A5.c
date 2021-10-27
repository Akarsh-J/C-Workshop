#include<stdio.h>
#include<stdlib.h>

int sum(int a)
{
    if(a==0)
        return 0;

    else
        return(a%10 + sum(a/10));
}
void main()
{
    int num;
    printf("\n Enter a number: ");
    scanf("%d",&num);
    int S = sum(num);

    printf("\n Sum of the digits of %d is: %d",num,S);
}