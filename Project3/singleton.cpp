#include "singleton.h"
#include <iostream>
#include <vector>

using namespace std;

Singleton::Singleton() { }  // конструктор недоступен
Singleton::~Singleton() { } // и деструктор

Singleton& Singleton::instance() {
	// согласно стандарту, этот код ленивый и потокобезопасный
	static Singleton s;
	return s;
}

void Singleton::add(const Contact& contact) {
	AdressBook.push_back(contact);
}

const void Singleton::printDown() {
	for (int i = 0; i < AdressBook.size(); i++)
		AdressBook[i].print();
}

const void Singleton::printUp() {
	for (int i = AdressBook.size() - 1; i >= 0; i--)
		AdressBook[i].print();
}

const void Singleton::sortAdrBook(int Field, int SortOrder) {
	if (Field == 1) {
		for (int i = 0; i < AdressBook.size() - 1; i++)
			for (int j = 0; j < AdressBook.size() - i - 1; j++) {
				if (AdressBook[j].getFio() > AdressBook[j + 1].getFio())
					swap(AdressBook[j], AdressBook[j + 1]);
			}
	}
	else if (Field == 2) {
		for (int i = 0; i < AdressBook.size() - 1; i++)
			for (int j = 0; j < AdressBook.size() - i - 1; j++) {
				if (AdressBook[j].getAge() > AdressBook[j + 1].getAge())
					swap(AdressBook[j], AdressBook[j + 1]);
			}
	}
	else {
		cout << "Поле указано неверно!" << endl;
		return;
	}

	if (SortOrder == 1)
		printDown();
	else if (SortOrder == 2)
		printUp();
	else {
		cout << "Порядок указан неверно!" << endl;
		return;
	}
}