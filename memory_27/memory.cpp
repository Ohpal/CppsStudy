#include <iostream>

using namespace std;

int main() {
    int* ptr_int = new int;
    *ptr_int = 100;

    double* ptr_double = new double;
    *ptr_double = 100.123;

    cout << "int형 숫자 값은 " << *ptr_int << endl;

    cout << "int형 숫자 메모리 주소는 " << ptr_int << endl;

    cout << "double형 숫자 값은 " << *ptr_double << endl;

    cout << "double형 숫자 메모리 주소는 " << ptr_double << endl;

    delete ptr_int;
    delete ptr_double;

    return 0;
}