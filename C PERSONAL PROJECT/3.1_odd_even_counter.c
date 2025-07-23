//This code checks if a user's input is an odd or even number
#include <stdio.h>
#include <math.h>

int main () {

int number, mod;
printf("This program checks if a number is an odd number or an even number\n");
printf("\n");

printf("Please input a number:");
    scanf("%d", &number);
printf("\n");

//modulus
mod = number % 2;

//odd/even checker
if (mod == 0)
    printf("%d is an EVEN number", number);

else
    printf("%d is an ODD number", number);
    printf("\n");

}
