#include <iostream>
#include <string>
#include "lab10Header.h"
using namespace std;

// Program01
//int main() {
//	Account acc1{ 2000 };
//	Account acc2{ 5000 };
//	Account acc3{ 1000 };
//
//	acc1.deposit(1000);
//	acc2.deposit(0);
//	acc3.deposit(2000);
//	acc1.withdraw(2000);
//	acc2.withdraw(5000);
//	acc3.withdraw(10000);
//}

// Program02
//int main() {
//	int num;
//	const int SIZE = 10;
//	int arr[SIZE];
//
//	cout << "크기를 입력하세요(1~10) : ";
//	cin >> num; 
//	// 고정 길이 배열로 사용자 입력 숫자로 배열 길이를 지정하지 못함. 
//	// 배열의 길이를 최대치로 지정한 다음, 해당 숫자만큼만 사용하는 방식.
//
//	cout << num << "개의 숫자를 입력하세요: ";
//	for (int i = 0; i < num; i++)
//		cin >> arr[i];
//	cout << "입력한 숫자들을 거꾸로 출력: ";
//	for (int i = num - 1; i >= 0; i--)
//		cout << arr[i] << "  ";
//}

// Program3 - range-based-for문 연습 필요
//int main() {
//	const int SIZE = 10;
//	int arr[SIZE], sum = 0, average = 1, min = 0, max = 0;
//	for (int& element : arr) {
//		cin >> element; // why? arr[element]가 아닌가?
//	}
//
//	for (const int& element : arr) {
//		sum += element;
//		if (max <= element)
//			max = element;
//		if (min >= element)
//			min = element;
//	}
//
//	cout << endl << "\n합계: " << sum;
//	cout << "\n평균: " << sum / static_cast<double>(10);
//	cout << "\n최솟값: " << max;
//	cout << "\n최댓값: " << min;
//}

// Program04
//#include <ctime>
//int main() {
//	const int SIZE{ 10 };
//	int arr[SIZE], cnt = 0, num, N = 0;
//	srand(time(0));
//	cout << "10~30 숫자 입력: ";
//	cin >> num;
//
//	for (int& element : arr) {
//		N = rand() % (30 - 10 + 1) + 10; // max - min + 1 : 특정 영역으로 한정
//		element = N;
//		cout << element << " ";
//	}
//
//	int index = 0;
//	for (; index < SIZE; index++) {
//		if (arr[index] == num) {
//			break;
//		}
//	}
//	if (index < SIZE) {
//		cout << "\nThe value was found at index: " << index;
//	}
//	else {
//		cout << "\nThe value was not found.";
//	}
//}

// Program05
//class Circle {
//private:
//	int radius;
//	const double PI = 3.14;
//	static int cnt;
//public:
//	Circle(int r);
//	Circle(const Circle& c);
//	int getRadius() const;
//	double getCircum() const;
//	double getArea() const;
//	void getInfor() const;
//	static int getCnt();
//};
//
//int Circle::cnt{ 0 };
//
//Circle::Circle(int r)
//	: radius{ r } {
//	cout << "반지름 " << radius << " 원 생성" << endl;
//	cnt++;
//};
//Circle::Circle(const Circle& c) 
//	: radius{c.radius} {
//	cout << "반지름 " << radius << " 원 복사 생성" << endl;
//	cnt++;
//};
//int Circle::getRadius() const {
//	return radius;
//};
//double Circle::getCircum() const {
//	return 2 * radius * PI;
//};
//double Circle::getArea() const {
//	return pow(radius, 2) * PI;
//};
//int Circle::getCnt() {
//	return cnt;
//}
//void Circle::getInfor() const {
//	cout << "반지름: " << getRadius() << endl;
//	cout << "원주: " << getCircum() << endl;
//	cout << "넓이: " << getArea() << endl;
//};
//
//int main() {
//	cout << "원의 개수: " << Circle::getCnt() << endl << endl;
//	Circle c1{ 13 };
//	Circle c2{ 31 };
//	Circle c3{ c1 };
//	cout << "\n원의 개수: " << Circle::getCnt() << endl ;
//
//	cout << "\n원 1의 정보" << endl;
//	c1.getInfor();
//	cout << "\n원 2의 정보" << endl;
//	c2.getInfor();
//	cout << "\n원 3의 정보" << endl;
//	c3.getInfor();
//
//}

// Program06
//int main() {
//	int N, num;
//	cout << "숫자들의 개수를 입력해주세요: ";
//	cin >> N;
//	const int SIZE = 10;
//	int arr[SIZE];
//	cout << N << "개의 숫자들을 입력해 주세요: ";
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		arr[i] = num;
//	}
//	cout << "입력받은 숫자들 중 3의 배수들은 다음과 같습니다: ";
//	for (int i = 0; i < N; i++) {
//		if (arr[i] % 3 == 0)
//			cout << arr[i] << " ";
//	}
//}

// Program07 - 재귀함수로 만들어보기
//int main() {
//	int n, sum = 0;
//	const int SIZE = 20;
//	int arr[SIZE];
//	for (int i = 0; i < SIZE; i++) {
//		if (i == 0 || i == 1) {
//			arr[i] = i;
//		}
//		else {
//			arr[i] = arr[i - 1] + arr[i - 2];
//		}
//	}
//	for (int element : arr) {
//		sum += element;
//	}
//	for (int i = SIZE - 1; 0 <= i; i--) {
//		cout << i + 1 << "번째 항: " << arr[i] << endl;
//	}
//	cout << "\n피보나치 수열의 1항부터 20항까지의 합은 " << sum << "입니다.";
//}

