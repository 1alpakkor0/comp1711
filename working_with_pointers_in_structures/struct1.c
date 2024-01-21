#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct person
    {
        char *name;
        int *age;

    } my;
    char n[] = "Alp";

    // Allocate storage for the age integer
    my.age = (int *)malloc(sizeof(int) * 1);
    if (my.age == NULL)
    {
        fprintf(stderr, "Allocation Error\n");
        exit(1);
    }

    // Assign value; the asterisk is required, but the standard dot operator is used
    *my.age = 18;

    // Because 'n' is an array and 'my.name' is a pointer, you can just copy the base address again, the dot operator is used.
    my.name = n;

    /* Output results;
    'my.name' is a characater pointer and the asterisk isn't required
    the asterisk is required for 'my.age'  */ 

    printf("%s is %d years old\n", my.name, *my.age);
    return 0;
    
}

