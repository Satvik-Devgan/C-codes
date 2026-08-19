#include <stdio.h>
int main() {
    int a=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a>0)
        printf("A is Positive number ");
    else if(a<0)
        printf("A is Negative number ");
    else
        printf("A is Zero number ");
    return 0;
}