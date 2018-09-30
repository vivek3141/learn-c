#include <stdio.h>

int main(){
    int number; // No value set
    int num = 0; // 2 or 4 bytes
    printf("Size of int: %ld\n", sizeof(int)); // sizeof() outputs storage size for the object in bytes. Outputs 4
    char h = 'h'; // 1 byte '' is for character
    short n = 0; // 2 bytes
    long l = 0; // 8 bytes

    float f = 0.4f; // 4 bytes
    double d = 0.1f; // 8 bytes
    long double ld = 0.22f; //10 bytes

    // No boolean, can use 1 or 0 instead

    return 0;
}
