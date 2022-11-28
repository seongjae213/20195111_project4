#include <iostream>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time(int h = 0, int m = 0) {
		hours = h;
		minutes = m;
	}
	void print() {
		cout << hours << ": " << minutes << endl;
	}
	Time operator++ () {
		++minutes;
		if (minutes >= 60) {
			++hours;
			minutes -= 60;
		}
		return Time(hours, minutes);
	}
	Time operator++(int) {
		Time T(hours, minutes);
		++minutes;
		if (minutes >= 60) {
			++hours;
			minutes -= 60;
		}
		return T;
	}
};

int main()	{
	Time t1(10, 59), t2(10, 40);
	t1.print();
	++t1;
	t1.print();
	++t1;
	t1.print();
}