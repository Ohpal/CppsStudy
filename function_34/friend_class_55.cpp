#include <iostream>
#include <cmath>

using namespace std;

class Rect
{
private:
    double height_;
    double width_;

public:
    Rect(double height, double width); // 생성자
    void height() const;
    void width() const;
    friend class Display; // 프렌드 클래스 선언
};

class Display
{
public:
    void ShowSize(const Rect &target);
    void ShowDiagonal(const Rect &target);
};

int main(void)
{
    Rect rect1(10, 20);

    Display rect_display;
    rect_display.ShowSize(rect1);
    rect_display.ShowDiagonal(rect1);

    return 0;
};

Rect::Rect(double height, double width)
{
    height_ = height;
    width_ = width;
}

void Rect::height() const
{
    cout << "이 사각형의 높이는 " << this->height_ << endl;
}

void Rect::width() const
{
    cout << "이 사각형의 너비는 " << this->width_ << endl;
}

void Display::ShowSize(const Rect &target)
{
    target.height();
    target.width();
}

void Display::ShowDiagonal(const Rect &target)
{
    double diagonal;
    diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2)); // 대각선 = 피타고라스 c^2 = a^2 + b^2 => c = route(a^2+ b^2)
    /*sqrt는 루트, pow는 제곱*/

    cout << "이 사각형의 대각선의 길이는 " << diagonal << endl;
}
