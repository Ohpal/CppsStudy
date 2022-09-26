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
    Book web_book = {"HTML", "ȫ�浿", 40000};
    Display(web_book);
    return 0;
}

void Display(const Book &bk)
{
    cout << "å ���� : " << bk.title << endl;
    cout << "å �۰� : " << bk.author << endl;
    cout << "å ���� : " << bk.price << endl;
}