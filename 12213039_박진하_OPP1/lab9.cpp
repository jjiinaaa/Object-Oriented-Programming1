#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

// orientation
//int main() { // obj - s1
//	string s1 = "pby"; 
//	cout << s1.length() << endl;
//	string s2 = s1 + " dlwlrma";
//	cout << s2 << endl;
//	string s3 = s2.substr(4, 7); // 4 번째 글자부터 7개 글자를 출력
//	cout << s3 << endl;
//}

// ex1. radius로 area, round 구하기
//class Circle {
//private:
//	double radius;
//	double PI = 3.141592;
//public: 
//	Circle(double radius)
//		: radius{ radius } {};
//	double getRadius() const;
//	double getArea() const;
//	double getRound() const;
//};
//
//
//int main() {
//	Circle c1{ 10.0 };
//	cout << "Circle 1" << endl;
//	cout << fixed;
//	cout.precision(2);
//	cout << "반지름: " << c1.getRadius() << endl;
//	cout << "넓이: " << c1.getArea() << endl;
//	cout << "둘레: " << c1.getRound() << endl << endl;
//
//	Circle c2{ 20.0 };
//	cout << "Circle 2" << endl;
//	cout << "반지름: " << c2.getRadius() << endl;
//	cout << "넓이: " << c2.getArea() << endl;
//	cout << "둘레: " << c2.getRound() << endl;
//}
//
//double Circle::getRadius() const{
//	return this->radius;
//}
//
//double Circle::getArea() const {
//	return pow(radius, 2) * PI;
//}
//double Circle::getRound() const {
//	return 2 * radius * PI;
//}

// ex2. id와 name - setter / getter
//class Student {
//private: 
//	int _id;
//public:
//	string _name;
//	
//	void setID(int id);
//
//	int getID() const;
//};
//
//int main() {
//	Student s1{};
//
//	s1.setID(1);
//	s1._name = "dlwlrma" ;
//
//	cout << s1.getID() << endl;
//	cout << s1._name;
//}
//
//void Student::setID(int id) {
//	if(id > 0) 
//		this->_id = id;
//}
//
//int Student::getID() const{
//	return _id;
//}

// ex3. id 캡슐화
//class Student {
//private:
//	int _id;
//	void makeID() {
//		_id += 12220000;
//	}
//public:
//	void setID(int id);
//	void getID();
//};
//
//int main() {
//	Student s1;
//	s1.setID(1234);
//	s1.getID();
//}
//
//void Student::setID(int id) {
//	if (id > 0)
//		this->_id = id;
//	makeID();
//}
//void Student::getID(){
//	cout << "id: " << this->_id;
//}

// ex4. constructor 사용 학생 정보
//class Student {
//private:
//	int _id;
//	string _name;
//public:
//	Student();
//	Student(int id, string name);
//	Student(const Student& origin);
//};
//
//int main() {
//	Student s1;
//	Student s2{ 1, "pby" };
//	Student s3{ s2 };
//}
//
//Student::Student() :
//	_id{ 0 }, _name{ "noname" } {
//	cout << "default constructor: " << _id << " " << _name << endl;
//}
//Student::Student(int id, string name) {
//	this->_id = id;
//	this->_name = name;
//	cout << "parameter constructor: " << _id << " " << _name << endl;
//}
//Student::Student(const Student& origin) {
//	this->_id = origin._id;
//	this->_name = origin._name;
//	cout << "copy constructor: " << _id << " " << _name << endl;
//}

// ex5. default constructor 예제1
//class Student {
//private: 
//	int _id;
//	string _name;
//public:
//	Student()
//		: _id{ 0 }, _name{ "noname" } {
//		cout << "default constructor: " << _id << " " << _name << endl;
//	}
//};
//
//int main() {
//	Student s1;
//	Student s2(); // function prototype으로 인식. <return type : Student> <parameter X>
//	Student s3{};
//}

// ex6. default constructor 예제2 - synthetic member function
//class Student {
//private: 
//	int _id = -858993460;
//	string _name;
//public: // constructor 없을 시에는 기본생성자 자동 생성
//	void getstudent();
//};
//
//int main() {
//	Student s1;
//	Student s2{};
//	s1.getstudent();
//	s2.getstudent();
//}
//
//void Student::getstudent() {
//	cout << "student: " << _id << " " << _name << endl;
//}

