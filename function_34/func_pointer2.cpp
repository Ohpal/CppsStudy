#include <iostream>

using namespace std;

// typedef Ű���带 �̿��ϸ� ������ �Լ� ���������� ���ο� �̸��� ���ϼ�����
typedef double (*Arith)(double, double); // typedef Ű���带 �̿��� ���ο� �̸� ����
// auto double (*Arith)(double, double); // auto Ű���带 �̿��� �ڵ� Ÿ�� ��ȯ�Ҽ�����

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);

// double Calculator(double, double, double (*func)(double, double));
double Calculator(double, double, Arith);

int main(void)
{
    double (*calc)(double, double) = NULL; //�Լ� ������ ����

    double num1 = 3, num2 = 4, result = 0;
    char oper = '+';

    switch (oper)
    {
    case '+':
        calc = Add;
        break;
    case '-':
        calc = Sub;
        break;
    case '*':
        calc = Mul;
        break;
    case '/':
        calc = Div;
        break;
    default:
        cout << "��Ģ����(+,-,*,/)���� ������";
        break;
    }

    result = Calculator(num1, num2, calc);
    cout << "����� : " << result << endl;

    return 0;
}

double Add(double num1, double num2) { return num1 + num2; }
double Sub(double num1, double num2) { return num1 - num2; }
double Mul(double num1, double num2) { return num1 * num2; }
double Div(double num1, double num2) { return num1 / num2; }
// double Calculator(double num1, double num2, double (*func)(double, double)) { return func(num1, num2); }
double Calculator(double num1, double num2, Arith func) { return func(num1, num2); }