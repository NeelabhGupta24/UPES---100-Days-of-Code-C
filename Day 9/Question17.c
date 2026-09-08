//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,first_root,second_root = 0;
    printf("Enter a, b, c in order : ");
    scanf("%lf%lf%lf",&a,&b,&c);
    double D = pow(b,2) - (4*a*c);
    if (D>=0){
        double first_root = (-b + pow(D,1.0/2))/(2*a);
        double second_root = (-b - pow(D,1.0/2))/(2*a);
        if(first_root==second_root){
            printf("Real and same roots, %.2lf\n",first_root);
        }
        else{
            printf("Real and different roots, %.2lf %.2lf\n",first_root,second_root);
        }
    }
    else{
        printf("Unreal roots\n");
    }
    return 0;
}