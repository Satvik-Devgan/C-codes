#include <stdio.h>
int main() {
    int a=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%7 == 0){
        printf("A is divisble by 7");
    }
    else{
        printf("A is not divisble by 7");
    }
    return 0;
}