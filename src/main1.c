/*
 * Going to be the same as main.c but now with pointers
 */

#include <stdio.h>

void printWords(char *strings[99][99], int amountOfStrings, char *stringInBetween[99]) {
    for (int i = 0; i < amountOfStrings; i++) {
        printf("%s\n", *strings[i]);
    }
}

int main() {
    const int maxAmountOfStrings = 2;
    const int maxAmountOfCharactersInString = 99;

    char strings[maxAmountOfStrings][maxAmountOfCharactersInString] = {
        "Hello",
        "World"
    };

    char *stringsPtr[maxAmountOfStrings][maxAmountOfCharactersInString];
    
    for (int i = 0; i < maxAmountOfStrings; i++) {
        for (int j = 0; j < maxAmountOfStrings; j++) {
            stringsPtr[i][j] = &strings[i][j];
        }
    }

    char stringInBetween[] = "\n";
    char *stringInBetweenPtr[10];

    for (int i = 0; i < sizeof stringInBetween / sizeof stringInBetween[0]; i++) {
        stringInBetweenPtr[i] = &stringInBetween[i];
    }

    printWords(stringsPtr, maxAmountOfStrings, stringInBetweenPtr);

    return 0;
}
