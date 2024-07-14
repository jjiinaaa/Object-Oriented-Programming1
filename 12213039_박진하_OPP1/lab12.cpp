#include <iostream>
using namespace std;

// Page05 - swap(Reference type)
//void swap1(int& f, int& s);
//
//int main() {
//	int first = 10, second = 20;
//	swap1(first, second);
//	cout << first << " " << second;
//}
//
//void swap1(int& f, int& s ) {
//	int temp = f;
//	f = s;
//	s = temp;
//}

// page08 - Memory Address
//int main() {
//	bool flag = true; // 1 byte
//	int score = 93; // 4 byte
//	double average = 5.16; // 8 byte
//
//	cout << sizeof(flag) << " " << flag << " " << &flag << endl;
//	cout << sizeof(score) << " " << score << " " << &score << endl;
//	cout << sizeof(average) << " " << average << " " << &average << endl;
//}

// page14 - swap (Pointer Variable)
//void swap1(int* x, int* y);
//int main() {
//	int x = 5, y = 16;
//	swap1(&x, &y);
//	cout << x << " " << y;
//}
//
//void swap1(int* x, int* y) {
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}

//// Program1 = data type 중요
//#include <array>
//class Fraction {
//private:
//	int a;
//	int b;
//	double fra;
//
//public:
//	Fraction() {};
//	Fraction(int a, int b) 
//		: a{ a }, b{ b } {
//		fra = static_cast<double>(a) / b;
//	};
//	double getfra() {
//		return fra;
//	}
//	int geta() {
//		return a;
//	}
//	int getb() {
//		return b;
//	}
//}; 
//
//void bubble(array<Fraction, 4>& numbers, int size);
//void swap1(Fraction* numA, Fraction* numB);
//
//int main() {
//	array<Fraction, 4> arr;
//	int a, b;
//	for (int i = 0; i < 4; i++) {
//		cout << "Input numerator and denominator: ";
//		cin >> a >> b;
//		arr[i] = Fraction{ a, b };
//	}
//	cout << endl;
//	bubble(arr, 4);
//
//	for (int i = 0; i < 4; i++) {
//		cout << "Fraction " << i + 1 << ": " << arr[i].geta() << "/" << arr[i].getb() << endl;
//	}
//}
//
//void bubble(array<Fraction, 4>& numbers, int size) {
//	for (int i = 0; i < size - 1; ++i) {
//		for (int j = 0; j < size - 1 - i; ++j) {
//			if (numbers[j].getfra() > numbers[j + 1].getfra())
//				swap1(&numbers[j], &numbers[j + 1]);
//		}
//	}
//}
//
//void swap1(Fraction* numA, Fraction* numB) {
//	Fraction num = *numA;
//	*numA = *numB;
//	*numB = num;
//}

// Program02 - 중요
//void bubble(int* numbers[], int size);
//void swap1(int* a, int* b);
//
//int main(){
//	const int SIZE = 6;
//	int num, arr[SIZE]; 
//	int* pArr[SIZE];
//
//	cout << "Input 6 number: ";
//	for (int i = 0; i < 6; i++) {
//		cin >> num;
//		arr[i] = num;
//		pArr[i] = &arr[i]; // 중요
//	}
//	cout << endl;
//	cout << "Original array" << endl;
//	for (int element : arr)
//		cout << element << " ";
//	cout << endl;
//
//	bubble(pArr, SIZE);
//
//	cout << "pointer array" << endl;
//	for (int* element : pArr) // pArr value : & adress type
//		cout << *element << " ";
//
//}
//
//void bubble(int* numbers[], int size) {
//	for (int i = 0; i < size - 1; ++i) {
//		for (int j = 0; j < size - 1 - i; ++j) {
//			if ( *numbers[j] > *numbers[j+1])
//				swap1(numbers[j], numbers[j + 1]);
//		}
//	}
//}
//
//void swap1(int* a, int* b) {
//	int swap;
//	swap = *b;
//	*b = *a;
//	*a = swap;
//}

// Program03 - Program2 (vector version) dificult
//#include <vector>
//
//void buble_sort(vector<int>& sorted);
//void swap1(int* num1, int* num2);
//
//int main() {
//	int N, num;
//	cout << "Input the size of vector: ";
//	cin >> N;
//	vector<int> vec(N);
//	vector<int*> pVec(N);
//
//	cout << "Input "<< N <<" number: ";
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		vec[i] = num;
//	}
//
//	vector<int> sorted = vec;
//	buble_sort(sorted); 
//
//	//for (int i = 0; i < N; i++) { // 일일이 골라내어 pointer type으로 출력하기 위함
//	//	for (int j = 0; j < N; j++) {
//	//		if (sorted[i] == vec[j]) 
//	//			pVec[i] = &vec[j];
//	//	}
//	//}
//
//	cout << "\noriginal vector" << endl;
//	for (int element : vec)
//		cout << element << " ";
//
//	cout << "\npointer vector" << endl;
//	for (int element : sorted) // pVec로 역참조해도 가능
//		cout << element << " ";
//}
//
//void buble_sort(vector<int>& sorted) {
//	for (int i = 0; i < sorted.size() - 1; i++) {
//		for (int j = 0; j < sorted.size() - 1 - i; j++) {
//			if (sorted[j] > sorted[j+1])
//				swap1(&sorted[j], &sorted[j+1]);
//		}
//	}
//}
//void swap1(int* num1, int* num2) {
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}

