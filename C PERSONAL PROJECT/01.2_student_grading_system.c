//This is a program to calculate the average of three subject and display the grade.

#include <stdio.h>
#include <math.h>

int main () {

printf("This is a program to calculate the average of three subject and display the grade.\n");

char name[100], subject1[100], subject2[100], subject3[100];
int score1, score2, score3, average;

//Get user input

printf("What is the student's name?");
    scanf("%s", &name);

printf("What is the first subject?");
    scanf("%s", &subject1);

printf("What is the second subject?");
    scanf("%s", &subject2);

printf("What is the third subject?");
    scanf("%s", &subject3);

printf("What is the score for %s?", &subject1);
    scanf("%d", &score1);

printf("What is the score for %s?", &subject2);
    scanf("%d", &score2);

printf("What is the score for %s?", &subject3);
    scanf("%d", &score3);

average = (score1 + score2 + score3)/3;

//Print results
printf("\nThe student's name is %s", &name);
printf("\n");
printf("\nThe first subject is %s", &subject1);
printf("\n");
printf("\nThe second subject is %s", &subject2);
printf("\n");
printf("\nThe third subject is %s", &subject3);
printf("\n");
printf("\nThe average score is %d\n", average);
printf("\n");

//if statements for grading

if (average > 70) {
    printf("Excellent! %s's grade is an A!", &name);


} else if (average >= 60 && average < 70) {
    printf("Very good! %s's grade is a B!", &name);

} else if (average >= 50 && average  < 60){
    printf("Good! %s's grade is a C!", &name);

} else if (average >= 45 && average < 50) {
    printf("Fair! %s's grade is a D!", &name);

} else if (average >= 40 && average < 45) {
    printf("Weak! %s's grade is an E!", &name);

} else if (average < 45) {
    printf("Fail! %s's grade is an F!", &name);
}

return 0;
}
