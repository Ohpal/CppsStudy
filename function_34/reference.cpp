#include <iostream>

using namespace std;

int x = 10; // 변수 선언
int &y = x; // 참조자 선언

int main(void)
{
    cout << "x : " << x << ", y : " << y << endl;

    y++; //참조자를 이용한 증가 연산
    cout << "x : " << x << ", y : " << y << endl;
    cout << "x 주소값 : " << &x << ", y 주소값 : " << &y << endl;

    return 0;
}
