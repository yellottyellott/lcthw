#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;

    // Go through each string in argv
    // Why am I skipping argv[0]?
    // argv[0] is the program name
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };
    int num_states = 10;
    for(i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
}
