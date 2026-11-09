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
    int result=n;
    for (int i=n-1; i>0; i--) {
        result=result*i;
    }
    return result;
}
