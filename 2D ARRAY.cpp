#include <stdio.h>

int main() {
    // Define and initialize a 2-D array (3x3 matrix)
    int array_2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the 2-D array (matrix format)
    printf("2-D Array (Matrix):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array_2d[i][j]);
        }
        printf("\n");
    }

    // Access and print a specific element (for example, element at position [1][1])
    printf("Element at [1][1]: %d\n", array_2d[1][1]);

    // Modify an element (for example, element at position [0][2])
    array_2d[0][2] = 10;
    printf("Modified element at [0][2]: %d\n", array_2d[0][2]);

    // Print the 2-D array after modification
    printf("\n2-D Array after modification:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array_2d[i][j]);
        }
        printf("\n");
    }

    return 0;
}
