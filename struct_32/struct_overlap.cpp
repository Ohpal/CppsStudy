#include <iostream>
#include <string>

using namespace std;

// 구조체를 정의할 때 멤버 변수로 또 다른 구조체를 포함할수 있음
struct Name {
    string first;
    string last;
};

struct Friends {
    Name first_name;
    string address;
    string job;
};

int main(void) {
    Friends hong = {
        {"길동", "홍"},
        "나주시",
        "건물주"
    };

    cout << hong.address << endl << endl;
    cout << hong.first_name.last << hong.first_name.first << "에게, " << endl;
    cout << hong.job << " 부럽다" << endl;

    return 0;
    
}