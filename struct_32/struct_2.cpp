#include <iostream>

using namespace std;

// �Լ��� �μ��� ����ü�� �ּҸ� ���� �����ϴ� ����
struct Prop {
    int savings;
    int loan;
};

int CalcProperty(Prop*);

int main(void) {
    int hong_prop;
    Prop hong = {100000000, 4000000};

    hong_prop = CalcProperty(&hong);
    cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan << "���� ������ �� " << hong_prop << "���Դϴ�.";

    return 0;
}

int CalcProperty(Prop* money) {
    money->savings = 100; // ȣ��� �Լ����� ���� ����ü�� �����͸� ����
    return (money->savings - money->loan);
}