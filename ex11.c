#include <stdio.h>

int main(int argc, char *argv[]) {
    // Go through each string in argv
    int i = argc;
    while(i > 0) {
        printf("arg %d: %s\n", argc - i, argv[argc - i]);
        i--;
    }

    // Let's make or own array of strings
    char *states[] = {
        "California", "Oregon", "Washington", "Texas",
    };

    int num_states = 4;
    i = 0;  // Watch for this
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    char *copy[argc];
    for(i = 0; i < argc; i++) {
        copy[i] = argv[i];
        printf("copy %d: %s\n", i, copy[i]);
    }

    return 0;
}
