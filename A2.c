#include<stdio.h>

void main()
{
    int marks;
    char grade;

    printf("\n Enter your marks: ");
    scanf("%d",&marks);

    if(marks>=85 && marks<=100)
        grade = 'A';
    
    else if(marks>=70 && marks<=84)
        grade = 'B';
    
    else if(marks>=55 && marks<=69)
        grade = 'C';
    
    else if(marks>=40 && marks<=54)
        grade = 'D';
    
    else if(marks<=40)
        grade = 'F';
    
    else
        printf("\n Marks entered not in range!");

    printf("\n Grade secured : %c",grade);
}
