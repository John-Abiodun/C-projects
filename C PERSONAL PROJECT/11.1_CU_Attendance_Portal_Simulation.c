//This is a simulation of Covenant University's lecture attendance portal

#include <stdio.h>
#include <math.h>


int main () {
//DATA TYPES DECLARATION
int student_id, rand_num;
char first_name, last_name, username, password, create_username, create_password, letter;

//GET USER DETAILS
printf("Please enter your first name: \n");
    scanf("%s", &first_name);

printf("Please enter your last name: \n");
    scanf("%s", &last_name);

printf("Please create a password: \n");
    scanf("%s", &create_password);

//SYSTEM GENERATION OF DETAILS
rand_num = rand(1, 9999);
printf("rand is", rand_num);

//DISPLAY ACCOUNT DETAILS
printf("Account creation successful. Your login details are:\n %s \n Student id: %d \n Password: Your chosen password", username, student_id);




}
