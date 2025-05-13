// Online C compiler to run C program online
#include <stdio.h>
 int main() 
{
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=90)
    printf("your grade is a");
    else if(marks>=80)
    printf("your grade is b");
    else if(marks>=60)
    printf("your grade is c");
    else
    printf("your grade is d");
    return 0;
}


