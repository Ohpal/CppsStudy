#include <iostream>

using namespace std;

// 함수의 인수로 구조체의 주소를 직접 전달하는 에제
struct Prop {
    int savings;
    int loan;
};

Prop InitProperty(void);
// const 키워도를 사용하여 함수에 전달된 인수를 함수 내에서 수정할 수 없도록 구성
int CalcProperty(const Prop*);

int main(void) {
    int hong_prop;
    // Prop hong = {100000000, 4000000};
    Prop hong;
    hong = InitProperty();

    hong_prop = CalcProperty(&hong);
    cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan << "원을 제외한 총 " << hong_prop << "원입니다.";

    return 0;
}

Prop InitProperty(void) {
    Prop hong_prop = {100000000, 4000000};
    return hong_prop;   //구조체를 함수의 반환값으로 반환
}

int CalcProperty(const Prop* money) {
    // money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경
    return (money->savings - money->loan);
}