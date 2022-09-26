#include <iostream>

using namespace std;

/*
    열거체는 새로운 타입을 선업하면서 동시에 타입이 가질수있는 정수형 상수값도 같이 명시
    열거체를 이용하면 프로그램의 가독성이 높아지고 변수가 지니는 값에 의미를 부여함
*/

enum Weather {
    SUNNY = 0,
    CLOUD = 10,
    RAIN = 20,
    SNOW = 30
};

int main(void) {
    int input;
    Weather wt;

    cout << "오늘의 날씨를 입력해주세요 : " << endl;
    cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
    cin >> input;
    wt = (Weather)input;

    switch(wt) {
        case SUNNY:
            cout << "맑음";
            break;
        case CLOUD:
            cout << "구름";
            break;
        case RAIN:
            cout << "비";
            break;
        case SNOW:
            cout << "눈";
            break;
        default:
            cout << "잘못 입력함";
            break;
    };

    return 0;   
}