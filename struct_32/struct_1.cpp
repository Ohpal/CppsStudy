#include <iostream>

using namespace std;

// 구조체의 멤버 변수를 함수의 인수로 전달하는 예제
struct Prop {
    int savings;
    int loan;
};

int CalcProperty(int, int);

int main(void) {

    int hong_prop;
    Prop hong = {1000000, 4000000};

    hong_prop = CalcProperty(hong.savings, hong.loan);  // 구조체의 멤버 변수를 함수의 인수로 전달
    
    cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan << "원을 제외한 총 " << hong_prop << " 원 입니다.";

    return 0;
}

int CalcProperty(int s, int l) {
    return (s - l);
}