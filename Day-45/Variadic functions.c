#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000

int sum(int count, ...) {
    va_list args;
    int total = 0;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}

int min(int count, ...) {
    va_list args;
    va_start(args, count);
    int min_value = MAX_ELEMENT;
    for (int i = 0; i < count; i++) {
        int current = va_arg(args, int);
        if (current < min_value) {
            min_value = current;
        }
    }
    va_end(args);
    return min_value;
}

int max(int count, ...) {
    va_list args;
    va_start(args, count);
    int max_value = MIN_ELEMENT;
    for (int i = 0; i < count; i++) {
        int current = va_arg(args, int);
        if (current > max_value) {
            max_value = current;
        }
    }
    va_end(args);
    return max_value;
}

int test_implementations_by_sending_three_elements() {
    srand(time(NULL));
    int elements[3], sum_val, min_val, max_val;
    for (int i = 0; i < 3; i++) {
        elements[i] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    }

    sum_val = sum(3, elements[0], elements[1], elements[2]);
    min_val = min(3, elements[0], elements[1], elements[2]);
    max_val = max(3, elements[0], elements[1], elements[2]);

    printf("sum: %d, min: %d, max: %d\n", sum_val, min_val, max_val);

    if (sum_val == elements[0] + elements[1] + elements[2] &&
        min_val == (elements[0] < elements[1] ? (elements[0] < elements[2] ? elements[0] : elements[2]) : (elements[1] < elements[2] ? elements[1] : elements[2])) &&
        max_val == (elements[0] > elements[1] ? (elements[0] > elements[2] ? elements[0] : elements[2]) : (elements[1] > elements[2] ? elements[1] : elements[2]))) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (test_implementations_by_sending_three_elements()) {
            printf("Correct Answer\n");
            printf("Correct Answer\n");
            printf("Correct Answer\n");
        } else {
            printf("Wrong Answer\n");
            printf("Wrong Answer\n");
            printf("Wrong Answer\n");
        }
    }

    return 0;
}