// ex7. parameter constructor - 예제1
//class Student {
//private:
//	int _id;
//	string _name;
//public:
//	Student(int id, string name);
//};
//
//int main() {
//	Student s1{ 1, "pby" };
//	Student s2{ 2, "wook" };
//}
//
//Student::Student(int id, string name) {
//	this->_id = id;
//	this->_name = name;
//	cout << "Parameter constructor: " << _id << " " << _name << endl;
//}

// ex8, parameter constructor 예제 2 (default constructor 함께)
//class Student {
//private:
//	int _id;
//	string _name;
//public:
//	Student();
//	Student(int id, string name);
//};
//
//int main() {
//	Student s1;
//	Student s2{ 1, "pby" };
//	Student s3{ 2, "wook" };
//}
//
//Student::Student()
//	: _id{ 0 }, _name{ "noname" } {
//	cout << "default constructor: " << _id << " " << _name << endl;
//};
//
//Student::Student(int id, string name)  {
//	this->_id = id;
//	this->_name = name;
//	cout << "parameter constructor: " << _id << " " << _name << endl;
//}

// ex9. copy constructor 예제1
//class Student {
//private: 
//	int _id;
//	string _name;
//public:
//	Student(int id, string name);
//	Student(const Student& origin);
//};
//
//int main() {
//	Student s1{ 1, "pby" };
//	Student s2{ s1 };
//}
//
//Student::Student(int id, string name)
//	: _id{ id }, _name{ name } {
//	cout << "patameter constructor: " << _id << " " << _name << endl;
//}
//Student::Student(const Student& origin) {
//	this->_id = origin._id;
//	this->_name = origin._name;
//	cout << "copy constructor: " << _id << " " << _name << endl;
//}

// ex10. copy constructor 예제2 - synthethc member function
//class Student {
//private:
//	int _id;
//	string _name;
//public: // copy constructor - synthetic member function으로 생성 - member 변수에만 저장 기능
//	Student(int id, string name);
//};
//
//int main() {
//	Student s1{ 1, "pby" };
//	Student s2{ s1 }; 
//}
//
//Student::Student(int id, string name) {
//	this->_id = id;
//	this->_name = name;
//	cout << "parameter constructor: " << _id << " " << _name << endl;
//
// 
// }

// ex11. Member initializer List
//class Student {
//private:
//	int _id;
//	string _name;
//public:
//	Student();
//	Student(int id, string name);
//	Student(const Student& origin);
//};
//
//int main() {
//	Student s1{};
//	Student s2{ 1, "pby" };
//	Student s3{ s2 };
//}
//
//Student::Student()
//	: _id{ 0 }, _name{ "noname" } {
//	cout << "default constructor: " << _id << " " << _name << endl;
//}
//
//Student::Student(int id, string name)
//	: _id{ id }, _name{ name } {
//	cout << "parameter constructor: " << _id << " " << _name << endl;
//
//}
//Student::Student(const Student& origin)
//	: _id{ origin._id }, _name{ origin._name } {
//	cout << "copy constructor: " << _id << " " << _name << endl;
//}

// ex12. Destructor
//class Student {
//private:
//	int _id;
//	string _name;
//public:
//	Student(int id, string name);
//	~Student(); // 메모리 저장방식 참고 - 순차적으로 저장 및 역순으로 소멸
//};
//
//int main() {
//	Student s1{ 1, "pby" };
//	Student s2{ 2, "wook" };
//}
//
//Student::Student(int id, string name)
//	: _name{ name }, _id{ id } {
//	cout << "paramter constructor: " << _id << " " << _name << endl;
//}
//Student::~Student() {
//	cout << "destructor: " << _id << " " << _name << endl;
//}

// ex13. destructor - synthetic member function
//class Student {
//private:
//	int _id;
//	string _name;
//public: // synthetic member function
//	Student(int id, string name);
//	// ~Student();
//};
//
//int main() {
//	Student s1{ 1, "pby" };
//	Student s2{ 2, "wook" };
//}
//
//Student::Student(int id, string name)
//	: _id{ id }, _name{ name } {
//	cout << "parameter constructor: " << _id << " " << _name << endl;
//}

// ex14. synthetic member function - default
//class Student {
//private:
//	int _id;
//	string _name;
//public: // default 로 error X
//	Student() = default;
//	Student(int id, string name);
//	Student(const Student& origin) = default;
//	~Student() = default;
//
//};
//
//int main() {
//	Student s1{};
//	Student s2{ 2, "wook" };
//	Student s3{ s2 };
//}
//
//Student::Student(int id, string name)
//	: _id{ id }, _name{ name } {
//	cout << "parameter constructor: " << _id << " " << _name << endl;
//}

