#include <iostream> 
using namespace std;

class Weapon {
public:
	virtual void load() = 0;
};

class Bomb : public Weapon {
public:
	void load() {
		cout << "��ź�� �����մϴ�." << endl;
	}
};

class Gun : public Weapon {
public:
	void load() {
		cout << "���� �����մϴ�." << endl;
	}
};

int main() {
	Weapon* w[3];

	w[0] = new Gun();
	w[1] = new Bomb();
	w[2] = new Bomb();

	for (int i = 0; i < 3; i++) {
		w[i]->load();
	}

	return 0;
}