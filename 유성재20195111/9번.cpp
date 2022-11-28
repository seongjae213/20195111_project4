#include <iostream> 
#include <string> 
using namespace std;

template <typename T>
class Circle {
protected:
	T x;
	T y;
	T radius;
public:
	Circle(T centerX = 0, T centerY = 0, T radius = 0) {
		x = centerX;
		y = centerY;
		this->radius = radius;
	}
	T area() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû: " << circleA.area() << endl;
	return 0;
}