#include<stdio.h>
int main(){
    int i,j;
    int rows,cols;
    printf("enter the row and col;");
    scanf("%d%d",&rows,&cols);
    int a[rows][cols],b[rows][cols],c[rows][cols];
    for (i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("enter the element of A matrix;\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("enter the element of B matrix;\n");
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            c[i][j]=a[i][j]+b[i][j];
            
        }
    }
    printf("the output is\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",c[i][j]);
        }
    }
}
