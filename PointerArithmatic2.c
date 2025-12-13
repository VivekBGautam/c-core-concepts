#include<stdio.h>

int main()
{
    int arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(arr[1]);
    q = &(arr[4]);

    printf("Data fatched by p is : %d\n",*p);   //21
    printf("Data fatched by q is : %d\n",*q);   //111

    p++;
    q--;

    printf("Data fatched by p is : %d\n",*p);   //51
    printf("Data fatched by q is : %d\n",*q);   //101

    return 0;
}