#include <iostream>

using namespace std;

class Rect
{
private:
    double height_;
    double width_;

public:
    Rect(double height, double width); // ������
    void DisplaySize();
    Rect operator*(double mul) const;
    friend Rect operator*(double mul, const Rect &origin); // ������ �Լ�
};

int main(void)
{
    Rect origin_rect(10, 20);
    Rect rect01 = origin_rect * 2;
    Rect rect02 = 3 * origin_rect;

    rect01.DisplaySize();
    rect02.DisplaySize();

    // changed_rect.DisplaySize();
    return 0;
}

Rect::Rect(double height, double width)
{
    height_ = height;
    width_ = width;
}

Rect Rect::operator*(double mul) const
{
    return Rect(height_ * mul, width_ * mul);
}

Rect operator*(double mul, const Rect &origin)
{
    return origin * mul;
}

void Rect::DisplaySize()
{
    cout << "�簢�� ���� ���δ� " << this->height_ << ", " << this->width_ << endl;
}