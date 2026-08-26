#include<stdio.h>
int main() {
    int num;
    for(num=1;num <= 10; num++){
        if(num %2 ==1)
            printf("Odd number is %d\n",num);
    }
}