#include <iostream>

using namespace std;

class Position
{
private:
    double x_;
    double y_;

public:
    Position(double x, double y); //������
    void Display();
    friend Position operator-(const Position &pos1, const Position &pos2); // - ������ �Լ�
};

int main(void)
{
    return 0;
}

Position::Position(double x, double y)
{
    x_ = x;
    y_ = y;
}

Position operator-(const Position &pos1, const Position &pos2)
{
    return Position((pos1.x_ + pos2.x_) / 2, (pos1.y_ + pos2.y_) / 2);
}

void Position::Display()
{
    cout << "�� ������ �߰� ��ǥ�� " << this->x_ << ", " << this->y_ << endl;
}