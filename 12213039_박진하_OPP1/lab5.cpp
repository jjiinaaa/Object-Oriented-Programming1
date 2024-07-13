#include <iostream>
using namespace std;

// 
//#include <iomanip>
//int main() {
//	int inputvalue = 0, sum = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "점수를 하나 입력하세요(0~100의 범위): ";
//		cin >> inputvalue;
//		sum += inputvalue;
//	}
//	cout << "평균 점수 = " << fixed << setprecision(2) << static_cast<double>(sum) / 4;
//}

//int main() {
//	int inputvalue = 0;
//
//	cout << "출력할 정수를 입력하세요: ";
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
//	cout << "n의 값 입력: ";
//	cin >> inputvalue;
//
//	for (int i = 0; i <= inputvalue; i++) {
//		sum1 += i;
//		sum2 += i * i;
//		sum3 += i * i * i;
//	}
//
//	cout << "n의 값 = " << inputvalue << endl << "sum1의 값: " << sum1 << endl << "sum2의 값: " << sum2 << endl << "sum3의 값: " << sum3;
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
//	cout << "정수를 입력하세요 (종료하려면 -1 입력): ";
//	cin >> inputvalue;
//
//	for (inputvalue; inputvalue != -1; ) {
//		sum += inputvalue;
//		cout << "정수를 입력하세요 (종료하려면 -1 입력): ";
//		cin >> inputvalue;
//	}
//
//	cout << "\n합 = " << sum;
//}



//int main() {
//	int inputvalue = 0, sum = 0;
//	cout << "정수를 입력하세요 (종료하려면 음수 입력): ";
//	cin >> inputvalue;
//
//	while (inputvalue >= 0) {
//		sum += inputvalue;
//		cout << "정수를 입력하세요 (종료하려면 음수 입력): ";
//		cin >> inputvalue;
//	}
//
//	cout << endl <<  "합 = " << sum;
//}

//int main() {
//	int inputvalue = 0, sum = 0;
//
//	cout << "첫 번째 숫자를 입력하세요 (종료하려면 EOF 입력): ";
//
//	while (cin >> inputvalue) {
//		sum += inputvalue;
//		cout << "다음 숫자를 입력하세요: ";
//	}
//
//	cout << "\n합 = " << sum;
//}

//int main() {
//	int inputvalue = 0;
//	bool flag = true;
//
//	while (flag) {
//		cout << "입력하세요: ";
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

//// * 복리 계산
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
//	cout << "숫자의 개수를 음수가 아닌 정수로 입력하세요: ";
//	cin >> n;
//	cout << endl;
//
//	for (int i = 0; i < n; i++) {
//		double num;
//		cout << "숫자를 입력하세요: ";
//		cin >> num;
//		sum += num;
//		mul *= num;
//	}
//
//	cout << fixed << setprecision(2) << "합 = " << sum << endl << "곱 = " << mul;
//}

// Program2
//int main() {
//	int n, fac = 1;
//	do {
//		cout << "팩토리얼의 크기를 음수가 아닌 정수로 입력하세요: ";
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
//		cout << "정수의 개수를 양의 정수로 입력하세요: ";
//		cin >> n;
//	} while (n <= 0);
//	cout << endl;
//
//	int num;
//	cout << "정수를 입력하세요: ";
//	cin >> num;
//	int max = num, min = num;
//
//	for (int i = 1; i < n; i++) {
//		cout << "정수를 입력하세요: ";
//		cin >> num;
//		if (max <= num) {
//			max = num;
//		};
//		if (min >= num) {
//			min = num;
//		}
//	}
//	cout << "\n최솟값 = " << min;
//	cout << "\n최댓값 = " << max;
//}

// Program5
//int main() {
//	int n, num = 0;
//	cout << "정수의 개수를 양의 정수로 입력하세요: ";
//	cin >> n;
//	
//	while (n <= 0) {
//		cout << "양의 정수로 입력하세요: ";
//		cin >> n;
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < n; i++) {
//		cout << "정수를 입력해주세요: ";
//		cin >> num;
//		if (num % 7 == 0) {
//			cout << endl << num << "은/는 7로 나눌 수 있습니다.";
//			break;
//		}
//	}
//
//	if (num % 7 != 0) {
//		cout << endl << "7로 나눌 수 있는 숫자가 없습니다.";
//	}
//}

// Program6
//int main() {
//	int n, m, sum = 0, temp;
//	cout << "N과 M을 입력해 주세요: ";
//	cin >> n >> m;
//	temp = n;
//	for (n; n <= m; n++) {
//		sum += n;
//	}
//
//	cout << temp << "부터 " << m << "까지의 정수들의 합은 " << sum << "입니다.";
//	
//}

// Program7
//int main() {
//	int n = 0, m = 0;
//	cout << "N과 M을 입력해 주세요: ";
//	cin >> n >>  m;
//	if (n >= m) {
//		for (int i = m; i >= 1; i--) {
//			if (n % i == 0 && m % i == 0) {
//				cout << n << ", " << m << "의 최대공약수: " << i;
//				break;
//			}
//		}
//	}
//	else {
//		for (int i = n; i >= 1; i--) {
//			if (n % i == 0 && m % i == 0) {
//				cout << n << ", " << m << "의 최대공약수: " << i;
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
//		cout << "자연수 N을 입력해주세요: ";
//		cin >> n;
//	} while (n <= 0);
//	cout << endl;
//
//	cout << n << "의 배수인지 확인할 숫자를 입력해 주세요: ";
//	while (cin >> num) {
//		if (num > 0) {
//			if (num % n == 0) {
//				cout << num << "은(는) " << n << "의 배수입니다." << endl << endl;
//			}
//			else {
//				cout << num << "은(는) " << n << "의 배수가 아닙니다." << endl << endl;
//			}
//		}
//		cout << n << "의 배수인지 확인할 숫자를 입력해 주세요: ";
//	}
//}

// Program9 
//#include <iomanip>
//int main() {
//	int n;
//	double infrationrate;
//	cout << "N값과 1년 간 물가상승률(%)을 입력해 주세요: ";
//	cin >> n >> infrationrate;
//
//	double exp, result = 1;
//	exp = 1 + infrationrate / 100; // // 연간 실질적 물가상승률 = 1 + (infration / 100) 
//	for (int i = 0; i < n; i++)
//		result *= exp;
//	cout << n << "년 뒤 물가: 현재 물가의 " << fixed << setprecision(3) << result << "배";
//}

// Program10
//int main() {
//	int n, num, sum = 0;
//	do {
//		cout << "입력받을 숫자의 개수를 입력해주세요: ";
//		cin >> n;
//	} while (n <= 0);
//
//	for (int i = 1; i <= n; i++) {
//		do {
//			cout << i << "번째 숫자를 입력해 주세요: ";
//			cin >> num;
//		} while (num < 0);
//
//		while (num > 0) {
//			sum += num % 10; // 1의 자리 더하기
//			num /= 10; // 10으로 나눠서 다음 자리를 일의 자리로 떨어트리기.
//		}
//	}
//
//	cout << endl << n << "개 숫자의 각 자리수 합: " << sum << endl;
//}

// Program11 
//int main() {
//	int n, counter = 0;
//	cout << "숫자를 입력하세요: ";
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
//		cout << n << " 은(는) 소수입니다.";
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