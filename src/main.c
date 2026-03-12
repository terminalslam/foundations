#include <stdio.h>

int main(void) {

    int state = 1;
    int *location = &state;

    printf("SYSTEM: ACCESSING VALUE THROUGH ADDRESS.\n");

    *location = 0;

    printf("UPDATED STATE: &d\n", state);
    
    printf("SYSTEM: FOLLOW HIM.");

    return 0;
}
