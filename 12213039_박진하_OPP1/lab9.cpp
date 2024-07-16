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
//	string s3 = s2.substr(4, 7); // 4 ��° ���ں��� 7�� ���ڸ� ���
//	cout << s3 << endl;
//}

// ex1. radius�� area, round ���ϱ�
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
//	cout << "������: " << c1.getRadius() << endl;
//	cout << "����: " << c1.getArea() << endl;
//	cout << "�ѷ�: " << c1.getRound() << endl << endl;
//
//	Circle c2{ 20.0 };
//	cout << "Circle 2" << endl;
//	cout << "������: " << c2.getRadius() << endl;
//	cout << "����: " << c2.getArea() << endl;
//	cout << "�ѷ�: " << c2.getRound() << endl;
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

// ex2. id�� name - setter / getter
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

// ex3. id ĸ��ȭ
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

// ex4. constructor ��� �л� ����
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

// ex5. default constructor ����1
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
//	Student s2(); // function prototype���� �ν�. <return type : Student> <parameter X>
//	Student s3{};
//}

// ex6. default constructor ����2 - synthetic member function
//class Student {
//private: 
//	int _id = -858993460;
//	string _name;
//public: // constructor ���� �ÿ��� �⺻������ �ڵ� ����
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

// ex7. parameter constructor - ����1
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

// ex8, parameter constructor ���� 2 (default constructor �Բ�)
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

// ex9. copy constructor ����1
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

// ex10. copy constructor ����2 - synthethc member function
//class Student {
//private:
//	int _id;
//	string _name;
//public: // copy constructor - synthetic member function���� ���� - member �������� ���� ���
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
//	~Student(); // �޸� ������ ���� - ���������� ���� �� �������� �Ҹ�
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
//public: // default �� error X
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
//public: // delete �� error O (���簡 �� �ǰ� ��� ���)
//	Student() = delete;
//	Student(int id, string name);
//	Student(const Student& origin) = delete;
//	~Student() = delete; // destructor��  delete�� �Ұ�.
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
//	cout << "�⺻ �����ڰ� ȣ��Ǿ����ϴ�." << endl;
//}
//Circle::Circle(double radius)
//	: radius{ radius } {
//	cout << "�Ű����� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
//}
//Circle::Circle(const Circle& origin)
//	: radius{ origin.radius } {
//	cout << "���� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
//}
//Circle::~Circle() {
//	cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�. ������: " << radius << endl;
//}
//
//void Circle::getradius() const {
//	cout << "������: " << radius << endl;
//}
//void Circle::getArea() const {
//	cout << "����: " << pow(radius, 2) * PI << endl;
//}
//void Circle::getRound() const {
//	cout << "�ѷ�: " << 2 * radius * PI << endl;
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
//	srand(time(0)); // class ���ο� ������ obj ������ �����⿡ �Ȱ��� ��
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
//	// �˰��� : (high - low + 1) �Ʒ��� ������ ������ ���� low�� ���ϸ� �ش� ������ �� ���
//}
//
//void Randominterger::printRandom() {
//	cout << low << "~" << high << "������ ������ ����: " << value << endl;
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
//		cout << "Rectangle ��ü�� ������ �� �����ϴ�." << endl;
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
//		cout << "Rectangle ��ü�� ������ �� �����ϴ�." << endl;
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
//	cout << "�簢��1 ����: ";
//	cin >> width1;
//	cout << "�簢��1 ����: ";
//	cin >> length1;
//	Rectangle r1{ width1, length1 };
//	cout << "\n�簢��1: ";
//	r1.printRectangle();
//	cout << "����: " << r1.getArea() << endl;
//	cout << "�ѷ�: " << r1.getRound() << endl;
//
//	cout << "\n�簢��2 ����: ";
//	cin >> width2;
//	cout << "�簢��2 ����: ";
//	cin >> length2;
//	Rectangle r2{};
//	r2.setRectangle(width2, length2);
//	cout << "\n�簢��2: ";
//	r2.printRectangle();
//	cout << "����: " << r2.getArea() << endl;
//	cout << "�ѷ�: " << r2.getRound() << endl;
//	
//	Rectangle r3{ r1 };
//	cout << "\n�簢��3: ";
//	r3.printRectangle();
//	cout << "����: " << r3.getArea() << endl;
//	cout << "�ѷ�: " << r3.getRound() << endl;
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
//int main() { // �˰��� �߿�. (���� �ð� ���ϱ�)
//	int temp = time(0) + 9 * 3600; 
//	int seconds = temp % 60;
//	int minutes = temp % 3600 / 60;
//	int hours = temp / 3600 % 24;
//	Time time{ hours, minutes, seconds };
//	cout << "���� �ð�: ";
//	time.print();
//
//	cout << "100000�� ������: ";
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
//		cout << "������ ���尴 ���� " << people <<"�� �Դϴ�.";
//	}
//};
//
//int main() {
//	int people;
//	Visitors v1{};
//	cout << "������ ��� ���� ������ּ���: ";
//	while (cin >> people) {
//		v1.sumvisitors( people );
//		cout << "������ ��� ���� ������ּ���(���� ����� EOF): ";
//	}
//}

