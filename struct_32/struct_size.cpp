#include <iostream>

using namespace std;

/*
구조체의 크기는 멤버 변수들의 크기에 따라 결정됨
하지만 구조체의 크기가 언제나 멤버 변수들의 크기 총합과 일치하지 않음
*/
struct TypeSize {
    char a;
    short f;
    int b;
    long c;
    float d;
    double e;

};

int main(void) {
    cout << "구조체 TypeSize의 각 멤버의 크기는 다음과 같음" << endl;
    cout << sizeof(char)<< ", " << sizeof(short) << ", " << sizeof(int) << ", " 
    << sizeof(long)  << ", " << sizeof(float) << ", " << sizeof(double) << endl;

    cout << "구조체 TypeSize의 크기는 다음과 같음 " << endl;
    cout << sizeof(TypeSize) << endl;
    return 0;
}

/*
구조체를 메모리에 할당할 때 컴파일러는 프로그램의 속도 향상을 위해 바이트 패팅이라는 규칙을 이용
구조체는 다양한 크기의 타입을 멤버변수로 가질수있음 타입
컴파일러는 메모리의 접근을 쉽게 하려고 크기가 가장 큰 멤버 변수를 기준으로 모든 멤버 변수의 메모리 크기를 맞춤
*/