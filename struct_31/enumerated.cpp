#include <iostream>

using namespace std;

enum Weather {
    SUNNY = 0,
    CLOUD = 10,
    RAIN = 20,
    SNOW = 30
};

int main(void) {
    int input;
    Weather wt;

    cout << "오늘의 날씨는 : " << endl;
    cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
    cin >> input;
    wt = (Weather)input;

    switch(wt) {
        case SUNNY:
            cout << " 맑음 ";
            break;
        case CLOUD:
            cout << " 구름 ";
            break;
        case RAIN:
            cout << " 비 ";
            break;
        case SNOW:
            cout << " 눈 ";
            break;
        default:
            cout << " 다시 입력해주세요 ";
            break;
    }

    cout << endl << "열거체 Weather의 각 상수값은 " << SUNNY << ", " << CLOUD << ", " << RAIN << ", " << SNOW << "임";

    return 0;
}