// Program04
//class Stats {
//private:
//	int min;
//	int max;
//	int size; // cnt �뵵
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
//	cout << "������ ������ �Է����ּ���: ";
//	cin >> n;
//	Stats s1{};
//	for (int i = 1; i <= n; i++) {
//		cout << i << "��° ���ڸ� �Է��� �ּ���: ";
//		cin >> num;
//		s1.addNumber(num);
//	}
//	cout << "\n�ּҰ�: " << s1.getMin();
//	cout << "\n�ִ�: " << s1.getMax();
//	cout << "\n����: " << s1.getTotal();
//	cout << "\n���: " << s1.getAverage();
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
//	cout << "\n�̸�: " << name;
//	cout << "\n���� ����: " << win << "�� " << draw << "�� " << lose << "��";
//	cout << "\n����: " << getPoint() << "��";
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
//	cout << "�̸��� �Է��� �ּ���: ";
//	cin >> name;
//	cout << "�¸� ��� ���� �Է��� �ּ���: ";
//	cin >> win;
//	cout << "���º� ��� ���� �Է��� �ּ���: ";
//	cin >> draw;
//	cout << "�й� ��� ���� �Է��� �ּ���: ";
//	cin >> lose;
//	Score s1{ name, win, draw, lose };
//
//	cout << "\n�̸��� �Է��� �ּ���: ";
//	cin >> name;
//	cout << "�¸� ��� ���� �Է��� �ּ���: ";
//	cin >> win;
//	cout << "���º� ��� ���� �Է��� �ּ���: ";
//	cin >> draw;
//	cout << "�й� ��� ���� �Է��� �ּ���: ";
//	cin >> lose;
//	Score s2{ name, win, draw, lose };
//
//	s1.printRecords();
//	cout << endl;
//	s2.printRecords();
//	cout << endl;
//	if (s1.getPoint() < s2.getPoint())
//		cout << endl << s2.getName() << "������ ������ " << s1.getName() << "������ �������� �����ϴ�.";
//	else if (s1.getPoint() > s2.getPoint())
//		cout << endl << s1.getName() << "������ ������ " << s2.getName() << "������ �������� �����ϴ�.";
//	else
//		cout << endl << s1.getName() << "������ ������ " << s2.getName() << "������ ������ �����ϴ�.";
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
//		cout << a << "x^2 + " << b << "x + " << c <<"�� ";
//		printRoot();
//	}
//	void printRoot() {
//		if (pow(b, 2) - 4 * a * c == 0) {
//			cout << "���� " << -b / (2 * a) << "�Դϴ�." << endl;
//		}
//		else if (pow(b, 2) - 4 * a * c > 0) {
//			cout << "���� " << (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) 
//				<<  "��(��) " << (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << "�Դϴ�." << endl;
//		}
//		else {
//			cout << "���� �������� �ʽ��ϴ�." << endl;
//		}
//	}
//};
//
//int main() {
//	int a, b, c;
//	cout << "�����Լ� 1�� ������� �Է����ּ���: ";
//	cin >> a >> b >> c;
//	Qfunc q1{ a, b, c };
//	cout << "�����Լ� 2�� ������� �Է����ּ���: ";
//	cin >> a >> b >> c;
//	Qfunc q2{ a, b, c };
//	Qfunc q3{ (q1.getA() + q2.getA()), (q1.getB() + q2.getB()), (q1.getC() + q2.getC()) };
//	cout << "�Լ�1: ";
//	q1.printExpression();
//	cout << "�Լ�2: ";
//	q2.printExpression();
//	cout << "�Լ�3: ";
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
//	cout << "����� �簢��- ����:" << width << " ����:" << length << endl;
// }
//
//void Rectangle::printRectangle() {
//	cout << "����: " << width << endl << "����: " << length << endl << "����: " << width * length << endl;
//}
//
//int main() {
//	int w, l;
//	cout << "Rectangle 1�� ���ο� ���� ���̸� �Է��� �ּ���: ";
//	cin >> w >> l;
//	Rectangle r1{ w, l };
//	Rectangle r2{ r1 };
//	Rectangle r3{ r1.getWidth() * 2, r1.getlength() * 3 };
//	
//	cout << "\nRectangle 1�� ����" << endl;
//	r1.printRectangle();
//	cout << "\nRectangle 1�� ����" << endl;
//	r2.printRectangle();
//	cout << "\nRectangle 1�� ����" << endl;
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
//		cout << "����� �Է��ϼ��� (accelerate, decelerate, speed): ";
//		cin >> n;
//		if (n == "speed") {
//			cout << "���� �ӵ�: " << c1.printSpeed() << "km/h" << endl;
//		}
//		else if (n == "accelerate" || n == "decelerate") {
//			c1.calculate(n);
//		}
//	}
//}

