#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Page3
//class TMP {
//private:
//	int a, b;
//public:
//	TMP()
//		: a{ 0 }, b{0} {};
//	TMP(int a, int b) 
//		: a{ a }, b{b} {};
//	void setData(int a, int b) {
//		this->a = a;
//		this->b = b;
//	}
//	void printData() {
//		cout << a << " " << b << endl;
//	}
//};
//
//int main() {
//	const int SIZE{ 3 };
//	TMP tmpArr1[SIZE];
//	for (int i = 0; i < SIZE; i++) {
//		tmpArr1[i].setData(i * 2 + 1, i * 2 + 2);
//	}
//	for (TMP& element : tmpArr1) {
//		element.printData();
//	}
//	cout << endl;
//
//	TMP tmpArr2[SIZE]{ TMP{9,8}, TMP{7,6}, TMP{5,4} };
//	for (TMP& element : tmpArr2) {
//		element.printData();
//	}
//
//}

// Page4
//class Student {
//private:
//	string name;
//	int score;
//	char grade;
//public:
//	Student() {};
//	Student(string name, int score)
//		: name{ name }, score{ score } {
//		char temp[11] = { 'F', 'F', 'F', 'F', 'F', 'F',  'D', 'C', 'B', 'A', 'A'};
//		grade = temp[score / 10];
//	};
//	void print() const {
//		cout << setw(12) << left << name  << setw(6) <<  score  << grade << endl;
//	};
//};
//
//int main() {
//	Student student[5];
//	
//	student[0] = Student{"PARK", 82};
//	student[1] = Student{"LEE", 73};
//	student[2] = Student{"KIM", 91};
//	student[3] = Student{"CHOI", 72};
//	student[4] = Student{"YUE", 65};
//
//	for (int i{ 0 }; i < 5; i++)
//		student[i].print();
//}

// Page09
//int main() {
//	const array<unsigned int, 20> response{ 1, 2, 5, 4, 3, 5 ,2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5 };
//	array <unsigned int, 6> frequency{};
//
//	for (size_t i = 0; i < response.size(); i++) {
//		++frequency[response[i]]; // 특정 index에 ++이 몇 번 나오는 것인가
//	}
//	for (int i = 1; i < frequency.size(); i++) {
//		cout << setw(12) << left << i << frequency[i] << "회" << endl;
//	}
//}

// Page10
//void staticArrayInit();
//void automaticArrayInit();
//
//int main() {
//	cout << "First call to each function: " << endl;
//	staticArrayInit();
//	automaticArrayInit();
//
//	cout << "\n\nSecond call to each function: " << endl;
//	staticArrayInit();
//	automaticArrayInit();
//}
//
//void staticArrayInit(){
//	static array<unsigned int, 3> staticArray{0,0,0};
//	cout << "\nValues on entering staticArrayInit:" << endl;
//	for (int i = 0; i < staticArray.size(); i++) {
//		cout << "array1[" << i << "] = " << staticArray[i] << " ";
//	}
//
//	cout << "\nValues on exiting staticArrayInit:" << endl;
//	for (int i{ 0 }; i < staticArray.size(); i++) {
//		staticArray[i] += 5; // static 정적 붙은 곳에서는 계속 값이 남아있음.
//		cout << "array1[" << i << "] = " << staticArray[i] << " ";
//	}
//}
//
//void automaticArrayInit(){
//	array<unsigned int, 3> automaticArray{1,2,3};
//	cout << "\n\nValues on entering automaticArrayInit:" << endl;
//	for (int i = 0; i < automaticArray.size(); i++){
//		cout << "array1[" << i << "] = " << automaticArray[i] << " ";
//	}
//
//	cout << "\nValues on exiting automaticArrayInit:" << endl;
//	for (int i{ 0 }; i < automaticArray.size(); i++) {
//		automaticArray[i] += 5; 
//		cout << "array1[" << i << "] = " << automaticArray[i] << " ";
//	}
//}

