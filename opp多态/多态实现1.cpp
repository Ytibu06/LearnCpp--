#include <iostream>
using namespace std;
// 多态实现：案例1：使用虚函数

/*
class Calculator {
public:
	int getResult(char oper) {
		switch (oper) {
		case '+':
			return Num1 + Num2;
		case '-':
			return Num1 - Num2;
		case '*':
			return Num1 * Num2;
		default:
			return Num1 / Num2;
		}
	}
	int Num1;
	int Num2;

};

class AbstractorCalculator {
public:
	virtual int getResult() {
		return NULL;
	}
	int Num1;
	int Num2;
};
class AddCalculator : public AbstractorCalculator{
public:
	int getResult() {
		return Num1 + Num2;
	}
};

class SubCalculator : public AbstractorCalculator {
public:
	int getResult() {
		return Num1 - Num2;
	}
};

void test() {

	Calculator calc;
	calc.Num1 = 300;
	calc.Num2 = 0;
	char oper = '-';
	int result0 = calc.getResult(oper);
	cout << "Result0: " << result0 << endl;

	//多态使用方法一：引用
	SubCalculator sub;
	sub.Num1 = 300;
	sub.Num2 = 100;
	AbstractorCalculator& abs = sub; //将子类对象转换为基类引用
	int result1 = abs.getResult();
	cout << "Result1: " << result1 << endl;

	//多态使用方法二：指针
	AbstractorCalculator * abc = new SubCalculator();
	abc->Num1 = 300;
	abc->Num2 = 200;
	int result2 = abc->getResult();
	cout << "Result2: " << result2 << endl;

	delete abc;
}

int main() {
	test();
	return 0;
}
*/