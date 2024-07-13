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
//	cout << "ũ�⸦ �Է��ϼ���(1~10) : ";
//	cin >> num; 
//	// ���� ���� �迭�� ����� �Է� ���ڷ� �迭 ���̸� �������� ����. 
//	// �迭�� ���̸� �ִ�ġ�� ������ ����, �ش� ���ڸ�ŭ�� ����ϴ� ���.
//
//	cout << num << "���� ���ڸ� �Է��ϼ���: ";
//	for (int i = 0; i < num; i++)
//		cin >> arr[i];
//	cout << "�Է��� ���ڵ��� �Ųٷ� ���: ";
//	for (int i = num - 1; i >= 0; i--)
//		cout << arr[i] << "  ";
//}

// Program3 - range-based-for�� ���� �ʿ�
//int main() {
//	const int SIZE = 10;
//	int arr[SIZE], sum = 0, average = 1, min = 0, max = 0;
//	for (int& element : arr) {
//		cin >> element; // why? arr[element]�� �ƴѰ�?
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
//	cout << endl << "\n�հ�: " << sum;
//	cout << "\n���: " << sum / static_cast<double>(10);
//	cout << "\n�ּڰ�: " << max;
//	cout << "\n�ִ�: " << min;
//}

// Program04
//#include <ctime>
//int main() {
//	const int SIZE{ 10 };
//	int arr[SIZE], cnt = 0, num, N = 0;
//	srand(time(0));
//	cout << "10~30 ���� �Է�: ";
//	cin >> num;
//
//	for (int& element : arr) {
//		N = rand() % (30 - 10 + 1) + 10; // max - min + 1 : Ư�� �������� ����
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
//	cout << "������ " << radius << " �� ����" << endl;
//	cnt++;
//};
//Circle::Circle(const Circle& c) 
//	: radius{c.radius} {
//	cout << "������ " << radius << " �� ���� ����" << endl;
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
//	cout << "������: " << getRadius() << endl;
//	cout << "����: " << getCircum() << endl;
//	cout << "����: " << getArea() << endl;
//};
//
//int main() {
//	cout << "���� ����: " << Circle::getCnt() << endl << endl;
//	Circle c1{ 13 };
//	Circle c2{ 31 };
//	Circle c3{ c1 };
//	cout << "\n���� ����: " << Circle::getCnt() << endl ;
//
//	cout << "\n�� 1�� ����" << endl;
//	c1.getInfor();
//	cout << "\n�� 2�� ����" << endl;
//	c2.getInfor();
//	cout << "\n�� 3�� ����" << endl;
//	c3.getInfor();
//
//}

// Program06
//int main() {
//	int N, num;
//	cout << "���ڵ��� ������ �Է����ּ���: ";
//	cin >> N;
//	const int SIZE = 10;
//	int arr[SIZE];
//	cout << N << "���� ���ڵ��� �Է��� �ּ���: ";
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		arr[i] = num;
//	}
//	cout << "�Է¹��� ���ڵ� �� 3�� ������� ������ �����ϴ�: ";
//	for (int i = 0; i < N; i++) {
//		if (arr[i] % 3 == 0)
//			cout << arr[i] << " ";
//	}
//}

// Program07 - ����Լ��� ������
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
//		cout << i + 1 << "��° ��: " << arr[i] << endl;
//	}
//	cout << "\n�Ǻ���ġ ������ 1�׺��� 20�ױ����� ���� " << sum << "�Դϴ�.";
//}

// Program08
//double average(int arr[], int n);
//
//int main() {
//	const int SIZE = 40;
//	int n, score, arr[SIZE], sum = 0;
//	cout << "�л����� ���� �Է��� �ּ���: " ;
//	cin >> n;
//	cout << endl;
//
//	for (int i = 0; i < n; i++) {
//		cout << "�л� " << i + 1 << "�� ����: ";
//		cin >> score;
//		arr[i] = score;
//	}
//
//	cout << "\n�л����� ���������� ����� " << average(arr, n) << "�� �Դϴ�.";
//}
//
//double average(int arr[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += arr[i];
//	}
//	return sum / static_cast<double>(n);
//}

