#include <iostream>

using namespace std;

int x = 10; // ���� ����
int &y = x; // ������ ����

int main(void)
{
    cout << "x : " << x << ", y : " << y << endl;

    y++; //�����ڸ� �̿��� ���� ����
    cout << "x : " << x << ", y : " << y << endl;
    cout << "x �ּҰ� : " << &x << ", y �ּҰ� : " << &y << endl;

    return 0;
}
