//This is a calculator

//Lib
#include <stdio.h>
#include <math.h>


//main
int main ()
{
    //declaration of data types
    float first_num, second_num, next_num, answer;
    char operand, choice;

    //getting first number
    printf("Please input the first number\n");
        scanf("%f", &first_num);

    //control statements for calculations

    do {

    //operator
    printf("What operation do you want to carry out?? ('+', '-', '/', '*')\n");
        scanf("%s", &operand);

        //addition
    if (operand == '+') {
        printf("What is the next number??\n");
            scanf("%f", &second_num);
        answer = first_num + second_num;
        printf("%.3f + %.3f = %.3f\n", first_num, second_num, answer);
        first_num = answer;
    }

       //subtraction
    else if (operand == '-') {
        printf("What is the second number?\n");
            scanf("%f", &second_num);
        answer = first_num - second_num;
        printf("%.3f - %.3f = %.3f", first_num, second_num, answer);
        first_num = answer;
    }

       //division
    else if (operand == '/') {
        printf("What is the second number?\n");
            scanf("%f", &second_num);
        answer = first_num / second_num;
        printf("%.3f / %.3f = %.3f", first_num, second_num, answer);
        first_num = answer;
    }

       //multiplication
    else if (operand == '*') {
        printf("What is the second number?\n");
            scanf("%f", &second_num);
        answer = first_num * second_num;
        printf("%.3f * %.3f = %.3f", first_num, second_num, answer);
        first_num = answer;
    }

    else {
        printf("Invalid operand. Please choose: \n '+' for addition \n '-' for subtraction \n '/' for division \n '*' for multiplication\n");
    }

    printf("Do you want to carry out another operation?? Y/N");
        scanf(" %c", &choice);

     } while (choice == 'y' || choice == 'Y') ;
     printf("Exiting calculator...\n");
     printf("\n");
     printf(".");
     printf(".");
     printf(".");
     printf("\n");
     printf("Goodbye.");

    return 0;
}
