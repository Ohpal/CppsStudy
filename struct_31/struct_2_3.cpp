#include <iostream>
#include <string>

using namespace std;

struct Prop {
    int savings;
    int loan;
};

Prop InitProperty(void);
int CalcProperty(const Prop*);

int main(void) {
    Prop hong;
	int hong_prop;

    hong = InitProperty();
    hong_prop = CalcProperty(&hong);

    cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan 
		<< "원을 제외한 총 " << hong_prop << "원입니다." << endl;
    return 0;
}

Prop InitProperty(void) {
    Prop hong_prop = {
        100000000,
        40000000
    };

    return hong_prop;
}

// const 키워드를 사용하여 구조체의 데이터를 직접 수정하는 것을 방지
int CalcProperty(const Prop* money) {
    // money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경
    return (money->savings - money->loan);
}
