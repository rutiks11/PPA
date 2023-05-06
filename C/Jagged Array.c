#include<stdio.h>

int main()
{
    int row0[4] = {10,20,30,40};
    int row1[3] = {50,60};

    int *jagged[2] = {row0, row1};

    int size[2] = {4,2};

    for (int iCnt = 0 ; iCnt < 2 ; iCnt++)
    {
        int *ptr = jagged[iCnt];

        for(int i = 0 ; i < size[iCnt] ; i++)
        {
            printf("%d\n",*ptr);
            ptr++;
        }  
       
    }
    
    return 0;
}