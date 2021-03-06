#include "func.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string file;
	unsigned char option;
	bool play = true;
	cout << "Это программа списка звонков." << endl
		<< "Для того чтобы создать нужен файл, содержащий таблицу звонков" << endl
		<< "Для его конкретной работы программы нужна таблица следующего типа:" << endl << endl
		<< "№ человека | От кого | Кому | Дата звонка(xx.xx.xx)"
		" | Время звонка (xx:xx) | Длительность(мин)"
		<< endl << endl;

	cout << "Напишите название файла, вместе с типом (name.txt):";
	cin >> file;
	fileFailTest(file);
	fileInput(file);

	while (play == true) {

		cout << "Выберите опцию, которая вам нужна и напишите ее цифру:\n"
			<< "1)Вывод полного списка.\n"
			<< "2)Удалить человека\n"
			<< "3)Добваить человека\n"
			<< "4)Вывод с даты по дату\n"
			<< "5)Сортировка по новизне\n"
			<< "6)Сортировка по длительности звонка\n"
			<< "7)Вывод человека, которому звонили\n"
			<< "8)Вывод человека, который звонил\n"
			<< "9)Выйти из программы\n"
			<< "Ваш выбор: ";
		cin >> option;
		fileWork(option, play);
	}
	return 0;
}
