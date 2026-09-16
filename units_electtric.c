#include <stdio.h>
int main() {
    int units;
    printf("Enter the number of units consumed: \n");
    scanf("%d", &units);
    if (units <= 100) {
        printf("Total bill is Rupees: %.2f\n", units * 5.0);
    } else if (units > 100) {
        if (units <= 200){
            printf("Total bill is Rupees: %.2f\n", (units * 7.0));
        } else if (units > 200){
            printf("Total bill is Rupees: %.2f\n", (units * 10.0));
        }
    }
    else {
        printf("Invalid input. Please enter a proper number of units.\n");
    }
    return 0;
}