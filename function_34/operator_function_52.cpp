#include <iostream>

using namespace std;

// 연산자 오버로딩
class Position
{
private:
    double x_;
    double y_;

public:
    Position(double x, double y); // 생성자
    void Display();
    // Position operator-(const Position &other); // - 연산자 함수 (클래스 멤버 함수로 정의)
    friend Position operator-(const Position &pos1, const Position &pos2); // -연산자 함수(전역 함수로 정의)
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

/* -연산자 함수(클래스 멤버함수)*/
// Position Position::operator-(const Position &other)
// {
//     return Position((x_ + other.x_) / 2, (y_ + other.y_) / 2);
// }

/* -연산자 함수(전역 함수) - 전역함수는 private 멤버인 x_와 y_에 접근하지 못하여 friend 함수로 선언함*/
Position operator-(const Position &pos1, const Position &pos2)
{
    return Position((pos1.x_ + pos2.x_) / 2, (pos1.y_ + pos2.y_) / 2);
}

void Position::Display()
{
    cout << "두 지점의 중간 지점 좌표는 x 좌표가 " << this->x_ << "이고, y 좌표는 " << this->y_ << endl;
}