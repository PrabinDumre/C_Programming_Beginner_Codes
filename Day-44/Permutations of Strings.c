#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to swap two strings
void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse an array of strings from index start to end
void reverse(char **s, int start, int end) {
    while (start < end) {
        swap(&s[start], &s[end]);
        start++;
        end--;
    }
}

// Function to find the next permutation of a string
int next_permutation(int n, char **s) {
    // Find the rightmost character which is smaller than the next character
    int i = n - 2;
    while (i >= 0 && strcmp(s[i], s[i + 1]) >= 0) {
        i--;
    }
    if (i < 0) {
        return 0; // No next permutation possible
    }

    // Find the rightmost character which is greater than s[i]
    int j = n - 1;
    while (strcmp(s[i], s[j]) >= 0) {
        j--;
    }

    // Swap s[i] and s[j]
    swap(&s[i], &s[j]);

    // Reverse the substring s[i+1..n-1]
    reverse(s, i + 1, n - 1);

    return 1; // Next permutation found
}

int main() {
    int n;
    scanf("%d", &n);
    char **s = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        s[i] = (char *)malloc(1024 * sizeof(char)); // Allocate memory for each string
        scanf("%s", s[i]);
    }

    // Print initial permutation
    for (int i = 0; i < n; i++) {
        printf("%s ", s[i]);
    }
    printf("\n");

    // Print permutations
    while (next_permutation(n, s)) {
        // Print only if the current permutation is different from the previous one
        int different = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(s[i], s[i - 1]) != 0) {
                different = 1;
                break;
            }
        }
        if (different) {
            for (int i = 0; i < n; i++) {
                printf("%s ", s[i]);
            }
            printf("\n");
        }
    }

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        free(s[i]); // Free memory for each string
    }
    free(s); // Free memory for array of strings

    return 0;
}
