#include<stdio.h>

float BMI(float w, float h);
void category(float bmi);

int main()
{
    float output = BMI(65.0, 1.7);
    printf("BMI: %.2f\n", output);

    category(output);
    return 0;
}

float BMI(float w, float h) {
    float result = w / (h * h);
    return result;
}

void category(float bmi) {
    if (bmi >= 30.0) {
        printf("Category: Obese\n");
    }
    else if (bmi >= 25.0) {
        printf("Category: Overweight\n");
    }
    else if (bmi >= 18.5) {
        printf("Category: Normal\n");
    }
    else {
        printf("Category: Underweight\n");
    }
}
