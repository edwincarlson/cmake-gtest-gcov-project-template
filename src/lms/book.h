#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

namespace lms {

    enum Category_E {
        math,
        science,
        animals,
        common,
    };

    class Book {
        public:
            Book();
            Book(string isbn, string title, string author, Category_E category);

            string getISBN();
            string getTitle();
            string getAuthor();

        private:
            string isbn;
            string title;
            string author;
            Category_E category;
    };
}

#endif