// ex15. synthetic member function - delete 
//class Student {
//private:
//	int _id;
//	string _name;
//public: // delete 로 error O (복사가 안 되게 기능 등등)
//	Student() = delete;
//	Student(int id, string name);
//	Student(const Student& origin) = delete;
//	~Student() = delete; // destructor에  delete는 불가.
//};
//
//int main() {
//	Student s1{}; // error
//	Student s2{ 2, "wook" };
//	Student s3{ s2 }; // error
//}
//
//Student::Student(int id, string name)
//	: _id{ id }, _name{ name } {
//	cout << "parameter constructor: " << _id << " " << _name << endl;
//}

// ex16. Circle Class
//class Circle {
//private:
//	double radius;
//	double PI = 3.14;
//public:
//	Circle();
//	Circle(double radius);
//	Circle(const Circle& origin);
//	~Circle();
//	void getradius() const;
//	void getArea() const;
//	void getRound() const;
//};
//
//int main() {
//	Circle c1{ 5.2 };
//	c1.getradius();
//	c1.getArea();
//	c1.getRound();
//	cout << endl;
//
//	Circle c2{c1};
//	c2.getradius();
//	c2.getArea();
//	c2.getRound();
//	cout << endl;
//
//	Circle c3{};
//	c3.getradius();
//	c3.getArea();
//	c3.getRound();
//	cout << endl;
//}
//
//Circle::Circle()
//	: radius{ 0 } {
//	cout << "기본 생성자가 호출되었습니다." << endl;
//}
//Circle::Circle(double radius)
//	: radius{ radius } {
//	cout << "매개변수 생성자가 호출되었습니다." << endl;
//}
//Circle::Circle(const Circle& origin)
//	: radius{ origin.radius } {
//	cout << "복사 생성자가 호출되었습니다." << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자가 호출되었습니다. 반지름: " << radius << endl;
//}
//
//void Circle::getradius() const {
//	cout << "반지름: " << radius << endl;
//}
//void Circle::getArea() const {
//	cout << "넓이: " << pow(radius, 2) * PI << endl;
//}
//void Circle::getRound() const {
//	cout << "둘레: " << 2 * radius * PI << endl;
//}

// ex17. Random Integer Class
//class Randominterger {
//private:
//	int low;
//	int high;
//	int value;
//public:
//	Randominterger(int low, int high);
//	void printRandom();
//};
//
//int main() {
//	srand(time(0)); // class 내부에 넣으면 obj 생성이 빠르기에 똑같은 값
//	Randominterger r1{ 100, 200 };
//	r1.printRandom();
//	Randominterger r2{ 400, 600 };
//	r2.printRandom();
//	Randominterger r3{ 1500, 2000 };
//	r3.printRandom();
//	
//}
//
//Randominterger::Randominterger(int low, int high)
//	: low{ low }, high{ high } {
//	int temp = rand();
//	value = temp % (high - low + 1) + low; 
//	// 알고리즘 : (high - low + 1) 아래의 값으로 나오는 수를 low로 더하면 해당 사이의 값 사용
//}
//
//void Randominterger::printRandom() {
//	cout << low << "~" << high << "사이의 랜덤한 숫자: " << value << endl;
//}

