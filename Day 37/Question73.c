//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        printf("%d ",sum);
    }
}