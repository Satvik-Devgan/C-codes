#include<stdio.h>
int main(){
    int num;
    printf("Enter a number from 1 , 2 and 3: ");
    scanf("%d",&num);
    if (num==1){
        printf("Stop - Red light");
    }
    else if (num==2){
        printf("Wait - Yellow light");
    }
    else if (num==3){
        printf("Go - Green light");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}