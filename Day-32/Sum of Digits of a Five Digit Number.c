#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);

    // Extracting each digit and calculating the sum
    int sum = 0;
    int digit;
    
    // Loop to extract each digit
    for (int i = 0; i < 5; i++) {
        digit = n % 10;    // Extract the last digit
        sum += digit;       // Add the digit to the sum
        n = n / 10;         // Remove the last digit
    }

    // Print the sum of the digits
    printf("%d\n", sum);

    return 0;
}
