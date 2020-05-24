#include "book.h"

lms::Book::Book() : isbn(""), title(""), author(""), category(lms::common) {}

lms::Book::Book(string isbn, string title, string author, Category_E category) : 
    isbn(isbn), title(title), author(author), category(category) {}

string lms::Book::getISBN() {
    return isbn;
}

string lms::Book::getTitle() {
    return title;
}

string lms::Book::getAuthor() {
    return author;
}