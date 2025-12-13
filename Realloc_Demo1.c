#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;

    //Step1 : Allocate the memory
    Arr = (int *)malloc(5 * sizeof(int)); //20 byte
    
    // Step2 : USe the Memory
    
    Arr = (int *)realloc(Arr,10*sizeof(int));  // 40 byte

    // Step3 : Free th ememory
    free(Arr);
    return 0;
}