// page13 - 2차원 배열 중요
//#include <iomanip>
//
//void findStudentAverage(const int arr[5][3], double stdAver[], const int SizeRow, const int SizeColumn);
//void findTestAverage(const int arr[5][3], double stdAver[], const int SizeRow, const int SizeColumn);
//
//int main() {
//	const int SizeRow = 5, SizeColumn = 3;
//	int arr[SizeRow][SizeColumn] = { 
//		{82, 65, 72},
//		{73, 70, 80},
//		{91, 67, 40},
//		{72, 72, 68},
//		{65, 90, 80}
//	};
//
//	double stdAver[SizeRow];
//	double tstAver[SizeColumn];
//
//	findStudentAverage(arr, stdAver, SizeRow, SizeColumn);
//	findTestAverage(arr, tstAver, SizeRow, SizeColumn);
//
//	cout << "------------------" << setw(9) << right << "------" << endl;
//	for (int i = 0; i < SizeRow; i++) {
//		for (int j = 0; j < SizeColumn; j++) {
//			cout << setw(6) << right << arr[i][j];
//		}
//		cout << fixed << setprecision(2) << setw(9) << right << stdAver[i] << endl;
//	}
//	cout << "------------------" << setw(9) << right << "------" << endl;
//	for (int i = 0; i < SizeColumn; i++)
//		cout << " " << fixed << setprecision(2) << tstAver[i];
//}
//
//void findStudentAverage(const int arr[5][3], double stdAver[], const int SizeRow, const int SizeColumn){
//	int sum = 0;
//	for (int i = 0; i < SizeRow; i++) {
//		for (int j = 0; j < SizeColumn; j++) {
//			sum += arr[i][j];
//		}
//		stdAver[i] = sum / static_cast<double>(SizeColumn);
//		sum = 0;
//	}
//}
//void findTestAverage(const int arr[5][3], double tstAver[], const int SizeRow, const int SizeColumn){
//	int sum = 0;
//	for (int i = 0; i < SizeColumn; i++) {
//		for (int j = 0; j < SizeRow; j++) {
//			sum += arr[j][i];
//		}
//		tstAver[i] = sum / static_cast<double>(SizeRow);
//		sum = 0;
//	}
//}

// Page14 - 구조적으로 중요!!!!!!!!!!! 
//#include <array>
//
//void printArray1(const array<array<int, 3>, 2>& arr1);
//void printArray2(const array<array<int, 3>, 2>& arr2);
//
//int main() {
//	const int SIZE1 = 3, SIZE2 = 2;
//	array<array<int, SIZE1>, SIZE2> arr1 = { {{1, 2, 3}, {4, 5, 6}} };
//	array<array<int, SIZE1>, SIZE2> arr2 = { 1, 2, 3, 4, 5 };
//	cout << "Value in array1 by row are: " << endl;
//	printArray1(arr1);
//	cout << "Value in array2 by row are: " << endl;
//	printArray2(arr2);
//}
//void printArray1(const array<array<int, 3>, 2>& arr1){ // 함수 파라미터 파악
//	for (const array<int, 3> row : arr1) { // 구조 파악
//		for (const int element : row) {
//			cout << element << " ";
//		}
//		cout << endl;
//	}
//}
//void printArray2(const array<array<int, 3>, 2>& arr2){
//	for (const auto& row : arr2) { // auto& - 데이터 타입 추론해서 자동 (강의에서 사용 금지)
//		for (const auto& element : row) {
//			cout << element << " ";
//		}
//		cout << endl;
//	}
//}


