#include <iostream>
using namespace std;

int main() {
	double inputValue = 0, intergal = 0, remain = 0;

	cout << "�ε� �Ҽ��� �Է�: ";
	cin >> inputValue;

	intergal = static_cast<int>(inputValue);
	remain = inputValue - intergal;

	cout << "���� ��: " << inputValue << endl;
	cout << "���� �κ�: " << intergal << endl;
	cout << "�Ҽ��� �Ʒ� �κ� " << remain;
}