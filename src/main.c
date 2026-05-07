#include <stdio.h>
#include <stdlib.h> // give access to malloc, free, NULL. Understood?

int main(void)
{
    int *state = malloc(2 * sizeof(int));

    if (state == NULL)
    {
        printf("SYSTEM: MEMORY REQUEST DENIED.\n");
        return 1;
    }

    state[0] = 5;
    state[1] = 8;

    printf("FIRST HEAP ADDRESS: %p\n", (void *)&state[0]);
    printf("FIRST HEAP VALUE: %d\n", state[0]);

    printf("SECOND HEAP ADDRESS: %p\n", (void *)&state[1]);
    printf("SECOND HEAP VALUE: %d\n", state[1]);

    printf("SYSTEM: TWO ARE BETTER THAN ONE.\n");

    free(state);

    return 0;
}