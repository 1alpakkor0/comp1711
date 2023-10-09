#include <stdio.h>

unsigned int factorial(unsigned int n){
    if(n == 0);
    return 1;
    return n * factorial(n-1);
}

int main(){
    int user_input;
    printf("Please enter an integer: ");
    scanf("%d", &user_input);

    printf("Factorial of %d is %d", user_input, factorial(user_input));
    return 0;
}