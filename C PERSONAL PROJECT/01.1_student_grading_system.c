#include <stdio.h>
#include <math.h>

int main () {

int math, eng, bio, name, average;
printf("This is a program to calculate the average of three subject and display the grade.\n");
printf("");

//Get user input
printf("What is the student's name?J");
    scanf("%s", &name);

printf("What is the student's score in Mathematics?\n");
    scanf("%d", &math);

printf("What is the student's score in English?\n");
    scanf("%d", &eng);

printf("What is the student's score in Biology?\n");
    scanf("%d", &bio);

average = (math + eng + bio)/3;


//Display result to user
printf("The student's name is %s\n", &name);
printf("The student's score in Mathematics is %d\n", math);
printf("The student's score in English is %d\n", eng);
printf("The student's score in Biology is %d\n", bio);
printf("The average of the student's score is %d\n", average);


//if statements for grading
if (average > 70) {
    printf("Excellent! %s's grade is an A!\n", &name);

} else if (average >= 60 && average <70) {
    printf("Very good! %s's grade is a B!\n", &name);

} else if (average >= 50 && average < 60) {
    printf("Good! %s's grade is a C!\n", &name);

}else if (average >= 45 && average < 50) {
    printf("Fair! %s's grade is a D!\n", &name);

}else if (average >= 40 && average < 45) {
    printf("Weak! %s's grade is an E!\n", &name);

}else if (average < 40) {
    printf("Fail! %s's grade is an F!\n", &name);
}

return 0;

}