// Program1
//class Rectangle {
//private:
//	double width;
//	double length;
//	double area;
//	double round;
//public:
//	Rectangle()
//		: width{ 0 }, length{ 0 }, area{ 0 }, round{ 0 } {};
//	Rectangle(double width, double length);
//	Rectangle(const Rectangle& origin);
//
//	void setRectangle(double width, double length);
//	void printRectangle();
//	double getArea();
//	double getRound();
//};
//
//Rectangle::Rectangle(double width, double length)
//	: width{ width }, length{ length }, area{ (width * length) }, round{ (width * 2 + length * 2) } {
//	if (width <= 0 || length <= 0) {
//		area = 0;
//		round = 0;
//		cout << "Rectangle 객체를 생성할 수 없습니다." << endl;
//
//	}
//}
//Rectangle::Rectangle(const Rectangle& origin)
//	: width{ origin.width }, length{ origin.length }, area{ (origin.width * origin.length) }, round{ (origin.width * 2 + origin.length * 2) } {
//	if (width <= 0 || length <= 0) {
//		area = 0;
//		round = 0;
//	}
//}
//void Rectangle::setRectangle(double width, double length) {
//	this->width = width;
//	this->length = length;
//	area = width * length;
//	round = width * 2 + length * 2;
//	if (width <= 0 || length <= 0) {
//		area = 0;
//		round = 0;
//		cout << "Rectangle 객체를 생성할 수 없습니다." << endl;
//	}
//}
//void Rectangle::printRectangle() {
//	if (width <= 0 || length <= 0)
//		cout << "0 x 0" << endl;
//	else
//		cout << width << " x " << length << endl;
//}
//double Rectangle::getArea() {
//	return area;
//}
//double Rectangle::getRound() {
//	return round;
//}
//
//int main() {
//	double width1, length1, width2, length2;
//	cout << "사각형1 가로: ";
//	cin >> width1;
//	cout << "사각형1 세로: ";
//	cin >> length1;
//	Rectangle r1{ width1, length1 };
//	cout << "\n사각형1: ";
//	r1.printRectangle();
//	cout << "넓이: " << r1.getArea() << endl;
//	cout << "둘레: " << r1.getRound() << endl;
//
//	cout << "\n사각형2 가로: ";
//	cin >> width2;
//	cout << "사각형2 세로: ";
//	cin >> length2;
//	Rectangle r2{};
//	r2.setRectangle(width2, length2);
//	cout << "\n사각형2: ";
//	r2.printRectangle();
//	cout << "넓이: " << r2.getArea() << endl;
//	cout << "둘레: " << r2.getRound() << endl;
//	
//	Rectangle r3{ r1 };
//	cout << "\n사각형3: ";
//	r3.printRectangle();
//	cout << "넓이: " << r3.getArea() << endl;
//	cout << "둘레: " << r3.getRound() << endl;
//}

// Program2
//#include <ctime>
//class Time {
//private:
//	int hours;
//	int minutes;
//	int seconds;
//	void normalize() {
//		if (seconds > 59) {
//			seconds = 0;
//			minutes++;
//		}		
//		if (minutes > 59) {
//			minutes = 0;
//			hours++;
//		}		
//		if (hours > 23) {
//			hours = 0;
//		}
//	}
//public:
//	Time(int hours, int minutes, int seconds)
//		: hours{ hours }, minutes{ minutes }, seconds{ seconds } {};
//	void tick() {
//		seconds++;
//		normalize();
//	}
//	void print() {
//		cout << hours << ":" << minutes << ":" << seconds << endl;
//	}
//};
//
//int main() { // 알고리즘 중요. (현재 시간 구하기)
//	int temp = time(0) + 9 * 3600; 
//	int seconds = temp % 60;
//	int minutes = temp % 3600 / 60;
//	int hours = temp / 3600 % 24;
//	Time time{ hours, minutes, seconds };
//	cout << "현재 시간: ";
//	time.print();
//
//	cout << "100000초 지나면: ";
//	for (int i = 0; i < 100'000; i++)
//		time.tick();
//	time.print();
//}#include <iostream>

// Program3
//class Visitors {
//private: 
//	int people;
//public:
//	Visitors()
//		: people{ 0 } {};
//	void sumvisitors(int n){
//		if (n >= 0)
//			people += n;
//	}
//	~Visitors() {
//		cout << "오늘의 입장객 수는 " << people <<"명 입니다.";
//	}
//};
//
//int main() {
//	int people;
//	Visitors v1{};
//	cout << "입장한 사람 수를 기록해주세요: ";
//	while (cin >> people) {
//		v1.sumvisitors( people );
//		cout << "입장한 사람 수를 기록해주세요(영업 종료시 EOF): ";
//	}
//}

