#include <stdio.h>

int main(){
    int a;
    printf("Please enter a degree in Celsius: ");
    scanf("%d", &a);

    if (a >= -10 && a <= 40)
    {
        printf("%d is within the range\n", a);
    }

    else
    {
        printf("%d is not within the range\n", a);
    }

    return 0;
}