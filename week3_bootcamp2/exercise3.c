#include <stdio.h>

int main(){
    int a;

    while (a < 0 || a > 100)
    {
        printf("Please enter your score: ");
        scanf("%d", &a);
    }
    

    if(a < 50)
    {
        printf("The mark of %d is: FAILED\n", a);
    }

    else if (a >= 50 && a < 70)
    {
        printf("The mark of %d is: PASSED\n", a);
    }

    else if (a >= 70)
    {
        printf("The mark of %d is: DISTINCTION\n", a);
    }

    return 0;
}