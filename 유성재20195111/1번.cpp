#include <iostream>
using namespace std;

class Box {
private:
	double length, width, height;
public:
	Box(double l = 0.0, double w = 0.0, double h = 0.0) : length{ l }, width{ w }, height{ h } {}
	Box& operator=(const Box& b2) {
		this->length = b2.length;
		this->width = b2.width;
		this->height = b2.height;
		return *this;
	}
	double getVolume() {
		return length * width * height;
	}
	bool operator<(Box& b2) {
		if (this->getVolume() < b2.getVolume()) return true;
		return false;
	}
	friend void printBox(Box box);
};

void printBox(Box box) {
	cout << "상자의 길이: " << box.length << endl;
	cout << "상자의 너비: " << box.width << endl;
	cout << "상자의 높이: " << box.height << endl;
	cout << "상자의 부피: " << box.getVolume() << endl << endl;
}

int main() {

	Box a(10, 10, 10), b(20, 20, 20);
	cout << "상자 #1" << endl;
	printBox(a);
	cout << "상자 #2" << endl;
	printBox(b);

	cout << std::boolalpha;
	cout << (a < b);
}