/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/

#include <stdio.h>
int main(){
    int count = 1;
    for (int i = 0; i < 5; i++){
        int number = 0;
        for (int i = 0; i < count; i++){
            printf("%d",number+1);
            number++;
        }
        printf("\n");
        count++;
    }
    return 0;
}