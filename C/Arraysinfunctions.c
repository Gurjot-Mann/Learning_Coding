#include <stdio.h>

int func1(int *array)
{
    for (int i = 0; i < 4; i++)
    {
        printf("element %d of the array is %d\n",i,*(array+1));
    }
    
}

int main ()
{
    int arr [] = {1,2,3,4};
    func1(arr);
}