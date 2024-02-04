#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    // Reverse the array
    int temp;
    for(i = 0; i < num / 2; i++) {
        temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }

    // Print the reversed array
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    free(arr); // Don't forget to free the allocated memory
    return 0;
}
