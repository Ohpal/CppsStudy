#include <iostream>

using namespace std;

class Book
{
private:
    int current_page_;
    void set_percent();

public:
    Book(const string &title, int total_page);
    ~Book(); // �Ҹ����� ���� ����
    string title_;
    int total_page_;
    double percent_;
    void Move(int page);
    void Open();
    void Read();
};

int main(void)
{
    Book web_book("HTML and CSS", 350); // �������� �Ͻ��� ȣ��
    // �����ڰ� ȣ��Ǿ� ��� ������ percent_�� �ʱ�ȭ �Ǿ����� Ȯ��
    cout << web_book.percent_ << endl;

    return 0;
}

Book::Book(const string &title, int total_page)
{
    title_ = title;
    total_page_ = total_page;
    current_page_ = 0;
    set_percent();
}

// �Ҹ����� ����
Book::~Book()
{
    // ���α׷��� ����� �� �����Ϸ��� ���� �ڵ����� ȣ��
    cout << "Book ��ü�� �Ҹ��ڰ� ȣ��Ǿ����ϴ�" << endl;

    // �Ҹ��� ȣ�� �ñ�
    // ������ ����(���α׷� �����), ���ÿ���(��ü�� ��� �����), ������(delete�� ����Ͽ� �޸� ��ȯ), �ӽð�ü(�ӽð�ü����� ��ĥ��)
}

void Book::set_percent()
{
    percent_ = (double)current_page_ / total_page_ * 100;
}