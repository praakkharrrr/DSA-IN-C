#include<stdio.h>
int main()
{
    int arr[5]={12,45,7,89,23};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    printf("%d is the largest element",max);
}