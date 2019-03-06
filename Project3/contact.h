#pragma once
#include <string>
using namespace std;

class Contact {
private:
	string Fio;
	int Age;
	string PhoneNumber;
public:
	Contact();
	Contact(string fio, int age, string phone);
	
	const string getFio();
	const int getAge();
	const string getPhoneNumber();

	const void print();
};
