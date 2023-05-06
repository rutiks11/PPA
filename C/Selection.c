#include<stdio.h>

int main()
{
    int No = 0;
    printf("Enter Number : \n");
    scanf("%d",&No);

    if((No % 2) == 0)
    {
        printf("It is Even number\n");
    }   
    else
    {
        printf("It is Odd number\n");
    }
    return  0;
}