#include <stdio.h>

int main(){
    float principal;
    float rate_of_interest;
    float time_period;
    float simple_interest;


    printf("Please enter your principle: ");
    scanf("%f", &principal);

    printf("Please enter your rate of interest: ");
    scanf("%f", &rate_of_interest);

    printf("Please enter your time period: ");
    scanf("%f", &time_period);

    simple_interest = principal * rate_of_interest * time_period;

    printf("Your simple interest is: %f\n", simple_interest);

    return 0;
    
}