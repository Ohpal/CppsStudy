#include <stdio.h>
#define SQR(X) ((X)*(X))

// C������ C++�� inline �Լ��� ����� define�� ����� ��ũ�� �Լ��� �����

int main(void) {
    int result;
    int x = 5;

    printf(SQR(10));
    printf(SRQ(x));
    printf(SQR(x+3));

    return 0;
}
