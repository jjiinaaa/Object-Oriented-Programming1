#include <iostream>
using namespace std;

// page06 - 포인터 연산*
//int main() {
//	int a = 5;
//	int* pa = &a;
//
//	//cout << pa << endl;
//	//cout << pa << endl << ++pa << endl << pa++ << endl; 
//	//// 연산자 우선순위로 후위증감연산자 실행 => 전위증감연산자 실행 => 일반
//	//cout << pa << endl; 
//
//	cout << pa << endl;
//	cout << ++pa << endl;
//	cout << pa + 2 << endl << endl; //pa에 4byte * 2 = +8
//
//	double b = 5.16;
//	double* pb = &b;
//	cout << pb << endl;
//	cout << ++pb << endl;
//	cout << pb + 2 << endl << endl; // pb에 8byte * 2 = +16
//
//	int* pc = &a;
//	++pa;
//	cout << pa - pc << endl;
//}

// page09 - Built-in Array
//int main() {
//	int arr[5]{ 1,2,3,4,5 };
//
//	cout << &arr[0] << endl;
//	cout << arr << endl; // 내장 배열 이름(포인터): 배열의 메모리 시작 주소
//
//	cout << &arr[1] << endl;
//	cout << arr + 1 << endl;
//
//	cout << arr[2] << endl;
//	cout << *(arr + 2) << endl;
//}

// page11
//int main() {
//	int b[]{ 10, 20, 30,40 };
//	int* bPtr{ b }; // b는 포인터
//
//	cout << "Array b displayed width:" << endl;
//	
//	cout << "\nArray subscript notation" << endl;
//	for (size_t i = 0; i < 4; i++)
//		cout << "b[" << i << "] = " << b[i] << endl;
//	
//	cout << "\nPointer/Offset notation where the pointer is the array name" << endl;
//	for (size_t offset1 = 0; offset1 < 4; offset1++)
//		cout << "*(b + " << offset1 << ") = " << *(b + offset1) << endl;
//
//	cout << "\nPointer subscript notation" << endl;
//	for (size_t j = 0; j < 4; j++)
//		cout << "bPtr[" << j << "] = " << bPtr[j] << endl;
//
//	cout << "\nPointer/offset notation" << endl;
//	for (size_t offset2 = 0; offset2 < 4; offset2++)
//		cout << "*(b + " << offset2 << ") = " << *(bPtr + offset2) << endl;
//}

// page12-1
//int getSum(const int*, int);
//
//int main() {
//	int arr[5] = { 10,11,12,13,14 };
//	cout << "원소의 합: " << getSum(arr, 5) << endl;
//}
//
//int getSum(const int* p, int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//		sum += *(p + i);
//	return sum;
//}

// page12-2
//void reverse(int*, const int);
//
//int main() {
//	int arr[5] = { 10, 11, 12, 13, 14 };
//	reverse(arr, 5);
//
//	for (int i = 0; i < 5; i++) {
//		cout << *(arr + i) << "\t";
//	}
//}
//
//void reverse(int* pArr, const int size){
//	int i = 0;
//	int j = size - 1;
//	while (i < size / 2) {
//		int temp = *(pArr + i);
//		*(pArr + i) = *(pArr + j);
//		*(pArr + j) = temp;
//		i++;
//		j--;
//	}
//}

// page17
//int main() {
//	int* p1 = new int;
//	int* p2 = new int{ 5 };
//
//	int* p3 = new int[5];
//	int size;
//	cin >> size; 
//	int* p4 = new int[size]; // 배열의 크기를 상수화 해야하지만, 동적 메모리 할당으로 가능
//
//	delete[] p4;
//	delete[] p3;
//	delete p2;
//	delete p1;
//}

// page18-1
// 주의사항: 동적 할당 없는 메모리 해제, 해제된 메모리 재해제 시 error
//int main() {
//	int* p1;
//	int* p2;
//	{
//		int* p3 = new int{ 5 };
//		p1 = p3;
//		int* p4 = new int{ 6 };
//		p2 = p4;
//		delete p4; // p2와 p4는 같은 메모리를 사용 - 해제
//	}
//	cout << *p1 << endl << *p2 << endl;
//}

// page19
//int main() {
//	int* p1 = new int{ 5 };
//
//	// shadow copy
//	int* p2 = p1; //  메모리 주소 복사 (두 포인터 변수가 동일 메모리 참조)
//	cout << ++(*p1) << endl << *p2 << endl;
//
//	// deep copy
//	int* p3 = new int;
//	*p3 = *p1; // 데이터 크기를 잡고, 값을 복사 () -> 복사 비용 (연산 효율 문제)
//	cout << ++(*p1) << endl << *p3 << endl;
//
//	delete p1;
//	delete p3;
//}


