#include <iostream>

using namespace std;

int RecursiveSum(int);

int main(void)
{
    int n = 100;

    cout << "���� : " << RecursiveSum(n) << endl;
    return 0;
}

int RecursiveSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int val = n + RecursiveSum(n - 1);
    cout << n << "��° ���� " << val << endl;
    return val;
}