#include <iostream>
#include <cstring>

using namespace std;

void Display(const char *str, int n);             // ���ڿ� str�� n�� �����
void Display(const char *str1, const char *str2); //���ڿ� str1�� str2�� ���޾� ���
void Display(int x, int y);                       // x * y�� ���
void Display(double x, double y);                 // x/ y�� ���

int main(void)
{
    Display("C++", 3);
    // Display("C++", "C");

    return 0;
}

void Display(const char *str, int n)
{
    char a[20];
    for (int i = 0; i < n; i++)
    {
        // a += a;
        strcat(a, a);
    }

    cout << a << endl;
}

// void Display(const char *str1, const char *str2)
// {
//     char a[10];

//     struct(str1, str2);

//     cout << a << endl;
// }