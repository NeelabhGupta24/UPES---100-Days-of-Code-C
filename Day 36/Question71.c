//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h> 
void main(){
    int r,c;
    printf("Enter Row and column of matric in order : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    int i,j;
    printf("Enter Elements for the given matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j= 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < r
        ; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}