#include <stdio.h>
#include <stdlib.h> // give access to malloc, free, NULL. Understood?

int main(void)
{
    int *state = malloc(sizeof(int));

    if (state == NULL)
    {
        printf("SYSTEM: MEMORY REQUEST DENIED.\n");
        return 1;
    }

    *state = 5;

    printf("HEAP ADDRESS: %p\n", (void *)state);
    printf("HEAP VALUE: %d\n", *state);

    *state = 8;

    printf("HEAP VALUE UPDATED: %d\n", *state);
    printf("SYSTEM: SPACE WAS GRANTED.\n");

    free(state);

    return 0;
}