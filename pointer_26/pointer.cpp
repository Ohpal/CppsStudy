#include <iostream>

using namespace std;

int main() {
    int arr[3] = {10, 20, 30};   // �迭 ����
    int* ptr_arr = arr;     // �����Ϳ� �迭�� �̸��� ����

    cout << "�迭�� �̸��� �̿��Ͽ� �迭 ��ҿ� ���� : " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

    cout << "�迭�� �̸����� ������ ������ �� �迭 ��ҿ� ���� : " << *(arr+0) << ", " << *(arr+1) << ", " << *(arr+2);

    return 0;
}