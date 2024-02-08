#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    
    // Iterate over the array based on gender
    if (gender == 'b') {
        // Sum the marks of boys (alternate elements starting from index 0)
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else if (gender == 'g') {
        // Sum the marks of girls (alternate elements starting from index 1)
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    
    return sum;
}

int main() {
    int number_of_students;
    scanf("%d", &number_of_students);

    int* marks = (int*)malloc(number_of_students * sizeof(int));

    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;
    scanf(" %c", &gender);

    int total_marks = marks_summation(marks, number_of_students, gender);
    printf("%d\n", total_marks);

    free(marks);
    return 0;
}
