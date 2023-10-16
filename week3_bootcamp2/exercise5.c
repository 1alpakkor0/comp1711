//Advanced Menu System
#include <stdio.h>

int main(){
    int a;

    printf("Please select an option between 1 to 5: ");
    scanf("%d", &a);


    if (a < 1 || a > 5)
    {
       printf("Error! Try again: ");
    }

    switch(a)
    {
        case 1:
            printf("Option 1 has been selected\n");
            break;

        case 2:
            printf("Option 2 has been selected\n");
            break;
        
        case 3:
            printf("Option 3 has been selected\n");
            break;

        case 4:
            printf("Option 4 has been selected\n");
            break;

        case 5:
            printf("Option 5 has been selected\n");
            break;

        default:
            printf("A different option has been selected\n");
    }
}