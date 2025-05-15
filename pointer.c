#include<stdio.h>
int main(){
    int a = 10;
    int *b = &a;
    *b = *b + 20;
    printf("a = %d\n", a);
    printf("annam = %d\n",*b);
    return 0;
}
