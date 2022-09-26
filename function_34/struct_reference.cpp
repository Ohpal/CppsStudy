#include <iostream>

using namespace std;

struct Book
{
    string title;
    string author;
    int price;
};

void Display(const Book &);

int main(void)
{
    Book web_book = {"HTML", "홍길동", 40000};
    Display(web_book);
    return 0;
}

void Display(const Book &bk)
{
    cout << "책 제목 : " << bk.title << endl;
    cout << "책 작가 : " << bk.author << endl;
    cout << "책 가격 : " << bk.price << endl;
}