// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main(){
    int sides[3];
    printf("Enter sides of triangle : ");
    scanf("%d%d%d",&sides[0],&sides[1],&sides[2]);
    /*if(sides[0]==sides[1]){
        if(sides[1]==sides[2]){
            printf("Equilateral\n");
        }
        else{
            printf("Isoscles\n");
        }
    }
    else if(sides[1]==sides[2]){
        if(sides[1]==sides[0]){
            printf("Equilateral\n");
        }
        else{
            printf("Isoscles\n");
        }
    }
    else if(sides[0]==sides[2]){
        if(sides[1]==sides[2]){
            printf("Equilateral\n");
        }
        else{
            printf("Isoscles\n");
        }
    }
    else{
        printf("Scalene\n");
    }*/

    if (sides[0]==sides[1] && sides[1]==sides[2]){
        printf("Equilateral\n");
    }
    else if (sides[0]==sides[2] || sides[0]==sides[1] || sides[1]==sides[2]){
        printf("Isoscles\n");
    }
    else{
        printf("Scalene\n");
    }
    
    
    return 0;
}