#include <iostream>

using namespace std;

class Person
{
private:
    string name_;
    int age_;

public:
    static int person_count_;            // 정적 멤버 변수 선언
    static int person_count();           // 정적 멤버 함수 선언
    Person(const string &name, int age); // 생성자
    ~Person() { person_count_--; }       // 소멸자
    void ShowPersonInfo();
};

int Person::person_count_ = 0; // 정적 멤버 변수 정의 및 초기화

int main(void)
{
    Person hong("길동", 29);
    Person lee("순신", 33);

    cout << "현재 까지 생성된 총 인원수는 " << Person::person_count() << " 명임" << endl;
    return 0;
}

Person::Person(const string &name, int age)
{
    name_ = name;
    age_ = age;
    cout << ++person_count_ << " 번째 사람 생성" << endl;
}

void Person::ShowPersonInfo()
{
    cout << "이 사람의 이름은 " << name_ << "이고, 나이는 " << age_ << "살 임" << endl;
}

Person::person_count()
{
    return person_count_;
}