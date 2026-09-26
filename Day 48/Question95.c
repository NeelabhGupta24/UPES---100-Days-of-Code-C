//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void main(){
    char firstString[30];
    char secondString[30];
    printf("Enter first string\n");
    scanf("%s",&firstString);
    printf("Enter second string\n");
    scanf("%s",&secondString);
    int countOne = strlen(firstString);
    int countTwo = strlen(secondString);
    bool rotateFlag = false;
    bool flag = false;
    if(countOne!=countTwo){
        printf("Not Rotation");
    } else {
            for (int i = 0; i < countOne; i++)
            {
                for (int j = 0; j < countTwo; j++)
                {
                    if (firstString[j]==secondString[j])
                    {
                        flag = true;
                        rotateFlag =false;
                        continue;
                    } else{
                        flag = false;
                        rotateFlag=true;
                        break;
                    }
                }
                if (rotateFlag)
                {
                    char temp = secondString[0];
                    for (int k = 0; k < countOne-1; k++)
                    {
                       secondString[k]=secondString[k+1];
                    }
                    secondString[countOne-1]=temp;
                }
            }
            if(flag){
                printf("Rotation");
            } else {
                printf("Not Rotation");
            }
    }
}
