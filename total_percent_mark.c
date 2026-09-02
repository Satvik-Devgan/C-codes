#include <stdio.h>
int main() {
    int mark[3], total=0, percent;
    printf("Enter marks for all 3 subjects: ");
    for(int i = 0; i < 3; i++) {
        scanf("%d", &mark[i]);
        total += mark[i];
    }
    percent = (total*100)/300;
    printf("Total: %d\n", total);
    printf("Percentage: %d\n", percent);
    if (percent >=50 && percent < 60) {
        printf("Divison II\n");
    } else if (percent >= 60 && percent < 75) {
        printf("Divison I\n");
    }
    else if (percent >= 75 && percent <= 100) {
        printf("Distinction\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}