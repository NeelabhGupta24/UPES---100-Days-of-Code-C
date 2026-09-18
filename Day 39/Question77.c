//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
void main(){
    int row,column;
    printf("Enter Row and column of the matrix respectively\n");
    scanf("%d%d",&row,&column);
    int a[row][column];
    int i,j;
    printf("Enter Elements for the given matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j= 0; j < column; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int diagonal = row + column - 1;
    for (int i = 0; i < diagonal; i++)
    {
        if (i<row)
        {
            int r = i;
            int c = 0;
            while (r>=0)
            {
                if ((r+c)%2==0)
                {
                    printf("%d ",a[r][c]);
                } else { 
                printf("%d ",a[c][r]);
                }
                r--;
                c++;
            } 
        }
            else {
                int r = row - 1;
                int c = i - r;
                while (r>=0 && c<column)
            {
                if ((r+c)%2==0)
                {
                    printf("%d ",a[r][c]);
                } else { 
                printf("%d ",a[c][r]);
                }
                r--;
                c++;
            } 
            }
        }      
    }