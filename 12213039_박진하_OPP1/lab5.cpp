#include <iostream>
using namespace std;

// 
//#include <iomanip>
//int main() {
//	int inputvalue = 0, sum = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "������ �ϳ� �Է��ϼ���(0~100�� ����): ";
//		cin >> inputvalue;
//		sum += inputvalue;
//	}
//	cout << "��� ���� = " << fixed << setprecision(2) << static_cast<double>(sum) / 4;
//}

//int main() {
//	int inputvalue = 0;
//
//	cout << "����� ������ �Է��ϼ���: ";
//	cin >> inputvalue;
//
//	int counter = 0;
//	while (counter < inputvalue) 
//	{
//		cout << counter << endl;
//		counter++;
//	}
//}

//int main() {
//	int inputvalue = 0, sum1 = 0, sum2 = 0, sum3 = 0;
//	
//	cout << "n�� �� �Է�: ";
//	cin >> inputvalue;
//
//	for (int i = 0; i <= inputvalue; i++) {
//		sum1 += i;
//		sum2 += i * i;
//		sum3 += i * i * i;
//	}
//
//	cout << "n�� �� = " << inputvalue << endl << "sum1�� ��: " << sum1 << endl << "sum2�� ��: " << sum2 << endl << "sum3�� ��: " << sum3;
//}

//int main() {
//	int inputvalue = 0, passcounter= 0, failcounter = 0;
//	
//	for (int i = 0; i < 10; i++) {
//		cout << "Enter result (1 = pass, 2 = fail): ";
//		cin >> inputvalue;
//		if (inputvalue == 1) {
//			passcounter++;
//		} else if (inputvalue == 2) {
//			failcounter++;
//			}
//	}
//	cout << "Passed: " << passcounter << endl << "Failed: " << failcounter << endl;
//	if (passcounter > 8) {
//		cout << "\nBonus to instructor!";
//	}
//}

//int main() {
//	int inputvalue = 0, sum = 0;
//	cout << "������ �Է��ϼ��� (�����Ϸ��� -1 �Է�): ";
//	cin >> inputvalue;
//
//	for (inputvalue; inputvalue != -1; ) {
//		sum += inputvalue;
//		cout << "������ �Է��ϼ��� (�����Ϸ��� -1 �Է�): ";
//		cin >> inputvalue;
//	}
//
//	cout << "\n�� = " << sum;
//}



//int main() {
//	int inputvalue = 0, sum = 0;
//	cout << "������ �Է��ϼ��� (�����Ϸ��� ���� �Է�): ";
//	cin >> inputvalue;
//
//	while (inputvalue >= 0) {
//		sum += inputvalue;
//		cout << "������ �Է��ϼ��� (�����Ϸ��� ���� �Է�): ";
//		cin >> inputvalue;
//	}
//
//	cout << endl <<  "�� = " << sum;
//}

//int main() {
//	int inputvalue = 0, sum = 0;
//
//	cout << "ù ��° ���ڸ� �Է��ϼ��� (�����Ϸ��� EOF �Է�): ";
//
//	while (cin >> inputvalue) {
//		sum += inputvalue;
//		cout << "���� ���ڸ� �Է��ϼ���: ";
//	}
//
//	cout << "\n�� = " << sum;
//}

//int main() {
//	int inputvalue = 0;
//	bool flag = true;
//
//	while (flag) {
//		cout << "�Է��ϼ���: ";
//		cin >> inputvalue;
//		
//		if ((inputvalue % 2) == 1) {
//			flag = false;
//		}
//	}
//}

//int main() {
//	for (int i = 1; i <= 10; i++) {
//		cout << i << " ";
//	}
//}

//int main() {
//	int a = 2, sum = 0;
//
//	for (a; a <= 20; a += 2) {
//		sum += a;
//	}
//
//	cout << "Sum is " << sum;
//}

//// * ���� ���
//#include <iomanip>
//int main() {
//	double principal = 0, rate = 0, sum = 0;
//
//	cout << "Initial principal: ";
//	cin >> principal;
//	cout << "    Interest rate:    ";
//	cin >> rate;
//	sum = principal;
//
//	cout << "\nYear" << setw(20) << right << "Amout on deposit" << endl;
//	for (int year = 1; year <= 10; year++) {
//		cout << setw(4) << right << year << setw(20) << right << fixed << setprecision(2) << (sum += (sum * rate)) << endl;
//		// sum = principal * pow(1.0 + rate, year)
//	}
//}

// Program1
//#include <iomanip>
//int main() {
//	int n;
//	double sum = 0, mul = 1;
//	cout << "������ ������ ������ �ƴ� ������ �Է��ϼ���: ";
//	cin >> n;
//	cout << endl;
//
//	for (int i = 0; i < n; i++) {
//		double num;
//		cout << "���ڸ� �Է��ϼ���: ";
//		cin >> num;
//		sum += num;
//		mul *= num;
//	}
//
//	cout << fixed << setprecision(2) << "�� = " << sum << endl << "�� = " << mul;
//}

// Program2
//int main() {
//	int n, fac = 1;
//	do {
//		cout << "���丮���� ũ�⸦ ������ �ƴ� ������ �Է��ϼ���: ";
//		cin >> n;
//	} while (n < 0);
//	
//	if (n <= 1) {
//		fac = 1;
//	}
//	else {
//		for (int i = 1; i <= n; i++) {
//			fac *= i;
//		}
//	}
//	cout << "\n" << n << "! = " << fac;
//
//}

