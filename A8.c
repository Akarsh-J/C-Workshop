#include<stdio.h>

void main()
{
    
    int i,j;
    int (*ptr)[3];
    int arr[3][3];
    
    printf("\n Fill the 3x3 Matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("Element %d:",i+j);
            scanf("%d",(*(arr+i)+j));
        }

    ptr = arr;

    printf("\n\n The entered array is:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",(*(*(ptr+i)+j)));
        }
        printf("\n");
    }
    
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j || i+j==2)  
                sum+=(*(*(ptr+i)+j));
        }
    }
    printf("\n The sum of all diagonal elements is: %d",sum);
}