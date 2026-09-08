//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main(){
    int n = 0;
    printf("Enter N : ");
    scanf("%d",&n);
    // int odds[n];
    // for (int i = 1; i <= n*2; i++){
    //     if((i%2)!=0){
    //         int element = i/2;
    //         odds[element] = i;
    //     }
    // }
    // int sum = 0;
    // for (int j = 0; j < n; j++)
    // {
    //     sum+=odds[j];
    // }
    int sum = 0;
    for(int i = 1;i<=n*2;i++){
        if ((i%2)!=0){
            sum+=i;
        }
        
    }    
    printf("%d",sum);
    return 0;
    
}