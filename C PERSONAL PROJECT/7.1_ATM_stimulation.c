//This program is an ATM simulation

#include <stdio.h>
#include <math.h>

int main () {

int pin, passcode, request;
float balance, deposit, withdraw;

//WELCOME MESSAGE
printf("Welcome to Bethel Bank. You can only have a minimum balance of 1000");
printf("\n");

//PIN CREATION
printf("Please create a 4 digit pin:");
    scanf("%d", &pin);
printf("\n");
printf("Password created successfully");


balance = 1000;


//ENTER PIN
int pin_attempt;

//LOOP FOR PIN

for (pin_attempt = 1; pin_attempt <=3; pin_attempt++){
    printf("\n");
    printf("Login attempt %d of 3", pin_attempt);
    printf("\nPlease enter your pin:");
        scanf("%d", &passcode);

//CONTROL FOR PIN VERIFICATION
    if (strcmp(&pin, &passcode) == 0) {
        printf("Login successful\n");

        //ATM SERVICE SELECTION
        printf("What do you want to do? Select:\n 1 to check balance \n 2 to deposit \n 3 to withdraw \n 4 to exit\n");
            scanf("%d", &request);

        //CHECK BALANCE
        if (request == 1) {
            printf("Your available balance is %0.2f", balance);
        }


        //DEPOSIT
        else if (request == 2) {
            printf("How much do you want to deposit?");
                scanf("%f", &deposit);
                balance = balance + deposit;
                if (deposit <= 0)
                    printf("Amount too low. Please deposit a higher amount");

                else
                    printf("Deposit successful. Your balance is %0.2f", balance);
        }


        //WITHDRAW
        else if (request == 3) {
            printf("How much do you want to withdraw?");
                scanf("%f", &withdraw);

                balance = balance - withdraw;
            if (balance > withdraw && balance <! 1000) {
                printf("Withdrawal successful. Your new balance is %0.2f", balance);

            }

            else {
                printf("Insufficient funds.");
            }
        }


        //EXIT
        else if (request == 4) {
            return 0;
        }


        //INVALID OPTION
        else {
                printf("Invalid option");
            return 0;
        }

//PASSWORD VERIFICATION FOR INCORRECT PASSWORD
    } else {
        printf("Incorrect password. Please try again");
        printf("\n");

    }
    }

//TOO MANY PIN ATTEMPTS BREAKER
if (pin_attempt > 3) {
        printf("\n");
        printf("Too many trials. LOGIN DENIED!");
        printf("\n");
}
}