//  Program01
//#include <ctime>
//void bubble_sort(int numbers[], int size);
//
//int main() {
//	srand(time(0));
//	const int Size = 6;
//	int num = 0, arr[Size];
//	for (int i = 0; i < Size; i++) {
//		num = rand() % 45 + 1;
//		arr[i] = num;
//	}
//
//	bubble_sort(arr, Size);
//	for (int i = 0; i < Size; i++)
//		cout << arr[i] << " ";
//}
//
//void bubble_sort(int numbers[], int size) {
//	for (int i = 0; i < size - 1; ++i) {
//		for (int j = 0; j < size - 1 - i; ++j) {
//			if (numbers[j] > numbers[j + 1]) {
//				swap(numbers[j], numbers[j + 1]);
//			}
//		}
//	}
//}

// Program02 - 중요
//#include <array>
//// using arr_size = array<array<int, 4>, 3>; // - 사용 가능
//
//void reverse(const array<array<int, 4>, 3>& arr, array<array<int, 4>, 3>& copyArr);
//void printArr(const array<array<int, 4>, 3>& Arr);
//
//int main() {
//	array<array<int, 4>, 3> arr = { {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}} };
//	array<array<int, 4>, 3> copyArr;
//
//	cout << "original array" << endl;
//	printArr(arr);
//	cout << endl << "copied array" << endl;
//	reverse(arr, copyArr);
//	printArr(copyArr);
//}
//
//void reverse(const array<array<int, 4>, 3>& arr, array<array<int, 4>, 3>& copyArr){ 
//	for (int i = 0; i < arr.size(); i++) { // 구조파악
//		for (int j = 0; j < arr[0].size(); j++) {
//			copyArr[i][j] = arr[3 - i - 1][4 - j - 1];
//		}
//	}
//}
//void printArr(const array<array<int, 4>, 3>& Arr){
//	for (const array<int, 4> row : Arr) {
//		for (const int element : row)
//			cout << element << " ";
//		cout << endl;
//	}
//}

// Program03
//#include <iomanip>
//class Student {
//private: 
//	string name;
//	int s1, s2, s3;
//	double average;
//public: 
//	Student() {};
//	Student(string name, int s1, int s2, int s3)
//		: name{ name }, s1{ s1 }, s2{ s2 }, s3{ s3 } {};
//	void printStudent() {
//		cout << setw(10) << left << name << setw(10) << right << s1 << setw(10) << right << s2 << setw(10) << right << s3
//			<< fixed << setprecision(2) << setw(10) << (s1 + s2 + s3) / static_cast<double>(3) << endl;
//	}
//
//};
//
//int main() {
//	const int SIZE = 4;
//	string name;
//	int s1, s2, s3;
//	Student arr[SIZE];
//
//	for (int i = 0; i < SIZE; i++) {
//		cout << "Input name: ";
//		cin >> name;
//		cout << "Input 3 scores: ";
//		cin >> s1 >> s2 >> s3;
//		arr[i] = Student{ name, s1, s2, s3 };
//	}
//
//	cout << endl << setw(10) << left << "Name" << setw(10) << right << "Score 1" << setw(10) << right << "Score 2" << setw(10) << right << "Score 3"
//		<< fixed << setprecision(2) << setw(10) << "Average" << endl;
//	for (int i = 0; i < SIZE; i++)
//		arr[i].printStudent();
//}

//// Program04
//#include <cmath>
//class Point {
//private:
//	int x, y;
//public:
//	Point()
//		: x{ 0 }, y{0} {};
//	Point(int x, int y) 
//		: x{ x }, y{ y } {};
//	int getX() {
//		return x;
//	};
//	int getY() {
//		return y;
//	};
//};
//
//int main() {
//	const int SIZE = 5;
//	int x, y, arrNum1, arrNum2;
//	Point arr[SIZE];
//	for (int i = 0; i < SIZE; i++) {
//		cout << i << "번 점의 좌표를 입력해 주세요: ";
//		cin >> x >>  y;
//		arr[i] = Point{ x, y };
//	}
//
//	cout << "\n비교할 두 점의 인덱스를 각각 입력해 주세요: ";
//	cin >> arrNum1 >> arrNum2;
//	cout << "\n두 점 사이의 거리는 " << sqrt(pow((arr[arrNum2].getX() - arr[arrNum1].getX()), 2) + pow((arr[arrNum2].getY() - arr[arrNum1].getY()), 2))
//		<< "입니다.";
//}

