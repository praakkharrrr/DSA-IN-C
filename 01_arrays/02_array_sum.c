#include<stdio.h>
int main()
{ int arr[6] = {12,25,8,15,30,10};
int sum = 0;
for (int i=0; i<6;i++)
{
    sum+=arr[i];
}
printf(" the sum of the array is %d", sum);
return 0;

}