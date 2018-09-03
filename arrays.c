#include <stdio.h>

int main(){
    // Array stores many variables together
    int array[3]; // Array of 3 elements, indexed 0 to 2
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;

    // Can also define like this
    int arr[3] = {0, 1, 2};

    // Arrays can be of any type
    char character[2][2];

    // 2 Dimensional Arrays - like a grid
    int two_d_arr[1][2]; // 1x2 array
    two_d_arr[0][1] = 3;

    // Can also do this
    int darr[2][2] = {{1,2}, {3,4}}; // 2x2 Array

    // Or this if no specification is needed
    int array_multi[2][2] = {1,2,3,4};

    // Can have as many dimensions
    int multi_d_array[2][2][3];

    return 0;
}

