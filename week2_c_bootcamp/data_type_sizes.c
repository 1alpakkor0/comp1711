#include <stdio.h>

int main(){

    int  int_type;
    float float_type;
    char char_type;
    double double_type;

    printf("Size of int: %zu bytes\n ", sizeof(int_type));
    printf("Size of float: %zu bytes\n ", sizeof(float_type));
    printf("Size of char: %zu bytes\n ", sizeof(char_type));
    printf("Size of double: %zu bytes\n ", sizeof(double_type));

    return 0;
}