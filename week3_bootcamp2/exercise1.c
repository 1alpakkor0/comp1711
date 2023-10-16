#include <stdio.h>

int main(){
    int a;
    
    printf("Please enter an integer: ");
    scanf("%d", &a);

    if(a == 0)
    {
        printf("The integer is zero\n");

    }

    else if (a < 0)
    {
        printf("The integer is negative\n");
    }

    else if (a > 0)
    {
        printf("The integer is positive\n");
    }

    return 0;


}