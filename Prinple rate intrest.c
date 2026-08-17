#include<stdio.h>

int main(){
    int P,R,I;
    printf("Enter principle intrest: ");
    scanf("%d", &P);
    if(P<0){
        printf("Principle intrest cannot be negative\n");
        return 1;
    }
    printf("Enter rate of time: ");
    scanf("%d" , &R);
    if(R<0){
        printf("Rate of time cannot be negative\n");
        return 1;
    }
    printf("Enter Time in years: ");
    scanf("%d",&I);
    if(I<0){
        printf("Time in years cannot be negative\n");
        return 1;
    }
    printf("Principal Intrest is %d\n", P);
    printf("Rate of Intrest is %d\n", R);
    printf("Time in years is %d\n", I);
    printf("Total Intrest is %d\n", (P*R*I)/100);
    return 0;
}

