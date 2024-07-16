#include <iostream>
using namespace std;

int main() {
	double inputValue = 0, intergal = 0, remain = 0;

	cout << "부동 소수점 입력: ";
	cin >> inputValue;

	intergal = static_cast<int>(inputValue);
	remain = inputValue - intergal;

	cout << "원래 값: " << inputValue << endl;
	cout << "정수 부분: " << intergal << endl;
	cout << "소수점 아래 부분 " << remain;
}