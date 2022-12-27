#include <iostream>

using namespace std;

class Rect
{
private:
    double height_;
    double width_;

public:
    Rect(double height, double width); // 생성자
    void DisplaySize();
    Rect operator*(double mul) const;
};

int main(void)
{
    Rect origin_rect(10, 20);
    Rect changed_rect = origin_rect * 2;
    // Rect changed_rect = 3 * origin_rect; // 연산자의 순서를 바꾸면 오류(멤버 함수란 왼쪽 피연산자인 객체가 호출하는 형태가되어야함)

    changed_rect.DisplaySize();
    return 0;
}

Rect::Rect(double height, double width)
{
    height_ = height;
    width_ = width;
}

void Rect::DisplaySize()
{
    cout << "이 사각형의 높이는 " << this->height_ << "이고 너비는 " << this->width_ << endl;
}

Rect Rect::operator*(double mul) const
{
    return Rect(height_ * mul, width_ * mul);
}