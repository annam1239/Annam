#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("enter name:");
    scanf("%19s",name);
    printf("length,%lu\n",strlen(name));
    return 0;
}
