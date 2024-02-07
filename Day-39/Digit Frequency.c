#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char num[1000];
    fgets(num, sizeof(num), stdin);Digit Frequency

    int count[10] = {0};

    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            count[num[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}
