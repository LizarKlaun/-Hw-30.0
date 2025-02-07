#include <iostream>
#include <map>
#include <vector>
#include <clocale>

using namespace std;

class Person {
	string name;
	string surname;
public:
	Person(string name, string surname) {
		this->surname = surname;
		this->name = name;
	}
	Person() {
		this->surname = surname;
		this->name = name;
	}
	void Print() {
		cout << "name: " << name << endl;
		cout << "surname: " << surname << endl;
	}
	void SetName(string name) {
		this->name = name;
	}
	void SetSurname(string surname) {
		this->surname = surname;
	}
	string GetName() {
		return name;
	}
	string GetSurname() {
		return surname;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	map<string, string> surnames{
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"},
		{"Иванов", "Ivanov"}
	};

	map<string, string> names{
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"},
		{"Иван", "Ivan"}
	};

	vector<Person> persons = {
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов"),
		Person("Иван", "Иванов")
	};

	for (int i = 0; i < 15; i++) {
		persons[i].SetSurname(surnames[persons[i].GetSurname()]);
		persons[i].SetName(names[persons[i].GetName()]);
	}
	
	for (int i = 0; i < 15; i++) {
		persons[i].Print();
	}
}
