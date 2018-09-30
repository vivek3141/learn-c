#include <stdio.h>

// Function prototype, define later
int add(int, int); // int is the return type
void printHello(); // void means no return
int main() {
    int sum = add(1, 2);
    static int a = 0; // Add later.
    printf("%d\n", sum);
    printHello();
    return 0;
}

void printHello() {
    printf("Hello!");
}

int add(int num1, int num2) { // must declare types of input variables
    return num1 + num2;
}


