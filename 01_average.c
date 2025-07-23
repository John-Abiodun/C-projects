#include <stdio.h>
#include <math.h>

int main () {

int first_num, second_num, average;

//Program Details
printf("This program calculates the average of two numbers\n");
printf("");

//Get numbers from users

printf("Please enter first number:");
    scanf("%d", &first_num);

printf("Please senter the second number:");
    scanf("%d", &second_num);

average = (first_num + second_num)/2;

printf("The average of the two numbers is: %0.3d\n", average);

return 0;
}
