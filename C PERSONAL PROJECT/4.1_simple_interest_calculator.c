//This program calculates simple interest

#include <stdio.h>
#include <math.h>

int main () {

int principal, rate, time, interest;

printf("Please enter the principal amount:");
    scanf("%d", &principal);

printf("Please enter the rate:");
    scanf("%d", &rate);

printf("Please enter the time:");
    scanf("%d", &time);

interest = (principal * rate * time)/100;

printf("The interest on %d at %d for %d years is %d", principal, rate, time, interest);
}
