#include <iostream>
using namespace std;

//int main() {
//	int first = 0, second = 0, third = 0, max_score = 0, min_score = 0, average_score = 0;
//
//	cout << "ù ��° ���� �Է�: ";
//	cin >> first;
//	cout << "�� ��° ���� �Է�: ";
//	cin >> second;
//	cout << "�� ��° ���� �Է�: ";
//	cin >> third;
//
//	if (first > second && first > third) {
//		max_score = first;
//	}
//	else if (second > first && second > third) {
//		max_score = second;
//	}
//	else if (third > second && third > first) {
//		max_score = third;
//	};
//
//	if (first < second && first < third) {
//		min_score = first;
//	}
//	else if (second < first && second < third) {
//		min_score = second;
//	}
//	else if (third < second && third < first) {
//		min_score = third;
//	};
//
//	average_score = (max_score + min_score) / 2;
//
//	cout << "\n�Է��� ���� = " << first << " " << second << " " << third << endl;
//	cout << "�ּ� ������ �ִ� ���� = " << max_score << " " << min_score << endl;
//	cout << "�л��� ����" << average_score;
//}

//int main() {
//	int income = 0, tax = 0;
//
//	cout << "������ �Է��ϼ���: ";
//	cin >> income;
//
//	if (income > 0 && income < 10'000'000)
//		tax = income * 0.1;
//	else if (income >= 10'000'000 && income < 50'000'000)
//		tax = 10'000'000 * 0.1 + ((income - 10'000'000) * 0.2);
//	else if (income >= 50'000'000 && income < 100'000'000)
//		tax = 10'000'000 * 0.1 + (50'000'000 - 10'000'000) * 0.2 + (income - 50'000'000) * 0.3;
//	else if (income >= 100'000'000)
//		tax = income * 0.3;
//
//	cout << "\n���� = \\" << income << endl;
//	cout << "���� = \\" << tax << endl;
//}

// ���� ���� ���, �ſ� �߿�!
//int main() {
//	int year = 0, month = 0, day = 0, day_count = 0;
//	int m01 = 31 ,m03 = 31, m04 = 30, m05 = 31, m06 = 30, m07 = 31, m08 = 31, m09 = 30, m10 = 31, m11 = 30, m12 = 31;
//
//	cout << "�� ������ �Է��ϼ���: ";
//	cin >> year;
//	cout << "�� ������ �Է��ϼ���: ";
//	cin >> month;
//	cout << "��ĥ���� �Է��ϼ���: ";
//	cin >> day;
//
//	bool leep = (year % 400 == 0) || ((year % 4 == 0) && !(year % 100 == 0));
//	int m02 = leep ? 29 : 28;
//
//	switch (month) {
//	case 12:
//		day_count += m11;
//	case 11:
//		day_count += m10;
//	case 10:
//		day_count += m09;
//	case 9:
//		day_count += m08;
//	case 8:
//		day_count += m07;
//	case 7:
//		day_count += m06;
//	case 6:
//		day_count += m05;
//	case 5:
//		day_count += m04;
//	case 4:
//		day_count += m03;
//	case 3:
//		day_count += m02;
//	case 2:
//		day_count += m01;
//	case 1:
//		day_count += 0;
//	}
//	
//	day_count += day;
//
//	cout << "\n������ " << day_count << "��° ���Դϴ�.";
//}

//int main() {
//	int speed = 0;
//
//	cout << "�ڵ����� �ӷ��� �Է����ּ���: ";
//	cin >> speed;
//
//	if (speed > 120)
//		cout << "\n���� �����Դϴ�.";
//	else if (speed < 50)
//		cout << "\n���� �����Դϴ�.";
//	else
//		cout << "\n���� �����Դϴ�.";
//}

//#include <string> 
//int main() {
//	char operator_input;
//	double input_a = 0, input_b = 0, operator_value = 0;
//
//	cout << "���� �Է����ּ���: ";
//	cin >> input_a >> operator_input >> input_b;
//
//	switch (operator_input) {
//	case '+': 
//		operator_value = input_a + input_b;
//		break;
//	case '-':
//		operator_value = input_a - input_b;
//		break;
//	case '*':
//		operator_value = input_a * input_b;
//		break;
//	case '/':
//		operator_value = input_a / input_b;
//		break;
//	case '%':
//		operator_value = static_cast<int>(input_a) % static_cast<int>(input_b);
//		break;
//	}
//
//	cout << input_a << " " << operator_input << " " << input_b << " = " << operator_value;
//}

