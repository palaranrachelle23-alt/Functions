#include<stdio.h>

int factorial(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int output = factorial(n);
    printf("%d! = %d", n, output);
    return 0;
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}
