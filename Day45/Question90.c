//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
int main() {
    char string[20];
    printf("Enter String\n");
    fgets(string,sizeof(string),stdin);
    char character;
    int count = sizeof(string)/sizeof(string[0]);
    for(int i = 0; i<count;i++){
        if(97<=string[i] && string[i]<=122){
            string[i]=string[i]-32;
        } else if(65<=string[i] && string[i]<=90){
            string[i]+=32;
        }
    }
    printf("%s",string);
    return 0;
}
