#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle {
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

double calculate_area(int a, int b, int c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int compare(const void* a, const void* b) {
    triangle* tr1 = (triangle*)a;
    triangle* tr2 = (triangle*)b;
    double area1 = calculate_area(tr1->a, tr1->b, tr1->c);
    double area2 = calculate_area(tr2->a, tr2->b, tr2->c);
    if (area1 < area2) return -1;
    else if (area1 > area2) return 1;
    else return 0;
}

void sort_by_area(triangle* tr, int n) {
    qsort(tr, n, sizeof(triangle), compare);
}

int main() {
    int n;
    scanf("%d", &n);
    triangle* tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    free(tr);
    return 0;
}
