#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];

    int size = 0;
    int *ptr  = NULL;

    printf("Enter the size of Array\n");
    scanf("%d",&size);

    // Step 1: Allocate the memory
    ptr = (int *)calloc(sizeof(int), size);

    // Step 2: Use the Memory
    
    // Step 3 : Deallocate the Memory
    free(ptr);
    return 0;
}