// Program04
//class Stats {
//private:
//	int min;
//	int max;
//	int size; // cnt 용도
//	int total;
//public:
//	Stats();
//	void addNumber(int num);
//	int getMin();
//	int getMax();
//	int getTotal();
//	double getAverage();
//};
//
//Stats::Stats()
//	: min {0}, max{ 0 }, size{ 0 }, total{ 0 }{}
//void Stats::addNumber(int num) {
//	if (num < 10 && num > -10) {
//		return;
//	}
//	if (size == 0) {
//		this->min = num;
//		this->max = num;
//	}
//	if (size >= 1) {
//		if (max < num)
//			max = num;
//		if (min > num)
//			min = num;
//	}
//	total += num;
//	size++;
//}
//int Stats::getMin() {
//	return min;
//}
//int Stats::getMax() {
//	return max;
//}
//int Stats::getTotal() {
//	return total;
//}
//double Stats::getAverage() {
//	return total / static_cast<double>(size);
//}
//
//int main() {
//	int n, num = 0;
//	cout << "숫자의 개수를 입력해주세요: ";
//	cin >> n;
//	Stats s1{};
//	for (int i = 1; i <= n; i++) {
//		cout << i << "번째 숫자를 입력해 주세요: ";
//		cin >> num;
//		s1.addNumber(num);
//	}
//	cout << "\n최소값: " << s1.getMin();
//	cout << "\n최댓값: " << s1.getMax();
//	cout << "\n총합: " << s1.getTotal();
//	cout << "\n평균: " << s1.getAverage();
//}

// Program5
//class Score {
//private: 
//	string name;
//	int win, draw, lose;
//public:
//	Score(string n, int w, int d, int l);
//	void printRecords() const;
//	double getPoint() const;
//	string getName() const;
//};
//
//Score::Score(string n, int w, int d, int l)
//	: name{ n }, win{ w }, draw{ d }, lose{ l } {}
//
//void Score::printRecords() const{
//	cout << "\n이름: " << name;
//	cout << "\n역대 전적: " << win << "승 " << draw << "무 " << lose << "패";
//	cout << "\n승점: " << getPoint() << "점";
//}
//double Score::getPoint() const{
//	return win + draw * 0.5;
//}
//string Score::getName() const {
//	return name;
//}
//
//int main() {
//	string name;
//	int win, draw, lose;
//	cout << "이름을 입력해 주세요: ";
//	cin >> name;
//	cout << "승리 경기 수를 입력해 주세요: ";
//	cin >> win;
//	cout << "무승부 경기 수를 입력해 주세요: ";
//	cin >> draw;
//	cout << "패배 경기 수를 입력해 주세요: ";
//	cin >> lose;
//	Score s1{ name, win, draw, lose };
//
//	cout << "\n이름을 입력해 주세요: ";
//	cin >> name;
//	cout << "승리 경기 수를 입력해 주세요: ";
//	cin >> win;
//	cout << "무승부 경기 수를 입력해 주세요: ";
//	cin >> draw;
//	cout << "패배 경기 수를 입력해 주세요: ";
//	cin >> lose;
//	Score s2{ name, win, draw, lose };
//
//	s1.printRecords();
//	cout << endl;
//	s2.printRecords();
//	cout << endl;
//	if (s1.getPoint() < s2.getPoint())
//		cout << endl << s2.getName() << "선수의 승점이 " << s1.getName() << "선수의 승점보다 높습니다.";
//	else if (s1.getPoint() > s2.getPoint())
//		cout << endl << s1.getName() << "선수의 승점이 " << s2.getName() << "선수의 승점보다 높습니다.";
//	else
//		cout << endl << s1.getName() << "선수의 승점과 " << s2.getName() << "선수의 승점이 같습니다.";
//}

//Program6
//#include <cmath>
//class Qfunc {
//private:
//	int a, b, c;
//public:
//	Qfunc(int a, int b, int c)
//		: a{ a }, b{ b }, c{ c } {}
//	int getA() { return a; }
//	int getB() { return b; }
//	int getC() { return c; }
//	void printExpression() {
//		cout << a << "x^2 + " << b << "x + " << c <<"의 ";
//		printRoot();
//	}
//	void printRoot() {
//		if (pow(b, 2) - 4 * a * c == 0) {
//			cout << "근은 " << -b / (2 * a) << "입니다." << endl;
//		}
//		else if (pow(b, 2) - 4 * a * c > 0) {
//			cout << "근은 " << (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) 
//				<<  "와(과) " << (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << "입니다." << endl;
//		}
//		else {
//			cout << "근이 존재하지 않습니다." << endl;
//		}
//	}
//};
//
//int main() {
//	int a, b, c;
//	cout << "이차함수 1의 계수들을 입력해주세요: ";
//	cin >> a >> b >> c;
//	Qfunc q1{ a, b, c };
//	cout << "이차함수 2의 계수들을 입력해주세요: ";
//	cin >> a >> b >> c;
//	Qfunc q2{ a, b, c };
//	Qfunc q3{ (q1.getA() + q2.getA()), (q1.getB() + q2.getB()), (q1.getC() + q2.getC()) };
//	cout << "함수1: ";
//	q1.printExpression();
//	cout << "함수2: ";
//	q2.printExpression();
//	cout << "함수3: ";
//	q3.printExpression();
//}

