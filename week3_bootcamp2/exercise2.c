//Divisible by 4 and 5
#include <stdio.h>

int main(){

    int a;

    printf("Please enter an integer: ");
    scanf("%d", &a);

    if (a % 4 == 0 && a % 5 == 0)
    {
        printf("%d is divisible by both 4 and 5\n", a);
    }

    else
    {
        printf("%d is not divisible by both 4 and 5\n", a);
    }

    return 0;
    

}