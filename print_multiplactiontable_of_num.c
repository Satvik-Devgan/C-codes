#include<stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for(int i=1;i <= 10; i++){
            int multi = num*i;
            printf("%d multiplied by %d is %d\n",i,num,multi);
    }
}