// Program04
//int main() {
//	int a, b;
//	int* pa = &a;
//	int* pb = &b;
//	cout << "a와 b의 초기값을 입력해 주세요: ";
//	cin >> a >> b;
//
//	*pa += 3;
//	*pb += 3;
//	cout << "a:" << a << " b:" << b << endl;
//
//	int** ppa = &pa;
//	int** ppb = &pb;
//	*(*ppa) += 10;
//	*(*ppb) += 20;
//	cout << "a:" << a << " b:" << b;
//}

// Program05 - const 주의
//void func(int* const pa, int* const pb);
//
//int main() {
//	cout << "분자와 분모를 입력해 주세요: ";
//	int a, b;
//	cin >> a >> b;
//	func(&a, &b); 
//	cout << "기약분수는 " << a << "/" << b << "입니다." << endl;
//}
//
//void func(int* const pa, int* const pb) { // const
//	int minNum = *pa;
//	if (minNum > *pb) {
//		minNum = *pb;
//	}
//	for (int i = minNum; i > 0; i--) {
//		if (*pa % i == 0 && *pb % i == 0) {
//			minNum = i;
//			break;
//		}
//	}
//	*pa /= minNum;
//	*pb /= minNum;
//}

// Program06
//#include <vector>
//
//void bubble_sort(vector<int>& vec, const int N);
//void swap1(int* num1, int* num2);
//
//int main() {
//	int N, num;
//	cout << "벡터의 크기를 입력해 주세요: ";
//	cin >> N;
//	vector<int> vec(N);
//
//	cout << "벡터의 값들을 입력해 주세요: ";
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		vec[i] = num;
//	}
//
//	bubble_sort(vec, N);
//
//	cout << "정렬된 벡터" << endl;
//	for (int element : vec)
//		cout << element << " ";
//}
//
//void bubble_sort(vector<int>& vec, const int N) {
//	for (int i = 0; i < N - 1; i++) {
//		for (int j = 0; j < N - 1 - i; j++) {
//			if (vec[j] > vec[j + 1])
//				swap1(&vec[j], &vec[j + 1]);
//		}
//	}
//}
//void swap1(int* num1, int* num2) {
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}

// Program07
//class Account {
//private:
//	int balance;
//public:
//	Account()
//		: balance{ 0 } {};
//	void setBlance(int b){
//		if (balance + b < 0) {
//			cout << "계좌의 잔고가 부족합니다" << endl;
//		}
//		else {
//			balance += b;
//			cout << "계좌의 잔고가 " << b << "변동되었습니다. 잔고: " << balance << endl;
//		}
//	}
//};
//
//int main() {
//	Account A, B, C;
//	Account* pA = &A;
//	Account* pB = &B;
//	Account* pC = &C;
//	int num, balance;
//	char name;
//
//	cout << "변동 횟수를 입력해 주세요: ";
//	cin >> num;
//
//	for (int i = 0; i < num; i++) {
//		cout << "\n계좌의 변동금액을 입력해 주세요: ";
//		cin >> name >> balance;
//		cout << name;
//		if (name == 'A')
//			pA->setBlance(balance);
//		else if (name == 'B')
//			pB->setBlance(balance);
//		else if (name == 'C')
//			pC->setBlance(balance);
//	}
//}

// Program08
//int findMax(int* pa, int* pb);
//
//int main() {
//	int a, b;
//	cout << "두개의 정수를 입력하세요: ";
//	cin >> a >> b;
//	cout << endl << "두 수 중 큰 값은 " << findMax(&a, &b) << "입니다.";
//}
//
//int findMax(int* pa, int* pb) {
//	if (*pa >= *pb)
//		return *pa;
//	else
//		return *pb;
//}

// Program09
//#include <vector>
//#include <string>
//int main() {
//	string num;
//	cout << "숫자로 구성된 문자열을 입력하세요: ";
//	cin >> num;
//	
//	int index = -1;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < num.length(); j++) {
//			if (*(num.begin() + j) - '0' == i) { // char to int
//				cout << "숫자 " << i << "의 등장 위치: " << j << endl;
//				break;
//			} else if (num.length() == j + 1 && *(num.begin() + j) - '0' != i) // 없을 때 가정 : j반복문 마지막에서 같은 것이 없다면  -1
//				cout << "숫자 " << i << "의 등장 위치: -1" << endl;
//		}
//	}
//}

// Program10 - 오름차순 정렬(std::array 활용)
//#include <array>
//void selector(array<int, 10>& sorted, const int N);
//void swap1(int* num1, int* num2);
//
//int main() {
//	int N, num;
//	cout << "정수의 개수를 입력하세요: ";
//	cin >> N;
//	array<int, 10> arr;
//	array<int*, 10> pArr;
//
//	cout << "정수를 입력하세요: ";
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		arr[i] = num;
//	}
//	array<int, 10> sorted = arr;
//	selector(sorted, N);
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (sorted[i] == arr[j])
//				pArr[i] = &arr[j];
//		}
//	}
//	
//	cout << "\n정렬 전 배열: ";
//	for (int i = 0; i < N; i++) {
//		cout << arr[i] << " ";
//	}
//
//	cout << "\n정렬 후 배열: ";
//	for (int i = 0; i < N; i++) {
//		cout << *pArr[i] << " ";
//	}
//		
//}
//
//void selector(array<int, 10>& sorted, const int N) {
//	for (int i = 0; i < N - 1; i++) {
//		for (int j = 0; j < N - 1 - i; j++) {
//			if (sorted[j] > sorted[j + 1])
//				swap1(&sorted[j], &sorted[j + 1]);
//		}
//	}
//}
//
//void swap1(int* num1, int* num2) {
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}