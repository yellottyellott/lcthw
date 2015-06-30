#include <stdio.h>

int main(int argc, char*argv[]) {
    int numbers[4] = {0};  // With 1 value, everything else is initialized to zero.
    char name[4] = {'a'};

    // First, print them out raw
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    // Setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // Setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';

    // Then print them out initialized
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    // Print the name like a string
    printf("name: %s\n", name);

    // Anotehr way to use name
    char *another = "Zed";

    printf("another: %s\n", another);
    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    int test[] = {};
    printf("%d %d %d %d\n", test[0], test[1], test[2], test[3]);  // Not initialized to 0

    name[3] = 'a';  // Unset the null operator.
    printf("name: %s\n", name);
    char newname[4] = {'a', 'a', 'a', 'a'};
    printf("newname: %s\n", newname);

    return 0;
}
