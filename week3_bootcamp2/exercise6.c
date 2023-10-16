//Input Validation Loop with Termination Value
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number between 0 and 100, or -1 to exit: ");
    scanf("%d", &num);

    while (num != -1)
    {
        if (num >= 0 && num <= 100)
        {
            printf("The number is valid.\n");
        }
        else
        {
            printf("The number is invalid.\n");
        }
        printf("Enter another number, or -1 to exit: ");
        scanf("%d", &num);
    }

    printf("The program has ended.\n"); // print a message when the loop ends
    return 0;
}