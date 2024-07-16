#include <iostream>
using namespace std;

// Program1
//#include <ctime>
//
//int factorialR(int a);
//int factorialL(int a);
//
//int main() {
//
//	clock_t start, end;
//	start = clock();
//	for (int i = 0; i <= 3000; i++) {
//		factorialR(i);
//	}
//	end = clock();
//	cout << "재귀함수 소요 시간: " << end - start << endl;
//
//	start = clock();
//	for (int i = 0; i <= 3000; i++) {
//		factorialL(i);
//	}
//	end = clock();
//	cout << "반복문 소요 시간: " << end - start;
//
//}
//
//int factorialR(int a) {
//	if (a <= 1) {
//		return 1;
//	}
//	else {
//		return a * factorialR(a - 1); // 3! = 3 * 2!
//	}
//}
//
//int factorialL(int a) {
//	int fornum2 = 1;
//	for (a; a >= 1; a--) {
//		fornum2 *= a;
//	}
//	return fornum2;
//}

// Program2
//#include <ctime>
//int fiboR(int a);
//int fiboL(int a);
//
//int main() {
//	int n;
//	cout << "f(0)~f(?): ";
//	cin >> n;
//	clock_t start, end;
//	start = clock();
//	for (int i = 0; i <= n; i++) {
//		fiboR(i);
//	}
//	end = clock();
//	cout << "\n\nf(0)~f(" << n << ") fiboR time: " << end - start;
//
//	start = clock();
//	for (int i = 0; i <= n; i++) {
//		fiboL(i);
//	}
//	end = clock();
//	cout << "\nf(0)~f(" << n << ") fiboL time: " << end - start;
//}
//
//int fiboR(int a) {
//	if (a <= 1) {
//		return a;
//	}
//	else {
//		return fiboR(a - 1) + fiboR(a - 2);
//	}
//};
//int fiboL(int a) {
//	if (a == 0 || a == 1) {
//		return a;
//	}
//	int result = 0, f1 = 0, f2 = 0;
//	for (int i = 2; i <= a; i++) {
//		result = f1 + f2;
//		f2 = f1;
//		f1 = result;
//	}
//	return result;
//	// 피보나치 수 반복문 
//};

// Program3
//int gcd(int a, int b, int c, int d);
//int lcm(int a, int b, int c, int d);
//
//int main() {
//	int num1, denomenator1, num2, denomenator2;
//	cin >> num1 >> denomenator1 >> num2 >> denomenator2;
//	if (lcm )
//
//
//}
//int gcd(int b, int d) {
//	if (d == 0) {
//		return b;
//	}
//	else {
//		return gcd(d, b % d);
//	}
//}
//
//int lcm(int b, int d) {
//	return b * d / gcd(b, d);
//}

int main() {

}