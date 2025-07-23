//This program is a multiplication table

#include <stdio.h>
#include <math.h>

int main () {

int number;

printf("Please enter the number to generate multiplication table for:");
    scanf("%d", &number);
    printf("\n");
int multiply;

for (multiply = 1; multiply <= 12; multiply++) {

    printf("%d * %d = %d\n", number, multiply, number * multiply);

}

}
