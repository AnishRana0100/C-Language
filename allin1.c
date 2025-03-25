#include <stdio.h>

int main() {
    for (int i = 0; i < 15; i++) {           // Loop from 0 to 14
        if (i == 5) {                        // Stop loop when i equals 5
            break;
        }
        printf("i is %d\n", i);              // Print the current value of `i`
    }

    printf("For loop is done!\n");           // Print this after exiting the loop
    return 0;                                // Return 0 indicating successful execution
}