// Program7
//class Rectangle {
//private:
//	int width, length;
//public:
//	Rectangle(int w, int l);
//	Rectangle(const Rectangle& origin);
//	int getWidth() { return width; }
//	int getlength() { return length; }
//	void printRectangle();
//};
//
//Rectangle::Rectangle(int w, int l)
//	: width{ w }, length{ l } {};
//
//Rectangle::Rectangle(const Rectangle& origin)
//	: width{31}, length{origin.length}{
//	cout << "복사된 사각형- 가로:" << width << " 세로:" << length << endl;
// }
//
//void Rectangle::printRectangle() {
//	cout << "가로: " << width << endl << "세로: " << length << endl << "넓이: " << width * length << endl;
//}
//
//int main() {
//	int w, l;
//	cout << "Rectangle 1의 가로와 세로 길이를 입력해 주세요: ";
//	cin >> w >> l;
//	Rectangle r1{ w, l };
//	Rectangle r2{ r1 };
//	Rectangle r3{ r1.getWidth() * 2, r1.getlength() * 3 };
//	
//	cout << "\nRectangle 1의 정보" << endl;
//	r1.printRectangle();
//	cout << "\nRectangle 1의 정보" << endl;
//	r2.printRectangle();
//	cout << "\nRectangle 1의 정보" << endl;
//	r3.printRectangle();
//}

// Program8
//class Car {
//private:
//	int speed;
//public:
//	Car(): speed{ 0 } {}
//	void calculate(string n) {
//		if (n == "accelerate") {
//			speed += 10;
//		}
//		else if (n == "decelerate") {
//			speed -= 10;
//			if (speed <= 0) {
//				speed = 0;
//			}
//		}
//	}
//	int printSpeed() const{
//		return speed;
//	}
//};
//
//int main() {
//	string n;
//	Car c1;
//	while (n !=  "-1") {
//		cout << "명령을 입력하세요 (accelerate, decelerate, speed): ";
//		cin >> n;
//		if (n == "speed") {
//			cout << "현재 속도: " << c1.printSpeed() << "km/h" << endl;
//		}
//		else if (n == "accelerate" || n == "decelerate") {
//			c1.calculate(n);
//		}
//	}
//}

// ** 중첩 class 중요!!
// Program9
//class Vector {
//private:
//	int x, y;
//public:
//	Vector(int x, int y);
//	int getX() const {return x;}
//	int getY() const {return y;}
//	Vector add(const Vector& origin) const;
//	Vector subtract(const Vector& origin) const;
//	~Vector();
//};
//
//int main() {
//	int x, y;
//	cout << "첫 번째 벡터를 입력하세요: ";
//	cin >> x >> y;
//	Vector v1{ x ,y };
//
//	cout << "두 번째 벡터를 입력하세요: ";
//	cin >> x >> y;
//	Vector v2{ x ,y };
//
//	cout << endl;
//	Vector v3 = v1.add(v2);
//	cout << "v1 + v2 = (" << v3.getX() << ", " << v3.getY() << ")" << endl;
//
//	cout << endl;
//	Vector v4 = v1.subtract(v2);
//	cout << "v1 - v2 = (" << v4.getX() << ", " << v4.getY() << ")" << endl;
//}
//
//Vector::Vector(int x, int y)
//	: x{ x }, y{y} {
//	cout << "벡터 (" << x << ", " << y << ") 가 생성되었습니다." << endl;
//}
//Vector Vector::add(const Vector& origin) const{
//	int x = this->x + origin.x;
//	int y = this->y + origin.y;
//	Vector result(x, y);
//	return result;
//
//}
//Vector Vector::subtract(const Vector& origin) const{
//	int x = this->x - origin.x;
//	int y = this->y - origin.y;
//	Vector result(x, y);
//	return result;
//}
//Vector::~Vector() {
//	cout << "\n벡터 (" << x << ", " << y << ") 가 소멸되었습니다.";
//}

