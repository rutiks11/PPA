#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *jagged[2];

    jagged[0] = malloc(sizeof(int) * 4);
    jagged[1] = malloc(sizeof(int) * 2 );
    

    int size[2] = {4,2};

    for (int iCnt = 0 ; iCnt < 2 ; iCnt++)
    {
        int *ptr = jagged[iCnt];

        for(int i = 0 ; i < size[iCnt] ; i++)
        {
            printf("Enter [%d]th elment of Jagged[%d] = \n", i , iCnt);
            scanf("%d",ptr);
            ptr++;
        }   
    }

    printf("Elements of array : \n");
    
    for (int iCnt = 0 ; iCnt < 2 ; iCnt++)
    {
        int *ptr = jagged[iCnt];

        for(int i = 0 ; i < size[iCnt] ; i++)
        {
            printf("[%d]th elment of Jagged[%d] = %d\n", i , iCnt,*ptr);
            ptr++;
        }   
        printf("\n");
    }
       
    return 0;
}
