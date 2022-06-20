#include <iostream>
#include <string>

using namespace std;

struct Prop {
    int savings;
    int loan;
};

int CalcProperty(Prop*);

int main(void) {
    int hong_prop;
    Prop hong = {
        100000000,
        40000000
    };

    // 구조체의 멤버 변수를 함수의 인수로 전달함
    hong_prop = CalcProperty(&hong);

    cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan << "원을 제외한 총 " << hong_prop << "원 입니다." << endl;

    return 0;
}

int CalcProperty(Prop* money) {
    money->savings = 100;
    return(money->savings - money->loan);
}