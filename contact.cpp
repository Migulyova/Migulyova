#include "contact.h"
#include <string>
#include <iostream>

using namespace std;

Contact::Contact() {}
Contact::Contact(string fio, int age, string phone) {
	Fio = fio;
	Age = age;
	PhoneNumber = phone;
}

const string Contact::getFio() { return Fio; }
const int Contact::getAge() { return Age; }
const string Contact::getPhoneNumber() { return PhoneNumber; }

const void Contact::print() {
	cout << Fio << " " << Age << " " << PhoneNumber << endl;
}
