#include <iostream>
#include <string>

using namespace std;

struct Prop {
    int savings;
    int loan;
};

Prop InitProperty(void);
int CalcProperty(const Prop*);

int main(void) {
    Prop hong;
	int hong_prop;

    hong = InitProperty();
    hong_prop = CalcProperty(&hong);

    cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan 
		<< "���� ������ �� " << hong_prop << "���Դϴ�." << endl;
    return 0;
}

Prop InitProperty(void) {
    Prop hong_prop = {
        100000000,
        40000000
    };

    return hong_prop;
}

// const Ű���带 ����Ͽ� ����ü�� �����͸� ���� �����ϴ� ���� ����
int CalcProperty(const Prop* money) {
    // money->savings = 100; // ȣ��� �Լ����� ���� ����ü�� �����͸� ����
    return (money->savings - money->loan);
}
