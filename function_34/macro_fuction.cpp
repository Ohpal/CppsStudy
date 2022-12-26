#include <iostream>
using namespace std;

inline int Sqr(int x) { return x * x; }

int main(void) {
    int result;
    int x = 5;

    cout << "결과 : " << Sqr(10) << endl;
    cout << "결과 : " << Sqr(x) << endl;
    cout << "결과 : " << Sqr(x+3) << endl;

}
