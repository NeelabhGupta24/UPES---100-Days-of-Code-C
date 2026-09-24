//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char string[20];
    char letters[20];

    printf("Enter String\n");
    fgets(string, sizeof(string), stdin);

    // Remove newline
    string[strcspn(string, "\n")] = '\0';

    int end = strlen(string);
    int letterCount = 0;

    char repeat;
    bool repeatFlag = false;

    for (int i = 0; i < end; i++) {

        for (int k = 0; k < letterCount; k++) {

            if (string[i] == letters[k]) {
                repeat = string[i];
                repeatFlag = true;
                break;
            }
        }

        if (repeatFlag) {
            break;
        }

        // Add current character to letters
        letters[letterCount] = string[i];
        letterCount++;
    }

    if (repeatFlag) {
        printf("Repeating character is %c\n", repeat);
    } else {
        printf("There is no repeating character\n");
    }

    return 0;
}
