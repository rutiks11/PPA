#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    
    // Step 1 Allocate the Memory
    ptr= (int *)malloc(sizeof(int) * 5);

    

    ptr = (int *)realloc(ptr,sizeof(int) * 7);
    // ptr = (int *) realloc(ptr, sizeof(int) * 3);

    // Step 3: Deallocate the Memory
    free(ptr);
    
    return 0;
}