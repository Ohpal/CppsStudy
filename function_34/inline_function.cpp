#include <iostream>
using namespace std;

inline int Sub(int x, int y)
{
    return x - y;
}

inline void Print(int x)
{
    cout << "��� ����� " << x << endl;
}

int main(void)
{
    int num1 = 5, num = 3;
    int result;

    result = Sub(num1, num2);
    Print(result);

    return 0;
}