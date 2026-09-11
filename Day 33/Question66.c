//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int elements;
    printf("Enter Number of elements of array : ");
    scanf("%d", &elements);

    int array[elements + 1];

    printf("Enter Elements of the array\n");
    for (int i = 0; i < elements; i++) {
        scanf("%d", &array[i]);
    }

    int input;
    printf("Enter Element to be inserted\n");
    scanf("%d", &input);

    int index = elements;
    for (int i = 0; i < elements; i++) {
        if (array[i] > input) {
            index = i;
            break;
        }
    }

    int temp = elements;
    while (temp > index) {
        array[temp] = array[temp - 1];
        temp--;
    }

    array[index] = input;

    for (int i = 0; i <= elements; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}