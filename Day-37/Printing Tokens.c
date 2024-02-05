
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    // Tokenizing the sentence and printing each word on a new line
    for (char *token = strtok(s, " "); token != NULL; token = strtok(NULL, " ")) {
        printf("%s\n", token);
    }

    free(s);
    return 0;
}
