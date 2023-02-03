//C Program for removing Whitespaces in a String
#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) 
{
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

void main() 
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    removeSpaces(str);

    printf("String after removing spaces: %s\n", str);
}
