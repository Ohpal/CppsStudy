#include <iostream>

using namespace std;

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double, double, double (*func)(double, double));

int main(void)
{
    double (*calc)(double, double) = NULL; //함수 포인터 선언
    double num1 = 3, num2 = 4, result = 0;
    char oper = '*';

    switch (oper)
    {
    case '+':
        calc = Add;
    }
}