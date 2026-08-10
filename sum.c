#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("You entered: %d and %d", a, b);
    int sum;
    sum = a + b;
    printf("\nSum is: %d", sum);
    return 0;   
}