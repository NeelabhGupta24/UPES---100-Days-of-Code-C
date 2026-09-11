//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main() {
    int elements = 0;
    printf("Enter Number of elements of array : ");
    scanf("%d",&elements);
    int array[elements];
    printf("Enter Elements of the array\n");
    for (int i = 0; i < elements; i++)
    {
        scanf("%d",&array[i]);
    }
    int search = 0;
    printf("Enter Element to be searched\n");
    scanf("%d",&search);
    int index = 0;
    if (elements%2==0)
    {
        index = (elements/2)-1;
    } else{
        index = elements/2;
    }
    int flag = 0;
    while (true)
    {
        if (flag>elements)
        {
            printf("%d",-1);
            break;
        }
        else{
        
            if (search<array[index])
            {
                index = index/2;
                flag++;
            } else if (search>array[index])
            {   
                index= index + index/2;
                flag++;
            }else{
                printf("%d",index);
                break;
            }
        }
    }
    return 0;
    
}