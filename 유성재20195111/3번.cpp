#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int birthYear;
public:
	Person(string name, int year) {
		this->name = name;
		this->birthYear = year;
	}
	void print() {
		cout << "����: " << name << endl;
		cout << "�������: " << birthYear << endl;
	}
};

class Student :public Person {
	string university;
public:
	Student(string name, int year, string university) :Person(name, year) {
		this->university = university;
	}
	void print() {
		Person::print();
		cout << "���б�: " << university << endl;
	}
};
int main() {
	Student s("ȫ�浿", 1997, "�ѱ����б�");
	s.print();
	return 0;
}