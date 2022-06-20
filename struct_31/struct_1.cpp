#include <iostream>
#include <string>

using namespace std;

struct book {
    string title;
    string author;
    int price;
};

int main(void) {
    book web_book = {
        "HTML과 CSS",
        "홍길동",
        28000
    };

    book java_book = {
        "Java 정석",
        "이순신"
    };

    cout << "첫번쨰 책 제목은 " << web_book.title << " 저자는 " << web_book.author << " 가격은 " << web_book.price << endl;
    cout << "두번째 책 제목은 " << java_book.title << " 저자는 " << java_book.author << " 가격은 " << java_book.price << endl;
    
    return 0;
}