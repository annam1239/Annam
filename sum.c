#include<stdio.h>
int main(){
    int n,arr[n],sum=0,i;
    printf("entrer the array elements n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);
        sum+=arr[n];
    }
    printf("%d\n",sum);
}
