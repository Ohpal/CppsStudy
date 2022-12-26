#include <iostream>

using namespace std;

class Book
{
private:
    int current_page_;
    void set_percent();

public:
    // Book(const string &title, int total_page);
    Book(const string &title = "웹 프로그래밍", int total_page = 100); // 디폴트 생성자의 정의
    string title_;
    int total_page_;
    double percent_;
    void Move(int page);
    void Open();
    void Read();
};

int main(void)
{
    // Book web_book("HTML과 CSS", 350); // 생성자의 암시적 호출
    // Book web_book = Book("HTML과 CSS", 350);        // 생성자의 명시적 호출
    Book web_book; // 디폴트 생성자의 암시적 호출  ()는 함수 호출로 보고 오류 발생

    // 생성자가 호출되어 멤버 변수인 percent_가 초기화되었는지를 확인
    web_book.Move(100);
    cout << web_book.percent_ << " and " << web_book.title_ << endl;

    return 0;
}

Book::Book(const string &title, int total_page)
{
    title_ = title;           // 책의 제목을 초기화
    total_page_ = total_page; // 책의 총 페이지를 초기화
    current_page_ = 0;        // 현재 페이즈를 0으로 초기화
    set_percent();            // 총 페이지와 현재 페이지로 해당 책을 읽은 정도를 초기화
}

void Book::Move(int page)
{
    current_page_ = page;
}

void Book::set_percent()
{
    percent_ = (double)current_page_ / total_page_ * 100;
}