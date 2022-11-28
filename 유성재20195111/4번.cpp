#include <iostream> 
#include <string> 
using namespace std;

class Employee {
protected:
	string name;
	int salary;
public:
	Employee(string theName = "", int sa = 0) {
		name = theName;
		salary = sa;
	}
	string getName() const { 
		return name; 
	}
	int computeSalary() const {
		return salary;
	}
};

class Manager : Employee {
private:
	int bonus;
public:
	Manager(string theName, int sa, int bo) {
		name = theName;
		salary = sa;
		bonus = bo;
	}
	int computeSalary() const {
		return salary + bonus;
	}
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << salary << endl;
		cout << "���ʽ�: " << bonus << endl;
	}
};

int main() {
	Manager obj("��ö��", 200, 100);
	obj.print();
	cout << "��ü �޿�: " << obj.computeSalary() << endl;
	return 0;
}