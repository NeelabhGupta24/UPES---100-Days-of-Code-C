//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <stdbool.h>
void main () {
    char str[100];
    printf("Enter Word\n");
    scanf(" %s",&str);
    char vowel[5] = {'a','e','i','o','u'};
    int i = 0;
    int vowels = 0;
    int consonants = 0;
    while (str[i]!='\0')
    {
        bool flag  = false;
        for (int j = 0; j < 5; j++)
        {
            if (str[i]==vowel[j])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            vowels++;
        } else {
            consonants++;
        }
        i++;
    }
    printf("Vowels = %d, Consonants = %d",vowels,consonants);
}