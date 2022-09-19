#include <iostream>

using namespace std;

void Local(int &);

int main(void)
{
    int var = 10;
    cout << "변수 var의 초기값은 " << var << endl;

    Local(var);
    cout << "Local() 함수 값은 " << var << endl;

    return 0;
}

void Local(int &num)
{
    num += 10;
}