// Program09 - �߿�! class ���� �迭 �̿�
//int main() {
//	int num, price;
//	char name;
//	Card A, B, C;
//	cout << "�� ���� Ƚ���� �Է��� �ּ���: ";
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cout << "�̿��� ī��� �ݾ��� �Է��� �ּ���: ";
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
//	cout << "\nAī�� ����" << endl;
//	A.printCard();
//	cout << "\nBī�� ����" << endl;
//	B.printCard();
//	cout << "\nCī�� ����" << endl;
//	C.printCard();
//}

// Program10 
//int main() {
//	const int SIZE = 5;
//	int arr[SIZE], sum = 0, num;
//	cout << "5���� ������ �Է��ϼ���: ";
//	for (int i = 0; i < SIZE; i++) {
//		cin >> num;
//		arr[i] = num;
//		sum += num;
//	}
//	cout << endl << "�Է��� ����: ";
//	for (int element : arr)
//		cout << element << " ";
//	cout << endl << "������ ��: " << sum;
//	cout << endl << "���: " << sum / static_cast<double>(SIZE);
//}

// Program11
//void printRectangles(Rectangle r[]);
//
//int main() {
//	int width, length;
//	Rectangle r[100];
//	cout << "�簢���� ���ο� ���θ� �Է��ϼ��� (����: )." << endl;
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
//	cout << endl << "�簢���� �� ����: " << Rectangle::getCnt() << endl;
//	printRectangles(r);
//}
//
//void printRectangles(Rectangle r[]) {
//	for (int i = 0; i < Rectangle::getCnt(); i++) {
//		cout << "�簢�� " << i+1 << ": ����=" << r[i].getWidth() << ", ����=" << r[i].getLength()
//			<< ", ����=" << r[i].getWidth() * r[i].getLength() << ", �ѷ�=" << 2 * (r[i].getWidth() + r[i].getLength()) << endl;
//	}
//}

// Program12
//double getOverallAverage(Student arr[], int N);
//
//int main() {
//	int N;
//	const int SIZE = 10;
//	Student sArr[SIZE];
//	cout << "�л� ���� �Է��ϼ���: ";
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int num;
//		cout << "\n�л� " << i + 1 << "�� ���� ���� �Է��ϼ���: ";
//		cin >> num;
//		for (int j = 0; j < num; j++) {
//			int score;
//			cout << "���� " << j + 1 << "�� �Է��ϼ���: ";
//			cin >> score;
//			sArr[i].setScore(score);
//		}
//	}
//
//	cout << "\n��ü �л����� ���� ���: " << getOverallAverage(sArr, N);
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
//	Book b1{ 1, "å1", "����1", "���ǻ�1", 2021, "�帣1"};
//	l.addBook(b1);
//	Book b2{ 2, "å2", "����2", "���ǻ�2", 2021, "�帣2" };
//	l.addBook(b2);
//	Book b3{ 3, "å3", "����3", "���ǻ�3", 2021, "�帣3" };
//	l.addBook(b3);
//	do {
//		cout << "===== ������ �ý��� =====" << endl
//			<< "1. �����ϱ�\n" << "2. �ݳ��ϱ�\n" << "3. ������ å ��� ����ϱ�\n" << "4. �����ϱ�\n" << endl
//			<< "�޴��� �����ϼ���: ";
//		cin >> num;
//		if (num == 1) {
//			int booknum;
//			cout << "������ å ��ȣ�� �Է��ϼ���: ";
//			cin >> booknum;
//			l.borrowBook(booknum);
//			cout << endl;
//		}
//		else if (num == 2) {
//			int booknum;
//			cout << "�ݳ��� å ��ȣ�� �Է��ϼ���: ";
//			cin >> booknum;
//			l.returnBook(booknum);
//			cout << endl;
//		}
//		else if (num == 3) {
//			cout << "������ å ���:" << endl;
//			l.printBorrowedBooks();
//			cout << endl;
//		}
//	} while (num != 4);
//}