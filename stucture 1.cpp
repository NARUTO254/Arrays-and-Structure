#include <stdio.h>
#include <string.h>

// Define the structure named 'book'
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[30];
    float price;
};

int main() {
    // Declare and initialize a variable of type 'book'
    struct book my_book;

    // Initialize the fields with the provided data
    strcpy(my_book.title, "Introduction to C Programming");
    strcpy(my_book.author, "John Smith");
    my_book.publication_year = 2022;
    strcpy(my_book.ISBN, "978013110327");
    my_book.price = 49.99;

    // Print the values of the fields
    printf("Book Details:\n");
    printf("Title: %s\n", my_book.title);
    printf("Author: %s\n", my_book.author);
    printf("Publication Year: %d\n", my_book.publication_year);
    printf("ISBN: %s\n", my_book.ISBN);
    printf("Price: $%.2f\n", my_book.price);

    return 0;
}
