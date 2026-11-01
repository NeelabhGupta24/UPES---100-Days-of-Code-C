//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main(){
    float farenheit = 0.0f, celcius = 0.0f; //Storing Variables
    printf("Enter Temperature in Celcius :");
    scanf("%f",&celcius); // Taking input
    farenheit = (celcius*1.8) + 32; //Calculation
    printf("Farenheit = %.0f",farenheit); //Displaying the code
    
    return 0; 
}
