#include <iostream>
using namespace std;
// ��̬ʵ�֣�����1��ʹ���麯��

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

	//��̬ʹ�÷���һ������
	SubCalculator sub;
	sub.Num1 = 300;
	sub.Num2 = 100;
	AbstractorCalculator& abs = sub; //���������ת��Ϊ��������
	int result1 = abs.getResult();
	cout << "Result1: " << result1 << endl;

	//��̬ʹ�÷�������ָ��
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