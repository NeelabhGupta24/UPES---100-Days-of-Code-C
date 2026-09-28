//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main(){
    int day = 0;
    int month = 0;
    int year = 0;
    char *months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    char newMonth[3];
    printf("Enter date (dd/mm/yyyy)\n");
    if (scanf("%d/%d/%d",&day,&month,&year)==3)
    {
        switch (month){
        case 1:
            strcpy(newMonth,months[0]);
            break;
        case 2:
            strcpy(newMonth,months[1]);
            break;
        case 3:
            strcpy(newMonth,months[2]);
            break;
        case 4:
            strcpy(newMonth,months[3]);
            break;
        case 5:
            strcpy(newMonth,months[4]);
            break;
        case 6:
            strcpy(newMonth,months[5]);
            break;
        case 7:
            strcpy(newMonth,months[6]);
            break;
        case 8:
            strcpy(newMonth,months[7]);
            break;
        case 9:
            strcpy(newMonth,months[8]);
            break;
        case 10:
            strcpy(newMonth,months[9]);
            break;
        case 11:
            strcpy(newMonth,months[10]);
            break;
        case 12:
            strcpy(newMonth,months[11]);
            break;
        default:
            break;
        }
        printf("Formatted date is %d-%s-%d",day,newMonth,year);
    }
    return 0;
}
