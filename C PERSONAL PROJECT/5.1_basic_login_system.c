//This program is a basic login system

#include <stdio.h>

int main () {

char name[100], username[100], passcode[100], password[100];

printf("Welcome...\n");
printf("Please create a new username:");
    scanf("%s", name);
printf("Please create a new password:");
    scanf("%s", passcode);

int attempt;

for (attempt = 1; attempt <= 3; attempt++) {
    printf("\n");
    printf("Login attempt %d of 3", attempt);
    printf("\nPlease enter your username:");
        scanf("%s", username);

        if (strcmp(name, username) == 0) {
            printf("Username correct");

            printf("\nPlease enter your password:");
                scanf("%s", password);

            if (strcmp(passcode, password) == 0) {
                printf("\nPassword correct. Login successful");
                break;

            } else {
                printf("\nPassword incorrect. ACCESS DENIED!");
                printf("\n");
            }

        } else {
            printf("Username incorrect. ACCESS DENIED");
            printf("\n");
}
}

}