// Program3 // again
//int main() {
//
//
// }

// Program4 
//int main() {
//	int n;
//	do {
//		cout << "������ ������ ���� ������ �Է��ϼ���: ";
//		cin >> n;
//	} while (n <= 0);
//	cout << endl;
//
//	int num;
//	cout << "������ �Է��ϼ���: ";
//	cin >> num;
//	int max = num, min = num;
//
//	for (int i = 1; i < n; i++) {
//		cout << "������ �Է��ϼ���: ";
//		cin >> num;
//		if (max <= num) {
//			max = num;
//		};
//		if (min >= num) {
//			min = num;
//		}
//	}
//	cout << "\n�ּڰ� = " << min;
//	cout << "\n�ִ� = " << max;
//}

// Program5
//int main() {
//	int n, num = 0;
//	cout << "������ ������ ���� ������ �Է��ϼ���: ";
//	cin >> n;
//	
//	while (n <= 0) {
//		cout << "���� ������ �Է��ϼ���: ";
//		cin >> n;
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < n; i++) {
//		cout << "������ �Է����ּ���: ";
//		cin >> num;
//		if (num % 7 == 0) {
//			cout << endl << num << "��/�� 7�� ���� �� �ֽ��ϴ�.";
//			break;
//		}
//	}
//
//	if (num % 7 != 0) {
//		cout << endl << "7�� ���� �� �ִ� ���ڰ� �����ϴ�.";
//	}
//}

// Program6
//int main() {
//	int n, m, sum = 0, temp;
//	cout << "N�� M�� �Է��� �ּ���: ";
//	cin >> n >> m;
//	temp = n;
//	for (n; n <= m; n++) {
//		sum += n;
//	}
//
//	cout << temp << "���� " << m << "������ �������� ���� " << sum << "�Դϴ�.";
//	
//}

// Program7
//int main() {
//	int n = 0, m = 0;
//	cout << "N�� M�� �Է��� �ּ���: ";
//	cin >> n >>  m;
//	if (n >= m) {
//		for (int i = m; i >= 1; i--) {
//			if (n % i == 0 && m % i == 0) {
//				cout << n << ", " << m << "�� �ִ�����: " << i;
//				break;
//			}
//		}
//	}
//	else {
//		for (int i = n; i >= 1; i--) {
//			if (n % i == 0 && m % i == 0) {
//				cout << n << ", " << m << "�� �ִ�����: " << i;
//				break;
//			}
//		}
//
//	}
//}

// Program8
//int main() {
//	int n, num;
//	do {
//		cout << "�ڿ��� N�� �Է����ּ���: ";
//		cin >> n;
//	} while (n <= 0);
//	cout << endl;
//
//	cout << n << "�� ������� Ȯ���� ���ڸ� �Է��� �ּ���: ";
//	while (cin >> num) {
//		if (num > 0) {
//			if (num % n == 0) {
//				cout << num << "��(��) " << n << "�� ����Դϴ�." << endl << endl;
//			}
//			else {
//				cout << num << "��(��) " << n << "�� ����� �ƴմϴ�." << endl << endl;
//			}
//		}
//		cout << n << "�� ������� Ȯ���� ���ڸ� �Է��� �ּ���: ";
//	}
//}

// Program9 
//#include <iomanip>
//int main() {
//	int n;
//	double infrationrate;
//	cout << "N���� 1�� �� ������·�(%)�� �Է��� �ּ���: ";
//	cin >> n >> infrationrate;
//
//	double exp, result = 1;
//	exp = 1 + infrationrate / 100; // // ���� ������ ������·� = 1 + (infration / 100) 
//	for (int i = 0; i < n; i++)
//		result *= exp;
//	cout << n << "�� �� ����: ���� ������ " << fixed << setprecision(3) << result << "��";
//}

// Program10
//int main() {
//	int n, num, sum = 0;
//	do {
//		cout << "�Է¹��� ������ ������ �Է����ּ���: ";
//		cin >> n;
//	} while (n <= 0);
//
//	for (int i = 1; i <= n; i++) {
//		do {
//			cout << i << "��° ���ڸ� �Է��� �ּ���: ";
//			cin >> num;
//		} while (num < 0);
//
//		while (num > 0) {
//			sum += num % 10; // 1�� �ڸ� ���ϱ�
//			num /= 10; // 10���� ������ ���� �ڸ��� ���� �ڸ��� ����Ʈ����.
//		}
//	}
//
//	cout << endl << n << "�� ������ �� �ڸ��� ��: " << sum << endl;
//}

// Program11 
//int main() {
//	int n, counter = 0;
//	cout << "���ڸ� �Է��ϼ���: ";
//	cin >> n;
//	for (int i = 2; i <= n; i++) {
//		if (n % i == 0) {
//			cout << i << " ";
//			counter++;
//			if (counter % 5 == 0) {
//				cout << endl;
//			}
//		}
//	}
//	if (counter == 1) {
//		cout << n << " ��(��) �Ҽ��Դϴ�.";
//	}
//}

// Program12



// Program13 
//int main() {
//	int cnt = 0;
//	for (int i = 2; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			cout << i << "*" << j << "=" << i * j << " ";
//			cnt++;
//			if (cnt % 3 == 0) {
//				cout << endl;
//			}
//		}
//		cout << endl;
//	}
//}