// Program01
//int main() {
//	int N;
//	cout << "배열의 크기를 입력해 주세요: ";
//	cin >> N;
//
//	int* arr = new int[N];
//	for (int i = 0; i < N; i++) {
//		*(arr + i) = i;
//		cout << *(arr + i) << " ";
//	}
//}

// Program02 - X
//void print2Darr(int**, const int, const int);
//void reverse(int**);
//
//int main() { 
//	// 2차원 배열의 동적 할당
//	int** arr = new int*[3]; 
//	for (int i = 0; i < 3; i++)
//		arr[i] = new int[4];
//
//	cout << "Input:";
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	cout << "\nOutput1:" << endl;
//	print2Darr(arr, 3, 4);
//
//	cout << "\nOutput2:" << endl;
//	reverse(arr);
//	print2Darr(arr, 3, 4);
//	
//	delete[] arr;
//}
//
//void print2Darr(int** ppArr, const int row, const int column) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cout << ppArr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void reverse(int** ppArr) {
//	int temp = 0;
//	for (int i = 0; i < 4; i++) {
//		int temp = ppArr[0][i];
//		ppArr[0][i] = ppArr[2][i];
//		ppArr[2][i] = temp;
//	}
//}

// Program03
//#include <string>
//
//double valueNameFun(string valueName, const int* pArr, const int N);
//
//int main() {
//	int N, num;
//	string valueName;
//	cout << "배열의 크기를 입력해주세요: ";
//	cin >> N;
//	int* arr = new int[N];
//
//	cout << "배열을 입력해주세요: ";
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		*(arr + i) = num;
//	}
//
//	cout << "구할려고 하는 값을 입력해주세요(sum/average/max/min): ";
//	cin >> valueName;
//
//	cout << endl << "배열의 " << valueName << "은(는) " << valueNameFun(valueName, arr, N) << "입니다.";
//
//	delete[] arr;
//}
//
//double valueNameFun(string valueName, const int* pArr, const int N){
//	int returnValue = 0;
//	if (valueName == "sum" || valueName == "average") {
//		for (int i = 0; i < N; i++) {
//			returnValue += *(pArr + i);
//		}
//		if (valueName == "average")
//			return static_cast<double>(returnValue) / N;
//		return returnValue;
//	}
//	else if (valueName == "max") {
//		int returnValue = *pArr;
//		for (int i = 1; i < N; i++) {
//			if (returnValue <= *(pArr + i))
//				returnValue = *(pArr + i);
//		}
//		return returnValue;
//	}
//	else if (valueName == "min") {
//		int returnValue = *pArr;
//		for (int i = 1; i < N; i++) {
//			if (returnValue >= *(pArr + i))
//				returnValue = *(pArr + i);
//		}
//		return returnValue;
//	}
//}

// Program06
//#include <cstdlib>
//
//int main() {
//	int N, num;
//	cout << "배열 크기를 입력하세요: ";
//	cin >> N;
//	int* arr = new int[N];
//	cout << "배열 요소를 입력하세요: ";
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		*(arr + i) = num;
//	}
//
//	int difference = abs(*arr - *(arr + 1));
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			if (difference >= abs(*(arr + i) - *(arr + j)))
//				difference = abs(*(arr + i) - *(arr + j));
//		}
//	}
//
//	cout << endl << "가장 작은 차이: " << difference;
//}

// Program07 - 중지
//#include <cstdlib>
//#include <ctime>
//
//void findDuplicates(int* pArr, const int N);
//
//int main() {
//	srand(time(0));
//	int N, num;
//	cout << "배열 크기: ";
//	cin >> N;
//	int* arr = new int[N];
//	for (int i = 0; i < N; i++)
//		*(arr + i) = rand() % 10 + 1;	
//	cout << "중복된 숫자: ";
//	findDuplicates(arr, N);
//}
//
//void findDuplicates(int* pArr, const int N) {
//	for (int i = 0; i < N; i++) {
//
//	}
//}

// Program08
//int* arrCopy(int* pScource, const int N);
//
//int main() {
//	int N, num;
//	cout << "배열 크기: ";
//	cin >> N;
//	int* source = new int[N];
//	cout << "배열 원소: ";
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		*(source + i) = num;
//	}
//	int* target = arrCopy(source, N); // 배열 복사
//
//	cout << "\ntarget 배열: ";
//	for (int i = 0; i < N; i++) {
//		*(source + i) = i + 1;
//		cout << *(source + i) << " ";
//	}
//	
//	cout << "\ntarget 배열: ";
//	for (int i = 0; i < N; i++) {
//		cout << *(target + i) << " ";
//	}
//
//	delete[] source;
//	delete[] target;
//	source = nullptr;
//	target = nullptr;
//}
//
//int* arrCopy(int* pSource, const int N){
//	int* target = new int[N];
//	for (int i = 0; i < N; i++) 
//		*(target + i) = *(pSource + i);
//	return target;
//}