//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main(){
    int time_input;
    printf("Enter time in seconds :");
    scanf("%d",&time_input);
    int hours = time_input/3600;
    int minutes = (time_input - hours*3600)/60;
    int seconds = time_input - ((minutes*60) + (hours*3600));
    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}