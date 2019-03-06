//#pragma once
#include"contact.h"
#include <vector>

class Singleton
{
private:
	Singleton();  // конструктор недоступен
	~Singleton(); // и деструктор	
	// необходимо также запретить копирование и присваивание
	Singleton(Singleton const&) = delete;
	Singleton& operator= (Singleton const&) = delete;

	vector <Contact> AdressBook;
public:
	static Singleton& instance();
	void add(const Contact& contact);
	const void printDown();
	const void printUp();
	const void sortAdrBook(int Field, int SortOrder);
};