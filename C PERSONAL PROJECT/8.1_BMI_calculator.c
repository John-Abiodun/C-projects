//THIS PROGRAM CALCULATES BMI

#include <stdio.h>
#include <math.h>


int main () {

float weight, height, bmi;

printf("Welcome to the BMI calculator");
printf("\n");

printf("Please enter your weight  in kg:\n");
    scanf("%f", &weight);
printf("\n");

printf("Please enter your height in (meters):\n");
    scanf("%f", &height);

bmi = weight/(height * height);

if (bmi < 18.5)
    printf("\nYour BMI is %f which indicated you might be underweight", bmi);


else if (bmi >=  18.5 && bmi <= 24.9)
    printf("\nYour BMI is %f which indicates a a normal weight", bmi);

else if (bmi >= 25 && bmi <= 29.9)
    printf("\nYour BMI is %f which indicates you might be overweight", bmi);

else if (bmi >= 30)
    printf("\nYour BMI is %f which indicates you might be obese", bmi);



return 0;

}
