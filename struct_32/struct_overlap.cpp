#include <iostream>
#include <string>

using namespace std;

// ����ü�� ������ �� ��� ������ �� �ٸ� ����ü�� �����Ҽ� ����
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
        {"�浿", "ȫ"},
        "���ֽ�",
        "�ǹ���"
    };

    cout << hong.address << endl << endl;
    cout << hong.first_name.last << hong.first_name.first << "����, " << endl;
    cout << hong.job << " �η���" << endl;

    return 0;
    
}