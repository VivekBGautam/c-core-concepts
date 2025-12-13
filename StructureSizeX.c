#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    float f;
    char ch1;
    int j;
};
int main()
{
    struct Demo obj;

   struct Demo *p = &obj;

   p->i = 11;
   p->f = 90.4;
   p->j = 21;

   printf("%d\n",p->i);       //11
    printf("%d\n",p->f);       //90.4
     printf("%d\n",p->j);      //21

    return 0;
}