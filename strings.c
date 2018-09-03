#include <stdio.h>
#include <string.h> // Contains required functions

int main(){
    // Strings are arrays of characters
    char * str = "Hello!"; // * explained later on. Can't manipulate this. Eg. can't do str[0];
    char string[6] = "Hello!"; // Creates a array of characters.
    char string_no_num[] = "Hello!"; // Same as the top
    // Printing out strings
    printf("The variable str contains %s\n", str);
    printf("Length of str is: %li\n", strlen(str)); // strlen() gives length of string.
    printf("str + string: %s\n", strncat(str, string, 12));
    /* strncat() joins 2 strings. Number at the end is for max number of appended characters. */
    if (strncmp(string, string_no_num, 6) == 0){ // Number at end is for how many characters to compare.
        printf("They are the same"); // Outputs 0 if they are the same, 1 if not.
    }
    else{
        printf("They are not the same");
    }

    return 0;
}

