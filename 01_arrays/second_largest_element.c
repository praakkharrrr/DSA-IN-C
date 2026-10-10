#include<stdio.h>
int main()
{
    int arr[6] = {12, 45, 7, 89, 23, 67};
    int largest =arr[0];
    int second_largest=arr[0];
    for (int i=1 ; i<6; i++)
     if (largest< arr[i])
    {
        second_largest=largest;
        largest = arr[i];
      }
         else if(second_largest<arr[i] && arr[i]!=largest)
      {
        second_largest=arr[i];
      }
 printf("%d is the second largest element",second_largest);
}