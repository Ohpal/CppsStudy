#include <iostream>

using namespace std;

/* 공용체는 순서가 규칙적이지 않고 미리 알수없는 다양한 타입의 데이터를 저장
공용체는 크기가 가장 큰 멤버 변수의 크기로 메모리를 할당
*/ 
union ShareData {
    unsigned char a;
    unsigned short b;
    unsigned int c;
};

int main(void) {
    ShareData var;
    var.c = 0x12345678;

    cout << hex << endl;
    cout << var.a << endl;
    cout << var.b << endl;
    cout << var.c;

    return 0;
}