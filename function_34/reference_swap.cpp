#include <iostream>

using namespace std;

// �Լ� ������ ����������(*)�� ������� �ʾ� �ڵ尡 �����
void Swap(int &, int &);

int main(void)
{
    int num1 = 3, num2 = 7;
    cout << "������ num1 �� : " << num1 << "num2 �� : " << num2 << endl;
    Swap(num1, num2);
    cout << "������ num1 �� : " << num1 << "num2 �� : " << num2 << endl;
    return 0;
}

void Swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}