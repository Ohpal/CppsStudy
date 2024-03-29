#include <iostream>

using namespace std;

// 함수의 인수로 구조체의 주소를 직접 전달하는 에제
struct Prop {
    int savings;
    int loan;
};

int CalcProperty(Prop*);

int main(void) {
    int hong_prop;
    Prop hong = {100000000, 4000000};

    hong_prop = CalcProperty(&hong);
    cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan << "원을 제외한 총 " << hong_prop << "원입니다.";

    return 0;
}

int CalcProperty(Prop* money) {
    money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경
    return (money->savings - money->loan);
}