#include<stdio.h>

float BMI(float w, float h);
void category(float BMI);
int main()
{
    float output = BMI(65.0, 1.7);
    printf("BMI: %.2f\n", output);

    category(output);
    return 0;
}
float BMI(float w, float h) {
    float result=w/(h*h);
    return result;
}
void category(float BMI) {
    if (BMI>=30.0) {
        printf("Category: Obese");
    }
    else if (BMI>=25.0) {
        printf("Category: Overweight");
    }
    else if (BMI>=18.5) {
        printf("Category: Normal");
    }
    else {
        printf("Category: Underweight");
    }
}
