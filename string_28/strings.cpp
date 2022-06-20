#include <iostream>

using namespace std;

int main() {
    const int SIZE = 20;
    char address[SIZE];
    char name[SIZE];

    cout << "자신의 이름을 적으세요 : ";
    //cin >> name;
    //cin.get(name, SIZE).get();
    cin.get(name, SIZE).ignore(SIZE, '\n');

    cout << "자신이 살고 있는 지역을 적으세요 : ";
    //cin >> address;
    //cin.get(address, SIZE).get();
    cin.get(address, SIZE).ignore(SIZE, '\n');

    cout << address << "에 살고있는 " << name << "입니다" << endl;

    return 0;
}