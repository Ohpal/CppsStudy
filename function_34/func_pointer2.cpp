#include <iostream>

using namespace std;

// typedef 키워드를 이용하면 복잡한 함수 포인터형에 새로운 이름을 붙일수있음
typedef double (*Arith)(double, double); // typedef 키워드를 이용한 새로운 이름 선언
// auto double (*Arith)(double, double); // auto 키워드를 이용한 자동 타입 변환할수있음

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);

// double Calculator(double, double, double (*func)(double, double));
double Calculator(double, double, Arith);

int main(void)
{
    double (*calc)(double, double) = NULL; //함수 포인터 선언

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
        cout << "사칙연산(+,-,*,/)만을 지원함";
        break;
    }

    result = Calculator(num1, num2, calc);
    cout << "결과는 : " << result << endl;

    return 0;
}

double Add(double num1, double num2) { return num1 + num2; }
double Sub(double num1, double num2) { return num1 - num2; }
double Mul(double num1, double num2) { return num1 * num2; }
double Div(double num1, double num2) { return num1 / num2; }
// double Calculator(double num1, double num2, double (*func)(double, double)) { return func(num1, num2); }
double Calculator(double num1, double num2, Arith func) { return func(num1, num2); }