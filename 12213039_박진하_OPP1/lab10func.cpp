#include <iostream>
#include "lab10Header.h"
using namespace std;

// Program01
//int Account::cnt{ 0 };
//
//Account::Account(int p)
//	: balance{ p } {
//	name += cnt;
//	cout << name << " 계좌 생성" << endl << "잔액: " << balance << endl << endl;
//	cnt++;
//}
//void Account::deposit(int p) {
//	cout << "계좌: " << name << endl << "입금: " << p << endl;
//	if (p == 0)
//		cout << "입금취소" << endl;
//	balance += p;
//	cout << "잔액: " << balance << endl << endl ;
//}
//void Account::withdraw(int p) {
//	cout << "계좌: " << name << endl << "출금: " << p << endl;
//	if (p > balance) {
//		cout << "출금취소" << endl << "잔액: " << balance << endl << endl;
//	}
//	else {
//		balance -= p;
//		cout << "잔액: " << balance << endl << endl;
//	}
//}
//Account::~Account() {
//	cout << name << " 계좌 삭제" << endl;
//}

// Program09 - 중요! class 내에 배열 이용
//void Card::setCard(int p) {
//	price[cnt] = p;
//	sumPrice += p;
//	cnt++;
//}
//int Card::getCnt(){
//	return cnt;
//}
//int Card::getsumPrice(){
//	return sumPrice;
//}
//
//void Card::printCard() {
//	cout << "결제 횟수: " << getCnt() << "회" << endl
//		<< "결제 금액: " << Card::getsumPrice() << endl;
//	if (getCnt() > 0) {
//		cout << "결제 내역" << endl;
//		for (int i = 0; i < getCnt(); i++) {
//			cout << price[i] << endl;
//		}
//
//	}
//}

// Program11
//int Rectangle::cnt{ 0 };
//Rectangle::Rectangle() {};
//Rectangle::Rectangle(int w, int l)
//	: width{ w }, length{ l } {
//	cnt++;
//};
//int Rectangle::getCnt() {
//	return cnt;
//};
//int Rectangle::getWidth() {
//	return width;
//}
//int Rectangle::getLength() {
//	return length;
//}

// Program12
//Student::Student() {};
//void Student::setScore(int s) {
//	score[cnt++] = s;
//}
//double Student::averageScore() {
//	int sum = 0;
//	for (int i = 0; i < cnt; i++) {
//		sum += score[i];
//	}
//	return sum / static_cast<double>(cnt);
//}

// Program13
//Book::Book() {}
//Book::Book(int bookNumber, string title, string author, string publisher, int publicationYear, string genre)
//	: bookNumber{ bookNumber }, title{ title }, author{ author }, publisher{ publisher }, publicationYear{ publicationYear }, genre{ genre }, borrowed{ false } {
//}
//void Book::borrowBook() {
//	borrowed = true;
//}
//void Book::returnBook() {
//	borrowed = false;
//}
//int Book::getBookNumber() const {
//	return bookNumber;
//}
//string Book::getTitle() const {
//	return title;
//}
//bool Book::isBorrowed() const {
//	return borrowed;
//}
//void Book::printBookInfo() const {
//	if (borrowed == true) {
//		cout << bookNumber << " / " << title << " / " << author << " / " << publisher << " / " << publicationYear << " / " << genre << " / " << "대출중" << endl;
//	}
//}
//
//void Library::addBook(Book book) {
//	books[numBooks++] = book;
//}
//void Library::borrowBook(int bookNumber) {
//	if (books[bookNumber - 1].isBorrowed() == false) {
//		cout << "책 " << books[bookNumber - 1].getTitle() << "을/를 대출했습니다." << endl;
//		books[bookNumber - 1].borrowBook();
//	}
//}
//void Library::returnBook(int bookNumber) {
//	if (books[bookNumber - 1].isBorrowed() == true) {
//		cout << "책 " << books[bookNumber - 1].getTitle() << "을/를 반납했습니다." << endl;
//		books[bookNumber - 1].returnBook();
//	};
//}
//void Library::printBorrowedBooks() {
//	for (int i = 0; i < 3; i++) {
//		if (books[i].isBorrowed() == true) {
//			books[i].printBookInfo();
//		}
//	}
//}