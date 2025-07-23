//THIS IS A LEAP YEAR CHECKER

#include <stdio.h>
#include <math.h>

int main () {

int year;

printf("LEAP YEAR CHECKER\n");

printf("\n");
printf("Please enter the year:");
    scanf("%d", &year);

if (year % 4 == 0) {
        printf("%d is a leap year\n", year);

} else{
    printf("%d is not a leap year\n", year);
}

return 0;
}


