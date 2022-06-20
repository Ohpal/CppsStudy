#include <iostream>

using namespace std;

struct TypeSize {
    char a;
    int b;
    double c;
};

int main(void) {
    cout << "구조체 TypeSize의 각 멤버의 크기는 다음과 같음 : " << endl;
    cout << sizeof(char) << ", " << sizeof(int) << ", " << sizeof(double) << endl;

    cout << "구조체 TypeSize의 크기는 다음과 같음 : " << endl;
    cout << sizeof(TypeSize);

    return 0;
}