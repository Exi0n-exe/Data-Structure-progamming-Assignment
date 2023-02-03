//C Program to calculate the Frequency of characters in a string
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 

void calculateFrequency(char *str) 
{
    int count[26] = {0};
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            count[str[i] - 'A']++;
        }
    }

    printf("Character Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("%c: %d\n", i + 'a', count[i]);
        }
    }
}

void main() 
{
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    calculateFrequency(str);

}
