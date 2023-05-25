#include<iostream>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int Arr[5];
    
    int *ptr1 = NULL;
    ptr1 = (int *)malloc(sizeof(int) * 5);   // Dynamic Memory Allocation

    int *ptr2 = NULL;
    ptr2 = (int *)malloc(sizeof(int) * 5);   // Dynamic Memory Allocation
    
    int *X = NULL;
    X = new int[5];

    // Deallocation of memory 
    free(ptr1);
    free(ptr2);
    delete[] X;

    return 0;
}