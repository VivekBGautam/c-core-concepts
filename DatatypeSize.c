#include<stdio.h>

int main()
{
    char cValue ='S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;

    printf("Sizeof charector is : %lu\n",sizeof(cValue));
    printf("Sizeof integer is : %lu\n",sizeof(iValue));
    printf("Sizeof float is : %lu\n",sizeof(fValue));
    printf("Sizeof double is : %lu\n",sizeof(dValue));

    return 0;
}