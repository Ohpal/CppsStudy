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

    cout << "������ ������ : " << endl;
    cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
    cin >> input;
    wt = (Weather)input;

    switch(wt) {
        case SUNNY:
            cout << " ���� ";
            break;
        case CLOUD:
            cout << " ���� ";
            break;
        case RAIN:
            cout << " �� ";
            break;
        case SNOW:
            cout << " �� ";
            break;
        default:
            cout << " �ٽ� �Է����ּ��� ";
            break;
    }

    cout << endl << "����ü Weather�� �� ������� " << SUNNY << ", " << CLOUD << ", " << RAIN << ", " << SNOW << "��";

    return 0;
}