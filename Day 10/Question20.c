//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>
int main (){
    int day_of_week = 0;
    printf("Enter a number to get day of week : ");
    scanf("%d",&day_of_week);
    switch (day_of_week){
        case 1:
            printf("Monday\n");    
            break;
        case 2:
            printf("Tueday\n");    
            break;
        case 3:
            printf("Wednesday\n");    
            break;
        case 4:
            printf("Thursday\n");    
            break;
        case 5:
            printf("Friday\n");    
            break;
        case 6:
            printf("Satday\n");    
            break;
        case 7:
            printf("Sunday\n");    
            break;
        default:
            printf("Please Enter from 1-7 only\n");
            break;
        }
    return 0;
}