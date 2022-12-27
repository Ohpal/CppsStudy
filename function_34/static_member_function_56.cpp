#include <iostream>

using namespace std;

class Person
{
private:
    string name_;
    int age_;

public:
    static int person_count_;            // ���� ��� ���� ����
    static int person_count();           // ���� ��� �Լ� ����
    Person(const string &name, int age); // ������
    ~Person() { person_count_--; }       // �Ҹ���
    void ShowPersonInfo();
};

int Person::person_count_ = 0; // ���� ��� ���� ���� �� �ʱ�ȭ

int main(void)
{
    Person hong("�浿", 29);
    Person lee("����", 33);

    cout << "���� ���� ������ �� �ο����� " << Person::person_count() << " ����" << endl;
    return 0;
}

Person::Person(const string &name, int age)
{
    name_ = name;
    age_ = age;
    cout << ++person_count_ << " ��° ��� ����" << endl;
}

void Person::ShowPersonInfo()
{
    cout << "�� ����� �̸��� " << name_ << "�̰�, ���̴� " << age_ << "�� ��" << endl;
}

Person::person_count()
{
    return person_count_;
}