#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    if (n == 1) return a; // Base case: if n is 1, return the first term
    if (n == 2) return b; // Base case: if n is 2, return the second term
    if (n == 3) return c; // Base case: if n is 3, return the third term

    // Recursive case: calculate the nth term using the previous three terms
    return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
