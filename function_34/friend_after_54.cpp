#include <iostream>

using namespace std;

class Rect
{
private:
    double width_;
    double height_;

public:
    Rect(double height, double width); // ������
    void DisplaySize();
    Rect operator*(double mul) const;
    friend Rect operator*(double mul, const Rect &origin); // ������ �Լ�
};

int main(void)
{
    Rect origin_rect(10, 20);
    Rect rect1 = origin_rect * 2;
    Rect rect2 = 3 * origin_rect;

    rect1.DisplaySize();
    rect2.DisplaySize();
    return 0;
}

Rect::Rect(double height, double width)
{
    height_ = height;
    width_ = width;
}

void Rect::DisplaySize()
{
    cout << "�� �簢���� ���̴� " << this->height_ << "�̰� �ʺ�� " << this->width_ << endl;
}

Rect Rect::operator*(double mul) const
{
    return Rect(height_ * mul, width_ * mul);
}

Rect operator*(double mul, const Rect &origin)
{
    return origin * mul;
}