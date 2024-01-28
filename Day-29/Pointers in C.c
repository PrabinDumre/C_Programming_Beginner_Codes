#include <stdio.h>

void update(int *a, int *b) {
    // Complete this function
    int tempA = *a; // Store the original value of a

    // Update the values of a and b
    *a = *a + *b;
    *b = tempA - *b > 0 ? tempA - *b : *b - tempA; // Absolute difference
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
