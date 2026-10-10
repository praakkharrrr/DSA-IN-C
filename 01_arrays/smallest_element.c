#include<stdio.h>
int main()
{
    int arr[7]= {34,12,56,8,91,23,5};
    int min = arr[0];
    for (int i=0;i<7;i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("the smallest element is %d",min);
    return 0;
}    