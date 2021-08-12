#include <stdio.h>

void printWords(char strings[99][99], int amountOfStrings, char stringInBetween[10]) {
    for (int i = 0; i < amountOfStrings; i++) {
        printf("%s", strings[i]);
        printf("%s", stringInBetween);
    }
}

int main() {
    char strings[4][99] = {
        "Hello",
        "World",
        "This is programming",
        "Hi there"
    };

    char stringInBetween[2] = "\n";
    int amountOfStrings = sizeof strings / sizeof strings[0];
    printWords(strings, amountOfStrings, stringInBetween);
    return 0;
}
