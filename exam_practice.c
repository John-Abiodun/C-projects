#include <stdio.h>
#include <math.h>

int main () {

float rate, principal, time, simple_interest;

printf("What is the principal?");
    scanf("%f", &principal);

printf("What is the rate?");
    scanf("%f", &rate);

printf("What is the time?");
    scanf("%f", &time);

simple_interest = (principal * rate * time)/100;

printf("The simple interest of %.2f at %.2f for %.2f years is %f", principal, rate, time, simple_interest);

return 0;

}
