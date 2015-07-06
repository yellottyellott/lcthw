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
        "Washington", "Texas",
        NULL, NULL, "Louisiana"
    };

    // String pointers must be 8 bytes, 64 bits on my laptop.
    printf("sizeof states: %lu\n", sizeof(states));
    printf("sizeof states[0]: %lu\n", sizeof(states[0]));
    printf("len states: %lu\n", sizeof(states)/sizeof(states[0]));

    // How do we find the size of an array of strings?
    int num_states = sizeof(states)/sizeof(states[0]);
    for(i = 0; i < num_states; i++, num_states=7) {
        printf("state %d: %s\n", i, states[i]);
    }
}
