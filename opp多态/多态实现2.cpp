#include <iostream>
using namespace std;
/*

class AbsDrinking {
public:
	virtual void drink() = 0; // Pure virtual function

	virtual void Brew() = 0; // Another pure virtual function

	virtual void Pour() = 0; // Yet another pure virtual function

	virtual void Put() = 0; // Another pure virtual function

	void makeDrink() {
		Brew();
		Pour();
		Put();
		drink();
	}

};

class Coffee : public AbsDrinking {
public:
	virtual void drink()  {
		cout << "Drinking coffee" << endl;
	}
	virtual void Brew()  {
		cout << "Brewing coffee" << endl;
	}
	virtual void Pour()  {
		cout << "Pouring coffee" << endl;
	}
	virtual void Put()  {
		cout << "Putting coffee in cup" << endl;
	}
};
class Tea : public AbsDrinking {
	public:
	virtual void drink()  override{
		cout << "Drinking tea" << endl;
	}
	virtual void Brew()  {
		cout << "Brewing tea" << endl;
	}
	virtual void Pour()  {
		cout << "Pouring tea" << endl;
	}
	virtual void Put()  {
		cout << "Putting tea in cup" << endl;
	}
};
void doWork(AbsDrinking * abs) {
	abs->makeDrink();
	delete abs; // Clean up the allocated memory
}
void test() {
	doWork(new Coffee());
}

int main() {
	test();
	return 0;
}

*/