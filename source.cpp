#include "singleton.h"
#include "contact.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char Answer = 'y';
	int field, sortOrd, count = 0, _age;
	string _fio, _phone;
	Singleton& AdrBook = Singleton::instance();
	
	while (Answer == 'y') {
		cout << "Добавить контакт? [y/n]: ";
		cin >> Answer;
		if (Answer == 'y') {
			cout << "Введите ФИО контакта: ";
			cin >> _fio;
			cout << "Введите возраст контакта: ";
			cin >> _age;
			cout << "Введите номер телефона контакта: ";
			cin >> _phone;
			
			AdrBook.add(Contact(_fio, _age, _phone));
			count++;
			continue;
		}
		else if (Answer == 'n')
			break;
		else {
			cout << "Ошибка ввода!" << endl;
			break;
		}
	}

	if (count > 0) {
		cout << "По какому полю отсортировать? [1-ФИО, 2-Возраст]: ";
		cin >> field;
		cout << "Порядок сортировки? [1-По возрастанию, 2-По убыванию]: ";
		cin >> sortOrd;
		cout << endl << "ФИО | Возраст | Номер телефона" << endl << endl;
		AdrBook.sortAdrBook(field, sortOrd);
		cout << endl << "Всего контактов: " << count << endl;
	}
	else
		cout << "Контакты не были добавлены!" << endl;
	system("pause");
	return 0;
}