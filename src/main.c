#include <stdio.h>

int main(void) {
    int state = 1;
    printf("SYSTEM STATUS: %d\n", state);
    state = state -1 ;
    printf("SYSTEM STATUS UPDATED: %d\n", state);
    return 0;
}
