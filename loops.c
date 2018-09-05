#include <stdio.h>

int main(){
    int i = 0;
    for(i = 0; i < 10; i++){ // Initial value 0, until i is not less than 10, increment by 1
        printf("%d", i);
        printf(" ");
    }
    printf("\n");

    int k = 0;
    while(k < 10){ // Do while the condition is satisfied. If the condition is not, break. Check the condition then do the loop.
        printf("%d", k);
        printf(" ");
        k++;
    }
    printf("\n");

    int z = 10;
    do { // First do the loop, then check the condition. In this case the loop is executed once, even though the condition is false.
        printf("%d", z);
        z++;
    }
    while(z > 100); // If this was a while loop, printf(z) would never have run.
    // Can also have a break; statement to exit the loop or a continue; statement to go to the top of the loop.
    return 0;
}

