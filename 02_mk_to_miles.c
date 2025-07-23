#include <stdio.h>
#include <math.h>

int main () {

float convert, miles, km;

printf("Please enter the number of km:");
    scanf("%f", &km);

convert = 1.609344;
miles = km / convert;

printf("The number of miles are %0.3f", miles);

return 0;
}
