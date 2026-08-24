#include <stdio.h>
int main() {
int age;
char name[50];
printf("Enter your age: ");
scanf("%d", &age);
printf("Enter your name: ");
scanf("%s", name);
if (age >= 18) {
printf("Congratulations, %s! You are eligible to vote.\n", name);
}
else{
printf("Sorry, %s. You are not eligible to vote.\n", name);
}
return 0;
}