#include <iostream>
#include "lab10Header.h"
using namespace std;

// Program01
//int Account::cnt{ 0 };
//
//Account::Account(int p)
//	: balance{ p } {
//	name += cnt;
//	cout << name << " ���� ����" << endl << "�ܾ�: " << balance << endl << endl;
//	cnt++;
//}
//void Account::deposit(int p) {
//	cout << "����: " << name << endl << "�Ա�: " << p << endl;
//	if (p == 0)
//		cout << "�Ա����" << endl;
//	balance += p;
//	cout << "�ܾ�: " << balance << endl << endl ;
//}
//void Account::withdraw(int p) {
//	cout << "����: " << name << endl << "���: " << p << endl;
//	if (p > balance) {
//		cout << "������" << endl << "�ܾ�: " << balance << endl << endl;
//	}
//	else {
//		balance -= p;
//		cout << "�ܾ�: " << balance << endl << endl;
//	}
//}
//Account::~Account() {
//	cout << name << " ���� ����" << endl;
//}

// Program09 - �߿�! class ���� �迭 �̿�
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
//	cout << "���� Ƚ��: " << getCnt() << "ȸ" << endl
//		<< "���� �ݾ�: " << Card::getsumPrice() << endl;
//	if (getCnt() > 0) {
//		cout << "���� ����" << endl;
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
//		cout << bookNumber << " / " << title << " / " << author << " / " << publisher << " / " << publicationYear << " / " << genre << " / " << "������" << endl;
//	}
//}
//
//void Library::addBook(Book book) {
//	books[numBooks++] = book;
//}
//void Library::borrowBook(int bookNumber) {
//	if (books[bookNumber - 1].isBorrowed() == false) {
//		cout << "å " << books[bookNumber - 1].getTitle() << "��/�� �����߽��ϴ�." << endl;
//		books[bookNumber - 1].borrowBook();
//	}
//}
//void Library::returnBook(int bookNumber) {
//	if (books[bookNumber - 1].isBorrowed() == true) {
//		cout << "å " << books[bookNumber - 1].getTitle() << "��/�� �ݳ��߽��ϴ�." << endl;
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