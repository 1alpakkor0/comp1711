#include <stdio.h>

int main(){
    int a, b, c;

    printf("Please enter an integer: ");
    scanf("%d", &a);

    printf("Please enter an integer: ");
    scanf("%d", &b);

    c = a + b;

    printf("The sum of %d and %d is: %d\n", a, b, c);

    return 0;
}