// Program05 -- 마방진 중요
//#include <array>
//using arr_mabangin = array<array<int, 3>, 3>; // 전역 변수?
//bool mabanginCheck(const arr_mabangin& arr, bool check);
//int main() {
//	int num;
//	arr_mabangin arr;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> num;
//			arr[i][j] = num;
//		}
//	}
//
//	bool check = true;
//	check = mabanginCheck(arr, check);
//	if (check) {
//		cout << "\n마방진입니다.";
//	}
//	else {
//		cout << "\n마방진이 아닙니다.";
//	}
//}
//
//bool mabanginCheck(const arr_mabangin& arr, bool check) {
//	int checkSum = arr[0][2] + arr[1][1] + arr[2][0]; // reverse diagonal sum
//	int sum = arr[0][0] + arr[1][1] + arr[2][2];
//	if (checkSum != sum) {
//		return false;
//	}
//	sum = 0;
//
//	for (int i = 0; i < 3; i++) { // row sum 
//		for (int j = 0; j < 3; j++) {
//			sum += arr[i][j];
//		}
//		if (checkSum != sum) {
//			return false;
//		}
//		sum = 0;
//	}
//
//	for (int i = 0; i < 3; i++) { // column sum 
//		for (int j = 0; j < 3; j++) {
//			sum += arr[j][i];
//		}
//		if (checkSum != sum) {
//			return false;
//		}
//		sum = 0;
//	}
//	return true;
//}

// Program06 - geometric sequence
//#include <array>
//
//int main() {
//	int first, geometric, num;;
//	cout << "등비수열의 첫항과 등비를 입력해주세요: ";
//	cin >> first >> geometric;
//	array<int, 10> arr;
//	arr[0] = first;
//	for (int i = 1; i < arr.size(); i++) {
//		arr[i] = arr[i - 1] * geometric;
//	}
//	cout << "확인할 수열의 항을 입력해 주세요: ";
//	cin >> num;
//
//	cout << endl << num << "번째 항은 " << arr[num-1] << "입니다.";
//}

// Program07 - vector 기능: erase, begin
//#include <vector>
//
//class Athlete {
//private:
//	string name;
//	int age;
//	double recode;
//public:
//	Athlete(string n, int a, double r)
//		: name{ n }, age{ a }, recode{ r } {};
//	string getName() {
//		return name;
//	}
//	int getAge() {
//		return age;
//	}
//	double getRecode() {
//		return recode;
//	}
//};
//
//int main() {
//	string name;
//	int age, num;
//	double recode;
//	vector<Athlete> vec;
//
//	cout << "선수들의 수를 입력해주세요: ";
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cout << "이름과 나이, 기록을 입력해 주세요: ";
//		cin >> name >> age >> recode;
//		vec.push_back(Athlete{name, age, recode});
//	}
//	cout << endl;
//	for (int i = 1; i <= 3; i++) {
//		int N = 0;
//		double highRecode = 0;
//		for (int j = 0; j < vec.size(); j++) {
//			if (vec[j].getRecode() > highRecode) {
//				N = j;
//				highRecode = vec[j].getRecode();
//			}
//		}
//		cout << i << "등: " << vec[N].getName() << "(" << vec[N].getAge() << ") 기록: " << vec[N].getRecode() << endl;
//		vec.erase(vec.begin() + N); // vector 기능: erase, begin
//	}
//}

