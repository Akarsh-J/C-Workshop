#include<stdio.h>

typedef struct employee
{
    int empno;
    char empname[50];
    char dep[50];
    int sal;
}emp;

void read(emp *E)
{
    printf("\n Enter details: \n");
    printf("\n Name:");
    fflush(stdin);
    gets(E->empname);
    printf("\n ID: ");
    scanf("%d",&E->empno);
    printf("\n Department: ");
    fflush(stdin);
    gets(E->dep);
    printf("\n Salary: ");
    scanf("%d",&E->sal);
}

void display(emp E)
{
    printf("\n\n Name: %s",E.empname);

    printf("\n ID: %d",E.empno);

    printf("\n Department: %s",E.dep);

    printf("\n Salary: %d",E.sal);   
}

void main()
{
    emp E[20];

    int ch=0,i=0;

    while(ch!=9)
    {
        printf("\n\n 1. Enter");
        printf("\n 2. Read");
        printf("\n 9. Exit");
        printf("\n Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
            {
                case 1:
                    if(i<20)
                    {
                        read(&E[i]);
                        i++;
                        break;
                        printf("%d",E[0].empno);
                    }
                
                case 2:
                    for(int j=0;j<i;j++)
                    {
                        display(E[j]);
                    }
                    
            }
    }
}