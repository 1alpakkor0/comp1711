#include <stdio.h>

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }

}



int main(){
    int user_input;
    printf("Please enter an integer: ");
    scanf("%d", &user_input);

    if (user_input < 0){
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    else{
         printf("Factorial of %d is %d", user_input, factorial(user_input));
         return 0;
        

    }

}
