#include <stdio.h>

int main(){
    float length;
    float width;
    float area;

    printf("Please enter lenght of the rectangle: ");
    scanf("%f", &length);

    printf("\nPlease enter width of the rectangle: ");
    scanf("%f", &width);

    area = width * length;

    printf("The area is: %g\n", area);
    return 0;


}