//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
int main() {
    char string[20];
    printf("Enter String\n");
    fgets(string,sizeof(string),stdin);
    char character;
    printf("Enter Character\n");
    scanf(" %c",&character);
    int count = sizeof(string)/sizeof(string[0]);
    int freq = 0;
    for(int i = 0; i<count;i++){
        if(string[i]==character){
            freq++;
        }
    }
    printf("%d",freq);
    return 0;
}
