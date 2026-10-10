#include<stdio.h>
int main()
{
    int arr[5]= {10,20,30,40,50};
    int temp;
    for(int i =0; i<5/2;i++)
    {
        int j = 4-i ;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<5;i++)
    printf("reversed array is %d ",arr[i]);
} 