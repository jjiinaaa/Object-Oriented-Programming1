#include <iostream>
using namespace std;

//int main() {
//	int first = 0, second = 0, third = 0, max_score = 0, min_score = 0, average_score = 0;
//
//	cout << "첫 번째 점수 입력: ";
//	cin >> first;
//	cout << "두 번째 점수 입력: ";
//	cin >> second;
//	cout << "세 번째 점수 입력: ";
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
//	cout << "\n입력한 점수 = " << first << " " << second << " " << third << endl;
//	cout << "최소 점수와 최대 점수 = " << max_score << " " << min_score << endl;
//	cout << "학생의 성적" << average_score;
//}

//int main() {
//	int income = 0, tax = 0;
//
//	cout << "수입을 입력하세요: ";
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
//	cout << "\n수입 = \\" << income << endl;
//	cout << "세금 = \\" << tax << endl;
//}

// 윤년 포함 계산, 매우 중요!
//int main() {
//	int year = 0, month = 0, day = 0, day_count = 0;
//	int m01 = 31 ,m03 = 31, m04 = 30, m05 = 31, m06 = 30, m07 = 31, m08 = 31, m09 = 30, m10 = 31, m11 = 30, m12 = 31;
//
//	cout << "몇 년인지 입력하세요: ";
//	cin >> year;
//	cout << "몇 월인지 입력하세요: ";
//	cin >> month;
//	cout << "며칠인지 입력하세요: ";
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
//	cout << "\n올해의 " << day_count << "번째 날입니다.";
//}

//int main() {
//	int speed = 0;
//
//	cout << "자동차의 속력을 입력해주세요: ";
//	cin >> speed;
//
//	if (speed > 120)
//		cout << "\n과속 주행입니다.";
//	else if (speed < 50)
//		cout << "\n저속 주행입니다.";
//	else
//		cout << "\n정속 주행입니다.";
//}

//#include <string> 
//int main() {
//	char operator_input;
//	double input_a = 0, input_b = 0, operator_value = 0;
//
//	cout << "식을 입력해주세요: ";
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
//	cout << "이차방정식의 계수를 입력하세요: ";
//	cin >> input_a >> input_b >> input_c;
//
//	double_count = input_b * input_b - 4 * input_a * input_c;
//
//	if (double_count > 0)
//		cout << "\n실근의 개수: 2개";
//	else if (double_count == 0)
//		cout << "\n실근의 개수: 1개";
//	if (double_count < 0)
//		cout << "\n실근의 개수: 0개";
//}

//int main() {
//	int input_value = 0;
//
//	cout << "숫자를 입력해주세요:  ";
//	cin >> input_value;
//	cout << "\n카운트다운";
//	
//	switch (input_value) {
//	case 5:
//		cout <<  "\n다섯";
//	case 4:
//		cout << "\n넷";
//	case 3:
//		cout << "\n셋";
//	case 2:
//		cout << "\n둘";
//	case 1:
//		cout << "\n하나";
//	}
//}

//#include <iomanip>
//int main() {
//	double income = 0;
//	
//	cout << "연봉을 입력하세요: ";
//	cin >> income;
//
//	cout << setprecision(7) << "\n실수령 월급: \\" << (income - (income * (0.03 + 0.045 + 0.032))) / 12.0 ;
//	// data type 신경 필요.
//	// setprecision으로 끊기. 대신, 항상 iomanip 라이브러리 설치
//}

//int main() {
//	int operator_input = 0, input_a = 0, input_b = 0;
//
//	cout << "연산을 선택하세요 (1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈): ";
//	cin >> operator_input;
//	if (operator_input >= 1 && operator_input <= 4) {
//		cout << "두 개의 숫자를 입력하세요: ";
//		cin >> input_a >> input_b;
//
//		if (operator_input == 4 && input_b == 0) {
//			cout << "0으로 나눌 수 없습니다.";
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
//		cout << "잘못된 선택입니다.";
//	}
//}

//int main() {
//	int input_today = 0, input_day = 0, value = 0;
//
//	cout << "현재 요일을 입력하세요 (1: 월요일, 2: 화요일, ...., 7:  일요일): ";
//	cin >> input_today;
//	cout << "일 수를 입력하세요: ";
//	cin >> input_day;
//
//	value = (input_day + input_today) % 7;
//
//	switch (value) {
//	case 0:
//		cout << "일요일";
//		break;
//	case 1:
//		cout << "월요일";
//		break;
//	case 2:
//		cout << "화요일";
//		break;
//	case 3:
//		cout << "수요일";
//		break;
//	case 4:
//		cout << "목요일";
//		break;
//	case 5:
//		cout << "금요일";
//		break;
//	case 6:
//		cout << "토요일";
//		break;
//	}
//}

//int main() {
//	int age = 0;
//	bool career = true, degree = true;
//
//	cout << "나이를 입력하세요: ";
//	cin >> age;
//	cout << "이미 경험이 있습니까? (1: 예, 0: 아니오): ";
//	cin >> career;
//	cout << "학위를 소지하고 있습니까? (1: 예, 0: 아니오): ";
//	cin >> degree;
//
//	if (!degree) {
//		cout << "지원이 거절되었습니다. 학위가 필요합니다.";
//	}
//	else if (age < 18 || !career) {
//		cout << "지원이 거절되었습니다. 나이가 18세 이상이고 경험이 있어야 합니다.";
//	}
//	else if (age >= 18 && degree && career){
//		cout << "지원이 승인되었습니다. 면접 일정을 안내드리겠습니다.";
//	};
//	// bool type은 그 자체가 true, false를 나타내기에 부정연산자로만 하면 간편
//}