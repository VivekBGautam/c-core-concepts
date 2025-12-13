#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};
int main()
{
    struct Demo obj;

    printf("size of struct demo is :%lu\n",sizeof(struct Demo));
    printf("sizeof object is : %d\n",sizeof(obj));

    return 0;
}