//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>
int main(){
    int r,c2;
    printf("Enter Row and column in order\n");
    scanf("%d%d",&r,&c2);
    int a[r][c2],b[r][c2],c[r][c2];
    int i,j;
    printf("Enter Elements for first matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j= 0; j < c2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Elements for second matrix :");
    for (i = 0; i < r; i++)
    {
        for (j= 0; j < c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j= 0; j < c2; j++)
        {
            c[i][j]=a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }    
    return 0;
}