// F11X Tutorial 07 - part3_struct_book.c
//
// This program demonstrates how to use pointers and structs

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[100];
    char author[100];
    int year;
};

void modify_book(struct book *book);
struct book modify_book_return(struct book book);

int main(void) {
    struct book book;

    strcpy(book.title, "To Kill a Mockingbird");
    strcpy(book.author, "Harper Lee");
    book.year = 1960;

    printf("Before modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    // Using return value
    // book = modify_book_return(book);

    // Alternatively use pointer
    modify_book(&book);

    printf("After modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    return 0;
}

void modify_book(struct book *book) {
    book->year = 1925;
    strcpy(book->title, "The Great Gatsby");
    strcpy(book->author, "F. Scott Fitzgerald");
}

struct book modify_book_return(struct book book) {
    book.year = 1925;
    strcpy(book.title, "The Great Gatsby");
    strcpy(book.author, "F. Scott Fitzgerald");
    return book;
}
