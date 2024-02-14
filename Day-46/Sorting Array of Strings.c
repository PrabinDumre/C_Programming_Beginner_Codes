#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int count_distinct_characters(const char* str) {
    int count[26] = {0};
    int distinct = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i] - 'a'] == 0) {
            count[str[i] - 'a'] = 1;
            distinct++;
        }
    }
    return distinct;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int distinct_a = count_distinct_characters(a);
    int distinct_b = count_distinct_characters(b);
    if (distinct_a != distinct_b) {
        return distinct_a - distinct_b;
    } else {
        return strcmp(a, b);
    }
}

int sort_by_length(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    if (len_a != len_b) {
        return len_a - len_b;
    } else {
        return strcmp(a, b);
    }
}

void string_sort(const char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) {
    // Sort the array using the provided comparison function
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if ((*cmp_func)(arr[j], arr[j + 1]) > 0) {
                const char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const char* arr[] = {"wkue", "qoi", "sbv", "fekls"};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Sort and print using lexicographic_sort
    string_sort(arr, len, lexicographic_sort);
    for (int i = 0; i < len; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");

    // Sort and print using lexicographic_sort_reverse
    string_sort(arr, len, lexicographic_sort_reverse);
    for (int i = 0; i < len; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");

    // Sort and print using sort_by_number_of_distinct_characters
    string_sort(arr, len, sort_by_number_of_distinct_characters);
    for (int i = 0; i < len; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");

    // Sort and print using sort_by_length
    string_sort(arr, len, sort_by_length);
    for (int i = 0; i < len; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");

    return 0;
}
