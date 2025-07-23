//Simple calculator. Rounds up to 5 decimal places

#include <stdio.h>
#include <math.h>

int main () {

printf("Welcome to your simple calculator. This calculator rounds up to 5 decimal places\n");

char operate;
int number1, number2, addition, subtract, divide, multiply;

//ask user for input
printf("Please enter the first number:");
    scanf("%d", &number1);

printf("\nPlease choose an operator (+, -, /, *)");
    scanf("%s", &operate);

//if statement for operators
    if (operate == '+') {
        printf("\nPlease enter second number:");
            scanf("%d", &number2);
        addition = number1 + number2;
        printf("\nYour first number is %d", number1);
        printf("\nYour second number is %d", number2);
        printf("\n%d + %d = %d", number1, number2, addition);
        printf("\n");
    } else if (operate == '-') {
        printf("\nPlease enter second number:");
            scanf("%d", &number2);
        subtract = number1 - number2;
        printf("\nYour first number is %d", number1);
        printf("\nYour second number is %d", number2);
        printf("\n%d - %d = %d", number1, number2, subtract);
        printf("\n");
    } else if (operate == '/') {
        printf("\nPlease enter second number:");
            scanf("%d", &number2);
        divide = number1 / number2;
        printf("\nYour first number is %d", number1);
        printf("\nYour second number is %d", number2);
        printf("\n%d / %d = %d", number1, number2, divide);
        printf("\n");
    } else if (operate == '*') {
        printf("\nPlease enter second number:");
            scanf("%d", &number2);
        multiply = number1 * number2;
        printf("\nYour first number is %d", number1);
        printf("\nYour second number is %d", number2);
        printf("\n%d * %d = %d", number1, number2, multiply);
        printf("\n");
    } else {
        printf("\nInvalid operator! Please choose between '+' for addition, '-' for subtraction, '/' for division or '*' for multiplication");
    }

return 0;
}
