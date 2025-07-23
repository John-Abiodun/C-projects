#include <stdio.h>
#include <math.h>

int main () {

float radius, area, circum;

printf("Please enter the radius of the circle:");
    scanf("%f", &radius);

area = 3.14 * pow(radius, 2);
circum = 2 * 3.24 * radius;

printf("The area of the circle is: %0.3f\n", area);
printf("The circumference of the circle is: %0.3f\n", circum);

return 0;
}
