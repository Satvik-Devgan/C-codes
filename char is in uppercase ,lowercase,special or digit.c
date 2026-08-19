#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    printf("enter a character a: ");
    scanf("%c", &a);
    if (isupper(a)) {
        printf("The character is in uppercase.");
    } else if (islower(a)) {
        printf("The character is in lowercase.");
    } else if (isdigit(a)){
        printf("The character is a digit."); 
    } else {
        printf("The character is special."); 
    }
    return 0;
}