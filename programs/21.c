//Program to capitalize first character of each word in a string in C
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize(char *str) {
    int i;
    str[0] = toupper(str[0]);
    for (i = 1; i < strlen(str); i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
}

void main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    capitalize(str);
    printf("Capitalized string: %s\n", str);
}
