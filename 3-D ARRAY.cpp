#include <stdio.h>

int main() {
    // Define and initialize a 3-D array (2x3x4)
    int array_3d[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Print the 3-D array
    printf("3-D Array Elements:\n");
    for (int i = 0; i < 2; i++) {
        printf("Layer %d:\n", i + 1);  // Layers are the first dimension
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%d ", array_3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Access and print a specific element (element at position [1][2][3])
    printf("Element at [1][2][3]: %d\n", array_3d[1][2][3]);

    // Modify an element (element at position [0][1][2])
    array_3d[0][1][2] = 99;
    printf("Modified element at [0][1][2]: %d\n", array_3d[0][1][2]);

    // Print the 3-D array after modification
    printf("\n3-D Array after modification:\n");
    for (int i = 0; i < 2; i++) {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%d ", array_3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
