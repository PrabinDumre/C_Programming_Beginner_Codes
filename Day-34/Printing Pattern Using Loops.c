#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    // Calculate the size of the matrix
    int size = 2 * n - 1;

    // Loop to iterate through each row
    for (int i = 0; i < size; i++) {
        // Loop to iterate through each column
        for (int j = 0; j < size; j++) {
            // Find the minimum distance from the current cell to the boundary
            int minDistance = fmin(fmin(i, size - 1 - i), fmin(j, size - 1 - j));
            
            // Print the value based on the distance from the boundary
            printf("%d ", n - minDistance);
        }
        printf("\n");
    }

    return 0;
}
