#include <iostream>

using namespace std;

// ������ �����ε�
class Position
{
private:
    double x_;
    double y_;

public:
    Position(double x, double y); // ������
    void Display();
    // Position operator-(const Position &other); // - ������ �Լ� (Ŭ���� ��� �Լ��� ����)
    friend Position operator-(const Position &pos1, const Position &pos2); // -������ �Լ�(���� �Լ��� ����)
};

int main(void)
{
    Position pos1 = Position(3.3, 12.5);
    Position pos2 = Position(-14.4, 7.8);
    Position pos3 = pos1 - pos2;

    pos3.Display();
    return 0;
}

Position::Position(double x, double y)
{
    x_ = x;
    y_ = y;
}

/* -������ �Լ�(Ŭ���� ����Լ�)*/
// Position Position::operator-(const Position &other)
// {
//     return Position((x_ + other.x_) / 2, (y_ + other.y_) / 2);
// }

/* -������ �Լ�(���� �Լ�) - �����Լ��� private ����� x_�� y_�� �������� ���Ͽ� friend �Լ��� ������*/
Position operator-(const Position &pos1, const Position &pos2)
{
    return Position((pos1.x_ + pos2.x_) / 2, (pos1.y_ + pos2.y_) / 2);
}

void Position::Display()
{
    cout << "�� ������ �߰� ���� ��ǥ�� x ��ǥ�� " << this->x_ << "�̰�, y ��ǥ�� " << this->y_ << endl;
}