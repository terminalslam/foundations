#include <stdio.h>

int main(void) {

    int state = 1;
    int *location = &state;

    printf("SYSTEM: INITIATING POINTER.\n");

    printf("MEMORY ADDRESS: %p\n", (void *)location);
    printf("VALUE DRAWN FROM ADDRESS: %d\n", *location);

    printf("SYSTEM: SEEK AND YOU SHALL FIND.\n");

    return 0;
}
