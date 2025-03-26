#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    
    if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' ||
        character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        printf("%c is a vowel.\n", character);
    }
   
    else if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        printf("%c is a consonant.\n", character);
    }
    
    else {
        printf("%c is not a letter.\n", character);
    }

    return 0;
}