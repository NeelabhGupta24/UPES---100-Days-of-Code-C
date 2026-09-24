//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
    char string[20];
    char newstring[20];
    printf("Enter String\n");
    fgets(string,sizeof(string),stdin);
    int end = strlen(string);
    int indices[end];
    int p = 0;
    for(int i = 0;i<end;i++){
        bool flag = false;
        for(int j = 0; j<10; j++ ){
            if(string[i]==vowels[j]){
                flag = true;
                break;
            }
        }
        if(flag){
            continue;
        } else{
            newstring[p]=string[i];
            p++;
        }
    }
    for(int l = 0;l<p;l++){
        printf("%c",newstring[l]);
    }
}
    
