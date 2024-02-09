#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main() {
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    // Allocate memory for total_number_of_books array
    total_number_of_books = (int*)malloc(total_number_of_shelves * sizeof(int));
    
    // Allocate memory for total_number_of_pages array
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));
    
    // Initialize total_number_of_books and total_number_of_pages arrays
    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_books[i] = 0;
        total_number_of_pages[i] = NULL;
    }
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            
            // Increase the number of books on shelf x
            total_number_of_books[x]++;
            
            // Reallocate memory to store the new book's page count
            total_number_of_pages[x] = (int*)realloc(total_number_of_pages[x], total_number_of_books[x] * sizeof(int));
            
            // Store the number of pages for the new book
            total_number_of_pages[x][total_number_of_books[x] - 1] = y;

        } else if (type_of_query == 2) {
