#include <iostream>
#include <string>

using namespace std;

struct Prop {
    int savings;
    int loan;
};

int CalcProperty(Prop*);

int main(void) {
    int hong_prop;
    Prop hong = {
        100000000,
        40000000
    };

    // ����ü�� ��� ������ �Լ��� �μ��� ������
    hong_prop = CalcProperty(&hong);

    cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan << "���� ������ �� " << hong_prop << "�� �Դϴ�." << endl;

    return 0;
}

int CalcProperty(Prop* money) {
    money->savings = 100;
    return(money->savings - money->loan);
}