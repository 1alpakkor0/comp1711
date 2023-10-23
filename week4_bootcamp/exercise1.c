#include <stdio.h>

int main(){
    char *file_name = "squares.dat";
    FILE *file = fopen(file_name, "w");

    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int n;
    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    }

    //Declare a loop variable to iterate from 1 to n
    int i;
    
    //loop through the positive integers from 1 to n 
    for (i = 1; i <= n; i++)
    {
        fprintf(file, "%d\n", i * i);
    }

    fclose(file);
    return 0;
}