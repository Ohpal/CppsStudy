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
        "HTML�� CSS",
        "ȫ�浿",
        28000
    };

    book java_book = {
        "Java ����",
        "�̼���"
    };

    cout << "ù���� å ������ " << web_book.title << " ���ڴ� " << web_book.author << " ������ " << web_book.price << endl;
    cout << "�ι�° å ������ " << java_book.title << " ���ڴ� " << java_book.author << " ������ " << java_book.price << endl;
    
    return 0;
}