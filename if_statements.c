#include <stdio.h>

int main(){
    int a = 0;
    int c = 1;
    if(a == 0){ // == is equality operator, checks if 2 things are equal.
        printf("a is equal to 0\n");
    }
    else{ // If the above is not true
        printf("a is not equal to 0\n");
    }

    if(a != 0){ // != is not equal to
        printf("a is not equal to 0\n");
    }
    else{
        printf("a is equal to 0\n");
    }

    if(a == c){
        printf("a is not equal to c\n");
    }
    else if(a == 0){ // Not checked if the above is true
        printf("a is equal to 0\n");
    }
    // Supported comparisons: ==, >, <, >=, <=, !=

    // Combining Statements,
    if(a != 0 || a == c){ // Or
        printf("a is not equal to zero or a is equal to c");
    }
    if(a == 0 && a != c){ // And
        printf("a is equal to 0 and not equal to c");
    }
    return 0;
}

