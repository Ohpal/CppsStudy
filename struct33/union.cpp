#include <iostream>

using namespace std;

/* ����ü�� ������ ��Ģ������ �ʰ� �̸� �˼����� �پ��� Ÿ���� �����͸� ����
����ü�� ũ�Ⱑ ���� ū ��� ������ ũ��� �޸𸮸� �Ҵ�
*/ 
union ShareData {
    unsigned char a;
    unsigned short b;
    unsigned int c;
};

int main(void) {
    ShareData var;
    var.c = 0x12345678;

    cout << hex << endl;
    cout << var.a << endl;
    cout << var.b << endl;
    cout << var.c;

    return 0;
}