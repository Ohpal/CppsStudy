#include <iostream>

using namespace std;

/*
����ü�� ũ��� ��� �������� ũ�⿡ ���� ������
������ ����ü�� ũ�Ⱑ ������ ��� �������� ũ�� ���հ� ��ġ���� ����
*/
struct TypeSize {
    char a;
    short f;
    int b;
    long c;
    float d;
    double e;

};

int main(void) {
    cout << "����ü TypeSize�� �� ����� ũ��� ������ ����" << endl;
    cout << sizeof(char)<< ", " << sizeof(short) << ", " << sizeof(int) << ", " 
    << sizeof(long)  << ", " << sizeof(float) << ", " << sizeof(double) << endl;

    cout << "����ü TypeSize�� ũ��� ������ ���� " << endl;
    cout << sizeof(TypeSize) << endl;
    return 0;
}

/*
����ü�� �޸𸮿� �Ҵ��� �� �����Ϸ��� ���α׷��� �ӵ� ����� ���� ����Ʈ �����̶�� ��Ģ�� �̿�
����ü�� �پ��� ũ���� Ÿ���� ��������� ���������� Ÿ��
�����Ϸ��� �޸��� ������ ���� �Ϸ��� ũ�Ⱑ ���� ū ��� ������ �������� ��� ��� ������ �޸� ũ�⸦ ����
*/