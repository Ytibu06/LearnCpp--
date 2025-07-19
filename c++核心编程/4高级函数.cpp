#include <iostream>
using namespace std;

int func(int c, int a = 10, int b = 20) {

	int z = 100;
	return a + b;
}
int main(void) {
	

	int a = 5;
	int b = 10;
	int s = func( a, b);
	cout << "s = " << s << endl;
	return 0;
}