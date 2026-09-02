#include<stdio.h>
int main() {
    int num , sum;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(num = 1; num <= n; num++) {
        sum = num*(num+1)/2;
    }
    printf("%d\n", sum) ; 
    return 0;
}