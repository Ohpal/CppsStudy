#include <iostream>

using namespace std;

// 함수 내에서 참조연산자(*)를 사용하지 않아 코드가 깔끔함
void Swap(int &, int &);

int main(void)
{
    int num1 = 3, num2 = 7;
    cout << "변경전 num1 값 : " << num1 << "num2 값 : " << num2 << endl;
    Swap(num1, num2);
    cout << "변경후 num1 값 : " << num1 << "num2 값 : " << num2 << endl;
    return 0;
}

void Swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}