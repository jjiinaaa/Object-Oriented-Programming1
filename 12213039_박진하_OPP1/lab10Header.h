#pragma once
using namespace std;

// Program01
//class Account {
//private:
//	int balance;
//	int money;
//	static int cnt;
//	int name = 100001;
//public:
//	Account(int p);
//	void deposit(int p);
//	void withdraw(int p);
//	~Account();
//};

// Program09 - 중요! class 내에 배열 이용
//class Card {
//private:
//	int cnt = 0;
//	int sumPrice = 0;
//	int price[100];
//public:
//	void setCard(int p);
//	int getCnt();
//	int getsumPrice();
//	void printCard();
//};

// Program11
//class Rectangle {
//private: 
//	int width, length;
//	static int cnt;
//public:
//	Rectangle();
//	Rectangle(int w, int l);
//	static int getCnt();
//	int getWidth();
//	int getLength();
//};

// Program12
//class Student {
//private:
//	int score[10];
//	int cnt = 0;
//	double average = 0;
//public:
//	Student();
//	void setScore(int s);
//	double averageScore();
//};

// Program13
//#include <string>
//
//class Book {
//private:
//	int bookNumber, publicationYear;
//	string title, author, publisher, genre;
//	bool borrowed;
//public:
//	Book();
//	Book(int bookNumber, string title, string author, string publisher, int publicationYear, string genre);
//	void borrowBook();
//	void returnBook();
//	int getBookNumber() const;
//	string getTitle() const;
//	bool isBorrowed() const;
//	void printBookInfo() const;
//};
//class Library {
//private:
//	Book books[10];
//	int numBooks = 0;
//public:
//	void addBook(Book book);
//	void borrowBook(int bookNumber);
//	void returnBook(int bookNumber);
//	void printBorrowedBooks();
//};