#include <iostream>
#include <string>

using namespace std;

struct Prop {
    int savings;
    int loan;
};

int CalcProperty(int, int);

int main(void) {
    int hong_prop;
    Prop hong = {
        10000000,
        40000000
    };

    // ����ü�� ��� ������ �Լ��� �μ��� ������
    hong_prop = CalcProperty(hong.savings, hong.loan);

    cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan << "���� ������ �� " << hong_prop << "�� �Դϴ�." << endl;

    return 0;
}

int CalcProperty(int s, int l) {
    return(s-l);
}