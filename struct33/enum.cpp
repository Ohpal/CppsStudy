#include <iostream>

using namespace std;

/*
    ����ü�� ���ο� Ÿ���� �����ϸ鼭 ���ÿ� Ÿ���� �������ִ� ������ ������� ���� ���
    ����ü�� �̿��ϸ� ���α׷��� �������� �������� ������ ���ϴ� ���� �ǹ̸� �ο���
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

    cout << "������ ������ �Է����ּ��� : " << endl;
    cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
    cin >> input;
    wt = (Weather)input;

    switch(wt) {
        case SUNNY:
            cout << "����";
            break;
        case CLOUD:
            cout << "����";
            break;
        case RAIN:
            cout << "��";
            break;
        case SNOW:
            cout << "��";
            break;
        default:
            cout << "�߸� �Է���";
            break;
    };

    return 0;   
}