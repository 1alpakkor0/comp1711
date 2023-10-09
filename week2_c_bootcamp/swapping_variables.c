// Swap Two Numbers Using a Temporary Variable
#include <stdio.h>

int main(){
    int x, y;

    printf("Please enter value of x: ");
    scanf("%d", &x);

    printf("Please enter value of y: ");
    scanf("%d", &y);

    // Using a temporary variable to swap the values
    // Store the value of x in a temporary variable
    
    int temp = x;

    // Assign the value of y to x
    x = y;

    // Assign the value stored in the temporary variable to y

    y = temp;

    printf("\nAfter swapping x = %d, y = %d", x, y);
    return 0;

}