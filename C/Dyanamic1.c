#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];

    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of Array\n");
    scanf("%d",&size);

    // 1. Allocate memory
    ptr = (int *)malloc(sizeof(int)*size);

    // 2. Use the Memory

    // 3. Deallocate the Memroy
    free(ptr);
    return 0;
}