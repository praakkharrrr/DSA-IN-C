include<stdio.h>
int main()
{
int arr[6]= {12, 7, 8, 15, 20, 3};
int odd=0; 
int even=0;
    for(int i=0;i<6;i++)
    if (arr[i]%2==0)
    {
        even++ ;
    }
     else()
    {
       odd++ ;
    }
printf("%d elements are even",even);
printf("%d elements are odd",odd);
}