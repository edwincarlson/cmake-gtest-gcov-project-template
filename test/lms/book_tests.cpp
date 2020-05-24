#include <book.h>
#include "gtest/gtest.h"

using namespace std;

class BookTest : public ::testing::Test {
    protected:
        virtual void SetUp() override {
            book1 = lms::Book();
            book2 = lms::Book("1234", "Math101", "Jim Bob", lms::math);
            book3 = lms::Book(expWeirdChars, expWeirdChars, expWeirdChars, lms::math);
        };

        virtual void TearDown() override {};

        lms::Book book1;
        lms::Book book2;
        lms::Book book3;

        string emptyString = "";
        string expWeirdChars = "1234withweirdcharacters!@#$$%^&*()_-+=`~";
};

TEST_F(BookTest, getISBN) {
    
    EXPECT_EQ(
        book1.getISBN(),
        emptyString
    );
    
    EXPECT_EQ(
        book2.getISBN(),
        "1234"
    );

    EXPECT_EQ(
        book3.getISBN(),
        expWeirdChars
    );
}

TEST_F(BookTest, getTitle) {
    EXPECT_EQ(
        book1.getTitle(),
        emptyString
    );
    
    EXPECT_EQ(
        book2.getTitle(),
        "Math101"
    );

    EXPECT_EQ(
        book3.getTitle(),
        expWeirdChars
    );
}

TEST_F(BookTest, getAuthor) {
    EXPECT_EQ(
        book1.getAuthor(),
        emptyString
    );
    
    EXPECT_EQ(
        book2.getAuthor(),
        "Jim Bob"
    );

    EXPECT_EQ(
        book3.getAuthor(),
        expWeirdChars
    );
}