// Program08 - very dificult!!!!!!
//class Problem {
//private:
//	int wrong;
//	bool correct;
//	int time;
//public:
//	Problem()
//		: wrong{ 0 }, time{ 0 }, correct{false} {};
//	void setWrong();
//	void setCorrect(int t);
//	int getPenalty();
//	bool isCorrect();
//};
//
//void Problem::setWrong() {wrong++;};
//void Problem::setCorrect(int t) {
//	time = t; 
//	correct = true;
//};
//int Problem::getPenalty() { return wrong * 20 + time; }
//bool Problem::isCorrect() { return correct; }
//
//int main() {
//	int num, team, problem, time;
//	string result;
//	Problem arr[3][7];
//	cout << "총 제출 수를 입력해 주세요: ";
//	cin >> num;
//
//	for (int i = 0; i < num; i++ ){
//		cout << "제출 결과를 입력해 주세요(팀/문제/시간/결과): ";
//		cin >> team >> problem >> time >> result;
//		if (result == "Wrong") {
//			arr[team][problem].setWrong();
//		}
//		else if (result == "Correct") {
//			arr[team][problem].setCorrect(time);
//		}
//	}
//	cout << endl;
//	
//	int best = -1, pp = -1, bestidx = -1;
//	for (int i = 0; i < 3; i++) {
//		int cnt = 0, sumPanelty = 0;
//			for (int j = 0; j < 7; j++) {
//				if (arr[i][j].isCorrect()) {
//					cnt++;
//				}
//				sumPanelty += arr[i][j].getPenalty();
//			}
//		cout << i << "팀 맞은 문제: " << cnt << "문제 패널티 점수: " << sumPanelty << endl;
//		if (cnt > best || (cnt == best && pp > sumPanelty)) { // best : 최고 팀 문제 갯수, pp = 최고 팀 패널티
//			best = cnt;
//			pp = sumPanelty; // panelty 가 낮아야 함. 들어오는 팀의 panelty가 낮으면 이 조건 만족
//			bestidx = i;
//		}
//	}
//
//	cout << "\n우승팀은 " << bestidx << "팀입니다!";
//}

// Program09
//#include <vector>
//int main() {
//	vector<int> vec;
//	int n;
//	do {
//		cout << "벡터의 크기를 입력하세요 (5 이상 10 이하): ";
//		cin >> n;
//	} while (n < 5 || n > 10);
//	cout << endl;
//
//	int num, min = 100, max = 0;
//	for (int i = 1; i <= n; i++) {
//		do {
//			cout << i << "번째 정수를 입력하세요 (0 이상 100 이하): ";
//			cin >> num;
//		} while (num < 0 || num > 100);
//		vec.push_back(num);
//	}
//
//	for (int i = 0; i < n; i++) {
//		if (min >= vec[i]) {
//			min = vec[i];
//		}
//		if (max <= vec[i]) {
//			max = vec[i];
//		}
//	}
//	cout << "\n벡터의 최소값: " << min << "\n벡터의 최대값: " << max;
//}

// Program10
//#include <array>
//
//class GradeCalculator {
//private:
//	array<double, 5> scores;
//public:
//	GradeCalculator(const array<double, 5>& scores)
//		: scores{ scores } {};
//	double calculateAverageScore() {
//		int sum = 0;
//		for (int i = 0; i < 5; i++) {
//			sum += scores[i];
//		}
//		return sum / static_cast<double>(5);
//	};
//	char calculateGrade() {
//		double average = calculateAverageScore();
//		if (average >= 90) {
//			return 'A';
//		}
//		else if (average >= 80) {
//			return 'B';
//		}
//		else if (average >= 70) {
//			return 'C';
//		}
//		else if (average >= 60) {
//			return 'D';
//		}
//		else{
//			return 'F';
//		}
//	};
//};
//
//int main() {
//	int score;
//	array<double, 5>  arr;
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter score " << i + 1 << ": ";
//		cin >>  score;
//		arr[i] = score;
//	}
//	GradeCalculator s1{arr};
//	cout << endl << "Average score: " << s1.calculateAverageScore() << endl << "Grade: " << s1.calculateGrade();
//}

// Program11

// Program12