// Program10
//#include <cmath>
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point() {}
//	Point(int x, int y)
//		: x{ x }, y{ y } {
//		cout << "(" << this->x << ", " << this->y << ") 점이 생성되었습니다." << endl;
//	}
//	int getX () {
//		return x;
//	}
//	int getY() {
//		return y;
//	}
//};
//
//class Line {
//private:
//	Point _p1, _p2;
//	double length;
//public:
//	Line(Point p1 = Point{ 0,0 }, Point p2 = Point{ 0,0 }) 
//		: _p1{ p1 }, _p2{ p2 }, length{ 1 } {
//		cout << "(" << p1.getX() << ", " << p1.getY() << ") 와 (" << p2.getX() << ", " << p2.getY() <<
//			")를 이은 직선이 생성되었습니다." << endl;
//		length = sqrt(pow(_p2.getX() - _p1.getX(), 2) + pow(_p2.getY() - _p1.getY(), 2));
//	}
//	double getLength() const {
//		return length;
//	};
//};
//
//int main() {
//	int x1, x2, y1, y2;
//	cout << "첫 번째 점의 x좌표와 y좌표를 입력하세요: ";
//	cin >> x1 >> y1;
//	cout << "두 번째 점의 x좌표와 y좌표를 입력하세요: ";
//	cin >> x2 >> y2;
//	Point p1{ x1, y1 };
//	Point p2{ x2, y2 };
//
//	cout << endl;
//	Line l1{ p1, p2 };
//	cout << "두 점 사이의 직선의 길이는 " << l1.getLength() << "입니다.";
//}

// Program11
//class ShadowPartner {
//private:
//	double power, health, mana;
//public:
//	ShadowPartner(int p, int h, int m)
//		: power{ p * 0.7 }, health{ h * 0.7 }, mana{ m * 0.7 } {
//		cout << "쉐도우 파트너의 정보입니다. 공격력: " << power << ", 체력: " << health << ", 마나: " << mana << endl;
//	}
//	~ShadowPartner() {
//		cout << "쉐도우 파트너가 소멸되었습니다.";
//	}
//};
//
//class NightLord {
//private:
//	int power, health, mana;
//public:
//	NightLord(int p, int h, int m)
//		: power{p}, health {h}, mana{m} {}
//	ShadowPartner createShadowPartner(){
//		cout << "쉐도우 파트너가 생성되었습니다." << endl;
//		return ShadowPartner{power, health, mana};
//	}
//};
//
//
//int main() {
//	int power, health, mana;
//	cout << "나이트로드의 공격력을 입력하세요: ";
//	cin >> power;
//	cout << "나이트로드의 체력을 입력하세요: ";
//	cin >> health;
//	cout << "나이트로드의 마나를 입력하세요: ";
//	cin >> mana;
//	cout << endl;
//	NightLord nightLord{power, health, mana};
//	ShadowPartner shadowPartner = nightLord.createShadowPartner();
//}

 // Program12
//#include <ctime>
//class Pokemon {
//private:
//	string _name;
//	int _level, _attack, _hp;
//public: 
//	Pokemon(string name, int level, int attack) : _name{ name }, _level{ level }, _attack{ attack }, _hp{level * 50} {}
//	~Pokemon() { cout << endl << getName() << " 포켓몬이 소멸합니다."; };
//	void setHP(int hp) { _hp = (hp >= 0) ? hp : 0; };
//	string getName() const { return _name; };
//	int getHP() const { return _hp; };
//	void attackOther ( Pokemon& other);
//};
//
//void Pokemon::attackOther(Pokemon& other) {
//	cout << getName() << "이(가) " << other.getName() << "을(를) 공격합니다." << endl;
//	int damage = (rand() % 10 + 1) * _attack;
//	other.setHP(other.getHP() - damage); 
//	cout << other.getName() << "의 남은 체력: " << other.getHP() << endl;
//}
//
//int main() {
//	srand(time(0));
//	Pokemon p1("피카츄", 10, 20);
//	Pokemon p2("꼬부기", 15, 15);
//
//	while (p1.getHP() > 0 && p2.getHP() > 0) {
//		p1.attackOther(p2);
//		if (p1.getHP() <= 0) {
//			cout << p1.getName() << "이 쓰러졌습니다.";
//			break;
//		}
//		p2.attackOther(p1);
//		if (p2.getHP() <= 0) {
//			cout << p2.getName() << "이 쓰러졌습니다.";
//			break;
//		}
//	}
//}