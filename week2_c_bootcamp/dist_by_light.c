#include <stdio.h>

int main(){
    float user_input;
    long long int light_speed = (1080000000);
    long long int distance;

    printf("Please enter number of days: ");
    scanf("%f", &user_input);

    distance = 24 * user_input * light_speed;

    printf("The distance travelled by light in a given number of days is: %lld km", distance);
    return 0;
}