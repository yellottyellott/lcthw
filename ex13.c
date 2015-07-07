#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        return 1;  // This is how you abort a program
    }

    printf("a: %d z: %d A: %d Z: %d\n", 'a', 'z', 'A', 'Z');

    int i;
    char letter;
    for(i = 0; letter = argv[1][i], argv[1][i] != '\0'; i++) {
        if(letter >= 'A' && letter <= 'Z') {
            letter = letter + ('a' - 'A');
        }

        switch(letter) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%d: %c vowel\n", i, letter);
                break;
            case 'y':
                if(i > 2) {
                    printf("%d: %c vowel\n", i, letter);  // Only sometimes Y
                }
                break;
            default:
                printf("%d: %c consonant\n", i, letter);
        }
    }

    return 0;
}
