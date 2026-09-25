//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char string[30];
    char string2[30];
    char temp;

    printf("Enter first string\n");
    scanf("%s", string);
    printf("Enter second string\n");
    scanf("%s", string2);

    int n = strlen(string);
    int n2 = strlen(string2);

    if (n != n2) {
        printf("Not Anagrams");
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (string[j] > string[j + 1]) {
                temp = string[j];
                string[j] = string[j + 1];
                string[j + 1] = temp;
            }

            if (string2[j] > string2[j + 1]) {
                temp = string2[j];
                string2[j] = string2[j + 1];
                string2[j + 1] = temp;
            }
        }
    }

    bool flag = true;

    for (int i = 0; i < n; i++) {
        if (string[i] != string2[i]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        printf("Anagrams");
    } else {
        printf("Not Anagrams");
    }

    return 0;
}




