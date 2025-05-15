#include<stdio.h>
int n, size;
int evenarray(int arr[],int size)
{
    printf("even element of array are:");
    for(int i=0;i>n;i++)
        if(arr[i]%2==0)
            printf("%d",arr[i]);
}
int main()
{
    printf("hi annam!\n");
    printf("enter the size of an array;");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of an array:");
    for(int i=0;i<n;i++);
{
    scanf("%d",&arr[n]);
}
evenarray(arr,n);
return 0;
}
