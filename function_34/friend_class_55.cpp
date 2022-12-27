#include <iostream>
#include <cmath>

using namespace std;

class Rect
{
private:
    double height_;
    double width_;

public:
    Rect(double height, double width); // ������
    void height() const;
    void width() const;
    friend class Display; // ������ Ŭ���� ����
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
    cout << "�� �簢���� ���̴� " << this->height_ << endl;
}

void Rect::width() const
{
    cout << "�� �簢���� �ʺ�� " << this->width_ << endl;
}

void Display::ShowSize(const Rect &target)
{
    target.height();
    target.width();
}

void Display::ShowDiagonal(const Rect &target)
{
    double diagonal;
    diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2)); // �밢�� = ��Ÿ��� c^2 = a^2 + b^2 => c = route(a^2+ b^2)
    /*sqrt�� ��Ʈ, pow�� ����*/

    cout << "�� �簢���� �밢���� ���̴� " << diagonal << endl;
}
