#include <iostream>

using namespace std;

// �Լ��� �μ��� ����ü�� �ּҸ� ���� �����ϴ� ����
struct Prop {
    int savings;
    int loan;
};

Prop InitProperty(void);
// const Ű������ ����Ͽ� �Լ��� ���޵� �μ��� �Լ� ������ ������ �� ������ ����
int CalcProperty(const Prop*);

int main(void) {
    int hong_prop;
    // Prop hong = {100000000, 4000000};
    Prop hong;
    hong = InitProperty();

    hong_prop = CalcProperty(&hong);
    cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan << "���� ������ �� " << hong_prop << "���Դϴ�.";

    return 0;
}

Prop InitProperty(void) {
    Prop hong_prop = {100000000, 4000000};
    return hong_prop;   //����ü�� �Լ��� ��ȯ������ ��ȯ
}

int CalcProperty(const Prop* money) {
    // money->savings = 100; // ȣ��� �Լ����� ���� ����ü�� �����͸� ����
    return (money->savings - money->loan);
}