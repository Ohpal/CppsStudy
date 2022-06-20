#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string dog;

    cout << "현재 dog 변수의 길이는 " << dog.length() << endl;

    dog = "Navi";
    cout << "개 이름은 : " << dog << endl;

    cout << "dog 변수 길이는 " << dog.length() << endl;
    cout << "강아지 첫글자는 " << dog[0];
    return 0;
}