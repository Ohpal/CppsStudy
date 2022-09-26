#include <iostream>
#include <cstring>

using namespace std;

void Display(const char *str, int n);             // 문자열 str을 n번 출력함
void Display(const char *str1, const char *str2); //문자열 str1과 str2을 연달아 출력
void Display(int x, int y);                       // x * y를 출력
void Display(double x, double y);                 // x/ y를 출력

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