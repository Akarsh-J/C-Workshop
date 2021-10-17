#include<stdio.h>

void main()
{
    int choice;

    printf("\n Enter your random choice(1-5): ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:{
            printf("\n Food Item: Pasta\n Price: Rs.179");
            break;
        }
        case 2:{
            printf("\n Food Item: Pizza\n Price: Rs.239");
            break;
        }
        case 3:{
            printf("\n Food Item: Sandwich\n Price: Rs.149");
            break;
        }
        case 4:{
            printf("\n Food Item: French Fries\n Price: Rs.99");
            break;
        }
        case 5:{
            printf("\n Food Item: Burgir\n Price: Rs.129");
            break;
        }

        default: printf("\n Enter a number from 1-5 only!");
    }
}