#include <stdio.h>
#include <stdlib.h>

int main(){

    char *file_name = "squares.dat";
    FILE *file = fopen(file_name, "r");

    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    double sum = 0;
    int count = 0;
    int num;
    double average;

    //loop through the file until the end of the file is reached

    while (fscanf(file, "%d", &num) == 1)
    {
        //Add the number to the sum
        sum += num;
        //Increment the count
        count ++;
    }

    if (count == 0)
    {
        printf("The file squares.dat is empty.\n");
        return 2;
    }

    average = sum / count;

    printf("The average of all numbers in the file squares.dat is %2f.\n", average);

    fclose(file);
    return 0;
}