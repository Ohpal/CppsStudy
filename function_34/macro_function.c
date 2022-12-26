#include <stdio.h>
#define SQR(X) ((X)*(X))

// C언어에서는 C++의 inline 함수와 비슷한 define을 사용해 매크로 함수를 사용함

int main(void) {
    int result;
    int x = 5;

    printf(SQR(10));
    printf(SRQ(x));
    printf(SQR(x+3));

    return 0;
}