//int main() {
//	int input_a = 0, input_b = 0, input_c = 0, double_count = 0;
//
//	cout << "������������ ����� �Է��ϼ���: ";
//	cin >> input_a >> input_b >> input_c;
//
//	double_count = input_b * input_b - 4 * input_a * input_c;
//
//	if (double_count > 0)
//		cout << "\n�Ǳ��� ����: 2��";
//	else if (double_count == 0)
//		cout << "\n�Ǳ��� ����: 1��";
//	if (double_count < 0)
//		cout << "\n�Ǳ��� ����: 0��";
//}

//int main() {
//	int input_value = 0;
//
//	cout << "���ڸ� �Է����ּ���:  ";
//	cin >> input_value;
//	cout << "\nī��Ʈ�ٿ�";
//	
//	switch (input_value) {
//	case 5:
//		cout <<  "\n�ټ�";
//	case 4:
//		cout << "\n��";
//	case 3:
//		cout << "\n��";
//	case 2:
//		cout << "\n��";
//	case 1:
//		cout << "\n�ϳ�";
//	}
//}

//#include <iomanip>
//int main() {
//	double income = 0;
//	
//	cout << "������ �Է��ϼ���: ";
//	cin >> income;
//
//	cout << setprecision(7) << "\n�Ǽ��� ����: \\" << (income - (income * (0.03 + 0.045 + 0.032))) / 12.0 ;
//	// data type �Ű� �ʿ�.
//	// setprecision���� ����. ���, �׻� iomanip ���̺귯�� ��ġ
//}

//int main() {
//	int operator_input = 0, input_a = 0, input_b = 0;
//
//	cout << "������ �����ϼ��� (1: ����, 2: ����, 3: ����, 4: ������): ";
//	cin >> operator_input;
//	if (operator_input >= 1 && operator_input <= 4) {
//		cout << "�� ���� ���ڸ� �Է��ϼ���: ";
//		cin >> input_a >> input_b;
//
//		if (operator_input == 4 && input_b == 0) {
//			cout << "0���� ���� �� �����ϴ�.";
//		}
//		else {
//			switch (operator_input) {
//			case 1:
//				cout << input_a << " + " << input_b << " = " << input_a + input_b;
//				break;
//			case 2:
//				cout << input_a << " - " << input_b << " = " << input_a - input_b;
//				break;
//			case 3:
//				cout << input_a << " * " << input_b << " = " << input_a * input_b;
//				break;
//			case 4:
//				cout << input_a << " / " << input_b << " = " << static_cast<double>(input_a) / input_b;
//				break;
//			}
//		}
//
//	}
//	else {
//		cout << "�߸��� �����Դϴ�.";
//	}
//}

//int main() {
//	int input_today = 0, input_day = 0, value = 0;
//
//	cout << "���� ������ �Է��ϼ��� (1: ������, 2: ȭ����, ...., 7:  �Ͽ���): ";
//	cin >> input_today;
//	cout << "�� ���� �Է��ϼ���: ";
//	cin >> input_day;
//
//	value = (input_day + input_today) % 7;
//
//	switch (value) {
//	case 0:
//		cout << "�Ͽ���";
//		break;
//	case 1:
//		cout << "������";
//		break;
//	case 2:
//		cout << "ȭ����";
//		break;
//	case 3:
//		cout << "������";
//		break;
//	case 4:
//		cout << "�����";
//		break;
//	case 5:
//		cout << "�ݿ���";
//		break;
//	case 6:
//		cout << "�����";
//		break;
//	}
//}

//int main() {
//	int age = 0;
//	bool career = true, degree = true;
//
//	cout << "���̸� �Է��ϼ���: ";
//	cin >> age;
//	cout << "�̹� ������ �ֽ��ϱ�? (1: ��, 0: �ƴϿ�): ";
//	cin >> career;
//	cout << "������ �����ϰ� �ֽ��ϱ�? (1: ��, 0: �ƴϿ�): ";
//	cin >> degree;
//
//	if (!degree) {
//		cout << "������ �����Ǿ����ϴ�. ������ �ʿ��մϴ�.";
//	}
//	else if (age < 18 || !career) {
//		cout << "������ �����Ǿ����ϴ�. ���̰� 18�� �̻��̰� ������ �־�� �մϴ�.";
//	}
//	else if (age >= 18 && degree && career){
//		cout << "������ ���εǾ����ϴ�. ���� ������ �ȳ��帮�ڽ��ϴ�.";
//	};
//	// bool type�� �� ��ü�� true, false�� ��Ÿ���⿡ ���������ڷθ� �ϸ� ����
//}