//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
void main(){
    int rows,columns; // Variables to store rows and columns of matrix that will be input by user
    printf("Enter rows and columns of the matrix respectively\n");
    scanf("%d%d",&rows,&columns);
    int matrix[rows][columns]; //Creating unassigned matrix
    printf("Enter elements of the matrix\n");
    bool Flag = false;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&matrix[i][j]);//Assigning Values to matrix
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i!=j)
            {
                if (matrix[i][j] == matrix[j][i]) //checking symmetry
                {
                    Flag = true;
                } else{
                    Flag = false;
                    break;
                }
            }
        if (Flag)
        {
            continue;;
        } else{
            break;
        }
        
        }
    }
    if(Flag){
        printf("True\n");
    } else {
        printf("False\n");
    }
}