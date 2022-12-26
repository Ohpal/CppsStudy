#include <iostream>

using namespace std;

class Book
{
private:
    int current_page_;
    void set_percent();

public:
    // Book(const string &title, int total_page);
    Book(const string &title = "�� ���α׷���", int total_page = 100); // ����Ʈ �������� ����
    string title_;
    int total_page_;
    double percent_;
    void Move(int page);
    void Open();
    void Read();
};

int main(void)
{
    // Book web_book("HTML�� CSS", 350); // �������� �Ͻ��� ȣ��
    // Book web_book = Book("HTML�� CSS", 350);        // �������� ����� ȣ��
    Book web_book; // ����Ʈ �������� �Ͻ��� ȣ��  ()�� �Լ� ȣ��� ���� ���� �߻�

    // �����ڰ� ȣ��Ǿ� ��� ������ percent_�� �ʱ�ȭ�Ǿ������� Ȯ��
    web_book.Move(100);
    cout << web_book.percent_ << " and " << web_book.title_ << endl;

    return 0;
}

Book::Book(const string &title, int total_page)
{
    title_ = title;           // å�� ������ �ʱ�ȭ
    total_page_ = total_page; // å�� �� �������� �ʱ�ȭ
    current_page_ = 0;        // ���� ����� 0���� �ʱ�ȭ
    set_percent();            // �� �������� ���� �������� �ش� å�� ���� ������ �ʱ�ȭ
}

void Book::Move(int page)
{
    current_page_ = page;
}

void Book::set_percent()
{
    percent_ = (double)current_page_ / total_page_ * 100;
}