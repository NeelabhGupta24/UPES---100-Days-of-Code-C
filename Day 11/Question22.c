//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main(){
    double cost,sell = 0;
    printf("Enter cost Price : ");
    scanf("%lf",&cost);
    printf("Enter selling Price : ");
    scanf("%lf",&sell);
    if(sell>cost){
        double profit = ((sell-cost)/cost)*100;
        printf("Profit %.2lf%%\n",profit);
    }
    else if(sell<cost){
        double loss = ((cost-sell)/cost)*100;
        printf("Loss %.2lf%%\n",loss);
    }
    else{
        printf("No profit or loss\n");
    }
    
}