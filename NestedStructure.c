#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float marks;
    struct Demo donj;           //nested
};

int main()
{

    printf("Size of hello Structure is : %lu\n",sizeof(struct Hello));
    return 0;
}