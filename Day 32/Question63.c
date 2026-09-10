//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main (){
    int n,m;
    printf("Enter number of elements in the first and second array in order : ");
    scanf("%d%d",&n,&m);
    int arr1[n],arr2[m],arr3[m+n];
    printf("Enter Elements of the first array \n");
    int j= m + n;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter Elements of the second array \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < m+n; i++)
    {
        if(j>=n){
            arr3[i]=arr1[i];
            j--;}
        else{
            arr3[i]=arr2[i-n];
        }
    }   
    for (int i = 0; i < m+n; i++)
    {
        printf("%d ",arr3[i]);
    }
    
    
}