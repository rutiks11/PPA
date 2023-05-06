#include <stdio.h>

struct Demo
{
    int no;
    char ch1;
    char ch2;
    float f;
    int i;
};

struct Hello
{
    int no;
    char ch1;    
    float f;
    char ch2;
    int i;
};

int main()
{
    struct Demo obj1;
    struct Hello obj2;

    printf("%d\n",sizeof(obj1));
    printf("%d\n",sizeof(obj2));

    return 0;
}