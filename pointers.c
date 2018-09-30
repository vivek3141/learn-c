#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void modify(char *string);

int main() {
    //first, let's take a look at the behavior of a simple variable with the operators * and &
    int x; //declaration
    x = 4; //initialization, aka, putting 4 inside x, or assigning x to 4, or setting x's content as 4

    printf("Content in x: %d\n", x);
    printf("Address of x: %ld\n", (long) (&x));
    printf("Content in x: %d\n", *(&x));

    printf("(Address of x) + (1 * 4) bytes (size of an int in memory): %ld\n", (long) ((&x) + 1));
    //^^^ when you set up the variable as type int adding 1 to its address will add
    // actually 4 bytes behind the scenes, because that's the size of an int in computer memory.
    printf("Content in ((address of x) + 4 bytes): %d //garbage value\n", *(&x + 1));

    int *pointer_to_x;
    pointer_to_x = &x;

    printf("Content in x / content of the variable pointed by pointer_to_x: %d \n", *(pointer_to_x));
    printf("Address of pointer_to_x: %ld\n", (long) (pointer_to_x));

    printf("\n\n");


    char **array = malloc(sizeof(char *) * 10);
    int index = 0;
    int index_string;

    while (index < 10) {
        index_string = 0;
        array[index] = malloc(sizeof(char) * 10);
        while (index_string < 10) {
            array[index][index_string] = (char) (index_string + 48);
            index_string++;
        }
        modify(array[index]);
        printf("%s\n", array[index]);
        index++;
    }

    return 0;
}

void modify(char *string) {
    int index = 0;
    char c = 'a';
    while (index < 10) {
        string[index] = (char) (c + index);
        index++;
    }
}