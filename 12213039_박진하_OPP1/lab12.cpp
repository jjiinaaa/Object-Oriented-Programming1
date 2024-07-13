#include <iostream>
using namespace std;

// page08 변수 메모리 주소
//int main() {
//	bool flag = true;
//	int score = 93;
//	double average = 5.16;
//
//	cout << sizeof(flag) << " " << flag << " " << &flag << endl;
//	cout << sizeof(score) << " " << score << " " << &score << endl;
//	cout << sizeof(average) << " " << average << " " << &average << endl;
//}

// page14 - 포인터 변수로 swap
//void swap(int* x, int* y);
//int main() {
//	int x = 5, y = 16;
//
//	cout << x << " " << y << endl;
//	swap(&x, &y); // 메모리의 주소 값을 보내줘야 함
//	cout << x << " " << y << endl;
//
//}
//void swap(int* x, int* y) {
//	int swap{ 0 };
//	swap = *x;
//	*x = *y;
//	*y = swap;
//}


// Program1
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
//void bubble(Fraction numbers[], int size);
//void swap1(Fraction* a, Fraction* b);
//
//int main() {
//	int a, b;
//	const int SIZE = 4;
//	Fraction arr[SIZE];
//	for (int i = 0; i < 4; i++) {
//		cout << "Input numerator and denpminator: ";
//		cin >> a >> b;
//		arr[i] = Fraction{ a,b };
//	}
//	bubble(arr, SIZE);
//	cout << endl;
//
//	for (int i = 0; i < 4; i++) {
//		cout << "Fraction " << i+1 << ": " << arr[i].geta() << "/" << arr[i].getb() << endl;
//	}
//}
//
//void bubble(Fraction numbers[], int size) {
//	for (int i = 0; i < size - 1; ++i) {
//		for (int j = 0; j < size - 1 - i; ++j) {
//			if (numbers[j].getfra() > numbers[j + 1].getfra())
//				swap1(&numbers[j], &numbers[j + 1]);
//		}
//	}
//}
//
//void swap1(Fraction* a, Fraction* b) {
//	Fraction swap;
//	swap = *b;
//	*b = *a;
//	*a = swap;
//}

// Program02
void bubble(int numbers[], int size);
void swap1(int* a, int* b);

int main(){
	int a;
	const int SIZE = 6;
	int arr[SIZE], sort[SIZE];
	cout << "Input 6 number";
	for (int i = 0; i < 6; i++) {
		cin >> a;
		arr[i] = a;
	}
	sort[SIZE] = arr[SIZE];
	bubble(sort, SIZE);

	//int* pArr[SIZE]{
	//}


}

void bubble(int numbers[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1 - i; ++j) {
			if ( numbers[j] > numbers[j+1])
				swap1(&numbers[j], &numbers[j + 1]);
		}
	}
}

void swap1(int* a, int* b) {
	int swap;
	swap = *b;
	*b = *a;
	*a = swap;
}