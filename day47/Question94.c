//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char word[30];
    char longest[30];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence\n");
    fgets(string, 100, stdin);

    while (string[i] != '\0') {
        if (string[i] != ' ' && string[i] != '\n') {
            word[j] = string[i];
            j++;
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;
        }

        i++;
    }

    if (j > 0) {
        word[j] = '\0';

        if (j > max) {
            strcpy(longest, word);
        }
    }

    printf("%s", longest);

    return 0;
}