// Program08
//double average(int arr[], int n);
//
//int main() {
//	const int SIZE = 40;
//	int n, score, arr[SIZE], sum = 0;
//	cout << "학생들의 수를 입력해 주세요: " ;
//	cin >> n;
//	cout << endl;
//
//	for (int i = 0; i < n; i++) {
//		cout << "학생 " << i + 1 << "의 점수: ";
//		cin >> score;
//		arr[i] = score;
//	}
//
//	cout << "\n학생들의 시험점수의 평균은 " << average(arr, n) << "점 입니다.";
//}
//
//double average(int arr[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += arr[i];
//	}
//	return sum / static_cast<double>(n);
//}

// Program09 - 중요! class 내에 배열 이용
//int main() {
//	int num, price;
//	char name;
//	Card A, B, C;
//	cout << "총 결제 횟수를 입력해 주세요: ";
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cout << "이용한 카드와 금액을 입력해 주세요: ";
//		cin >> name >> price;
//		if (name == 'A') {
//			A.setCard(price);
//		}
//		else if (name == 'B') {
//			B.setCard(price);
//		}
//		else if (name == 'C') {
//			C.setCard(price);
//		}
//	}
//	cout << "\nA카드 정보" << endl;
//	A.printCard();
//	cout << "\nB카드 정보" << endl;
//	B.printCard();
//	cout << "\nC카드 정보" << endl;
//	C.printCard();
//}

// Program10 
//int main() {
//	const int SIZE = 5;
//	int arr[SIZE], sum = 0, num;
//	cout << "5개의 정수를 입력하세요: ";
//	for (int i = 0; i < SIZE; i++) {
//		cin >> num;
//		arr[i] = num;
//		sum += num;
//	}
//	cout << endl << "입력한 정수: ";
//	for (int element : arr)
//		cout << element << " ";
//	cout << endl << "정수의 합: " << sum;
//	cout << endl << "평균: " << sum / static_cast<double>(SIZE);
//}

// Program11
//void printRectangles(Rectangle r[]);
//
//int main() {
//	int width, length;
//	Rectangle r[100];
//	cout << "사각형을 가로와 세로를 입력하세요 (종료: )." << endl;
//	for (int i = 0; i < 100; i++) {
//		cin >> width;
//		if (width == 0) {
//			break;
//		}
//		cin >> length;
//		if (length == 0) {
//			break;
//		}
//		r[i] = Rectangle{ width,length };
//	}
//
//	cout << endl << "사각형의 총 개수: " << Rectangle::getCnt() << endl;
//	printRectangles(r);
//}
//
//void printRectangles(Rectangle r[]) {
//	for (int i = 0; i < Rectangle::getCnt(); i++) {
//		cout << "사각형 " << i+1 << ": 가로=" << r[i].getWidth() << ", 세로=" << r[i].getLength()
//			<< ", 면적=" << r[i].getWidth() * r[i].getLength() << ", 둘레=" << 2 * (r[i].getWidth() + r[i].getLength()) << endl;
//	}
//}

// Program12
//double getOverallAverage(Student arr[], int N);
//
//int main() {
//	int N;
//	const int SIZE = 10;
//	Student sArr[SIZE];
//	cout << "학생 수를 입력하세요: ";
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int num;
//		cout << "\n학생 " << i + 1 << "의 성적 수를 입력하세요: ";
//		cin >> num;
//		for (int j = 0; j < num; j++) {
//			int score;
//			cout << "성적 " << j + 1 << "을 입력하세요: ";
//			cin >> score;
//			sArr[i].setScore(score);
//		}
//	}
//
//	cout << "\n전체 학생들의 성적 평균: " << getOverallAverage(sArr, N);
//}
//
//double getOverallAverage(Student arr[], int N) {
//	double sum = 0;
//	for (int i = 0; i < N; i++) {
//		sum += arr[i].averageScore();
//	}
//	return sum / N;
//}

// Program13
//int main() {
//	int num;
//	const int SIZE = 10;
//	Library l;
//	Book b1{ 1, "책1", "저자1", "출판사1", 2021, "장르1"};
//	l.addBook(b1);
//	Book b2{ 2, "책2", "저자2", "출판사2", 2021, "장르2" };
//	l.addBook(b2);
//	Book b3{ 3, "책3", "저자3", "출판사3", 2021, "장르3" };
//	l.addBook(b3);
//	do {
//		cout << "===== 도서관 시스템 =====" << endl
//			<< "1. 대출하기\n" << "2. 반납하기\n" << "3. 대출한 책 목록 출력하기\n" << "4. 종료하기\n" << endl
//			<< "메뉴를 선택하세요: ";
//		cin >> num;
//		if (num == 1) {
//			int booknum;
//			cout << "대출할 책 번호를 입력하세요: ";
//			cin >> booknum;
//			l.borrowBook(booknum);
//			cout << endl;
//		}
//		else if (num == 2) {
//			int booknum;
//			cout << "반납할 책 번호를 입력하세요: ";
//			cin >> booknum;
//			l.returnBook(booknum);
//			cout << endl;
//		}
//		else if (num == 3) {
//			cout << "대출한 책 목록:" << endl;
//			l.printBorrowedBooks();
//			cout << endl;
//		}
//	} while (num != 4);
//}