#include <iostream>

using namespace std;

int RecursiveSum(int);

int main(void)
{
    int n = 100;

    cout << "합은 : " << RecursiveSum(n) << endl;
    return 0;
}

int RecursiveSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int val = n + RecursiveSum(n - 1);
    cout << n << "번째 합은 " << val << endl;
    return val;
}