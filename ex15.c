#include <stdio.h>


int main(int argc, char *argv[]) {
    /****
    Pointers.
    type *ptr - A pointer of type named ptr.
    *ptr - The value of whatever ptr is pointed at.
    *(ptr + i) - The value of (whatever ptr is pointed at plus i).
    &thing - The address of thing.
    type *ptr - &thing - A pointer of type named ptr set to the address of thing.
    ptr++ - Increment where ptr points.
    ****/


    // Create two arrays we care about
    int ages[] = {23, 43, 12, 80, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // Safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // First way using indexing
    for(i = 0; i < count; i++) {
        printf("%s has %d years alive.\n",
            names[i], ages[i]);
    }
    printf("---\n");

    // Setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;
    // Second way using pointers
    for(i = 0; i < count; i++) {
        printf("%s is %d years old.\n",
            *(cur_name + i), *(cur_age + i));
    }
    printf("---\n");

    // Third way, pointers are just arrays
    for(i = 0; i < count; i++) {
        printf("%s is %d years old again.\n",
            cur_name[i], cur_age[i]);
    }
    printf("---\n");

    // Fourth way with pointers in a stupid complex way
    for(cur_name = names, cur_age = ages;
        (cur_age - ages) < count;
        cur_name++, cur_age++)
    {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }
    printf("---\n");

    // Breaking it.
    cur_age = (int *)names;
    printf("---\n");

    // Second way backwards.
    cur_age = ages;
    cur_name = names;
    for(i = count - 1; i >= 0; i--) {
        printf("%s is %d years old.\n",
            *(cur_name + i), *(cur_age + i));
    }
    printf("---\n");

    // Third way, backwards
    for(i = count - 1; i >= 0; i--) {
        printf("%s is %d years old again.\n",
            cur_name[i], cur_age[i]);
    }
    printf("---\n");

    // Fourth way with pointers in a stupid complex way
    for(cur_name = &names[count - 1], cur_age = &ages[count - 1];
        (cur_age - ages) > 0;
        cur_name--, cur_age--)
    {
        // Memory addresses are addressed in bytes.
        // cur_name decrements by 8 bytes every time.
        // cur_age decrements by 4 bytes every time.
        printf("cur_name: %p cur_age: %p, %s lived %d years so far.\n",
                cur_name, cur_age, *cur_name, *cur_age);
    }
    printf("---\n");

    printf("sizeof(cur_name): %lu\n", sizeof(cur_name));  // 8 ptr
    printf("sizeof(*cur_name): %lu\n", sizeof(*cur_name));  // 8 ptr to a ptr
    printf("sizeof(cur_age): %lu\n", sizeof(cur_age));  // 8 ptr
    printf("sizeof(*cur_age): %lu\n", sizeof(*cur_age));  // 4 int
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("sizeof(char): %lu\n", sizeof(char));
    // cur_name is the address of what we care about.
    // &cur_name is the address of our temp pointer.
    printf("%p %p %p %p", cur_name, &cur_name, cur_age, &cur_age);

    return 0;
}
