#include <stdio.h>

int main() {
    char input;
    
    printf("Enter a character: ");
    scanf(" %c", &input);

    if (input >= 'A' && input <= 'Z') {
        printf("This is Uppercase character\n");
    } else if (input >= 'a' && input <= 'z') {
        printf("This is Lowercase character\n");
    } else if (input >= '0' && input <= '9') {
        printf("This is Number\n");
    } else {
        printf("This is Special character\n");
    }

    return 0;
}