// ** ��ø class �߿�!!
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
//	cout << "ù ��° ���͸� �Է��ϼ���: ";
//	cin >> x >> y;
//	Vector v1{ x ,y };
//
//	cout << "�� ��° ���͸� �Է��ϼ���: ";
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
//	cout << "���� (" << x << ", " << y << ") �� �����Ǿ����ϴ�." << endl;
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
//	cout << "\n���� (" << x << ", " << y << ") �� �Ҹ�Ǿ����ϴ�.";
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
//		cout << "(" << this->x << ", " << this->y << ") ���� �����Ǿ����ϴ�." << endl;
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
//		cout << "(" << p1.getX() << ", " << p1.getY() << ") �� (" << p2.getX() << ", " << p2.getY() <<
//			")�� ���� ������ �����Ǿ����ϴ�." << endl;
//		length = sqrt(pow(_p2.getX() - _p1.getX(), 2) + pow(_p2.getY() - _p1.getY(), 2));
//	}
//	double getLength() const {
//		return length;
//	};
//};
//
//int main() {
//	int x1, x2, y1, y2;
//	cout << "ù ��° ���� x��ǥ�� y��ǥ�� �Է��ϼ���: ";
//	cin >> x1 >> y1;
//	cout << "�� ��° ���� x��ǥ�� y��ǥ�� �Է��ϼ���: ";
//	cin >> x2 >> y2;
//	Point p1{ x1, y1 };
//	Point p2{ x2, y2 };
//
//	cout << endl;
//	Line l1{ p1, p2 };
//	cout << "�� �� ������ ������ ���̴� " << l1.getLength() << "�Դϴ�.";
//}

// Program11
//class ShadowPartner {
//private:
//	double power, health, mana;
//public:
//	ShadowPartner(int p, int h, int m)
//		: power{ p * 0.7 }, health{ h * 0.7 }, mana{ m * 0.7 } {
//		cout << "������ ��Ʈ���� �����Դϴ�. ���ݷ�: " << power << ", ü��: " << health << ", ����: " << mana << endl;
//	}
//	~ShadowPartner() {
//		cout << "������ ��Ʈ�ʰ� �Ҹ�Ǿ����ϴ�.";
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
//		cout << "������ ��Ʈ�ʰ� �����Ǿ����ϴ�." << endl;
//		return ShadowPartner{power, health, mana};
//	}
//};
//
//
//int main() {
//	int power, health, mana;
//	cout << "����Ʈ�ε��� ���ݷ��� �Է��ϼ���: ";
//	cin >> power;
//	cout << "����Ʈ�ε��� ü���� �Է��ϼ���: ";
//	cin >> health;
//	cout << "����Ʈ�ε��� ������ �Է��ϼ���: ";
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
//	~Pokemon() { cout << endl << getName() << " ���ϸ��� �Ҹ��մϴ�."; };
//	void setHP(int hp) { _hp = (hp >= 0) ? hp : 0; };
//	string getName() const { return _name; };
//	int getHP() const { return _hp; };
//	void attackOther ( Pokemon& other);
//};
//
//void Pokemon::attackOther(Pokemon& other) {
//	cout << getName() << "��(��) " << other.getName() << "��(��) �����մϴ�." << endl;
//	int damage = (rand() % 10 + 1) * _attack;
//	other.setHP(other.getHP() - damage); 
//	cout << other.getName() << "�� ���� ü��: " << other.getHP() << endl;
//}
//
//int main() {
//	srand(time(0));
//	Pokemon p1("��ī��", 10, 20);
//	Pokemon p2("���α�", 15, 15);
//
//	while (p1.getHP() > 0 && p2.getHP() > 0) {
//		p1.attackOther(p2);
//		if (p1.getHP() <= 0) {
//			cout << p1.getName() << "�� ���������ϴ�.";
//			break;
//		}
//		p2.attackOther(p1);
//		if (p2.getHP() <= 0) {
//			cout << p2.getName() << "�� ���������ϴ�.";
//			break;
//		}
//	}
//}