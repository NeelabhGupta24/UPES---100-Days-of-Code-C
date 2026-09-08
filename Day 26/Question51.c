/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main (){
    int count = 5;
    int count2 = 1;
    for(int i = 0; i<5;i++){
        for (int i = 0; i < count; i++){
            printf(" ");
        }
        int number = 5;
        for (int j = 1; j <= count2; j++){
            printf("%d",number-count2+j);
        }
        count2++;
        count--;
        printf("\n");
    }
    return 0;        
}
