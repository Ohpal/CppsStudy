#include <iostream>

using namespace std;

// ����ü�� ��� ������ �Լ��� �μ��� �����ϴ� ����
struct Prop {
    int savings;
    int loan;
};

int CalcProperty(int, int);

int main(void) {

    int hong_prop;
    Prop hong = {1000000, 4000000};

    hong_prop = CalcProperty(hong.savings, hong.loan);  // ����ü�� ��� ������ �Լ��� �μ��� ����
    
    cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan << "���� ������ �� " << hong_prop << " �� �Դϴ�.";

    return 0;
}

int CalcProperty(int s, int l) {
    return (s - l);
}