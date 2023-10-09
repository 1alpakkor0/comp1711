#include <stdio.h>

int main(){
    int user_input;

    printf("Please enter an integer: ");
    scanf("%d", &user_input);

    if(user_input % 2 == 0){
        printf("Even");
    }

    else{
        printf("Odd");
    }
    return 0;
}