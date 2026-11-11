#include<stdio.h>
#include<stdlib.h>

void categorize(float BMI);
int main()
{
    float h, w, BMI;
    
    printf("Enter height: ");
    scanf(" %f", &h);
    printf("Enter weight: ");
    scanf(" %f", &w);
    printf("BMI: %.2f\n", BMI=w/(h*h));
    categorize(BMI);
    return 0;
}
void categorize(float BMI) {
     if (BMI>=30.0) {
        printf("Category: Obese");
    }
    else if (BMI>=25.0) {
        printf("Category: Overweight");
    }
    else if (BMI>=18.5) {
        printf("Category: Normal");
    }
    else {printf("Category: Underweight");}
}
