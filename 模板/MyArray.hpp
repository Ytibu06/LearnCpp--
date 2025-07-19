#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyArray {
private:
	T* arr;			//�������ٿռ�
	int capacity;	//��������
	int size;		//���鵱ǰ��С
public:
	// Ĭ�Ϲ��캯��
	MyArray(int capacity){

		this->capacity = capacity;
		this->size = 0;
		this->arr = new T[this->capacity]; //��̬��������

		//cout << "MyArray(int capacity) ���캯��������" << endl;
	}

	//�������캯���������
	MyArray(const MyArray& other) {

		this->capacity = other.capacity;
		this->size = other.size;
		//���
		this->arr = new T[this->capacity]; //��̬��������
		for (int i = 0; i < size; i++) {
			this->arr[i] = other.arr[i]; //����Ԫ��
		}

		//cout << "MyArray(const MyArray& other) �������캯��������" << endl;
	}

	//���ظ�ֵ������������
	MyArray& operator=(const MyArray& other) {

		//�ж�ԭ�������ռ��Ƿ����
		if (this->arr != NULL) {
			delete[] this->arr; //�ͷ�ԭ�������ռ�
			this->arr = NULL; //�ÿ�
			this->capacity = 0; //������Ϊ0
			this->size = 0; //��С��Ϊ0
		}

		//���
		this->capacity = other.capacity;
		this->size = other.size;
		this->arr = new T[other.capacity];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = other.arr[i];
		}

		return *this; //���ص�ǰ���������

		//cout << "MyArray& operator=(const MyArray& other) ���ظ�ֵ�����������" << endl;
	}

	//β������
	void PushBack(const T& value) {

		// ����Ƿ���Ҫ����
		if (size >= capacity) {
			cout << "�����������޷�������Ԫ��" << endl;
			return; //�������������ֱ�ӷ���
		}

		this->arr[this->size] = value; //����Ԫ�ز��뵽����ĩβ
		this->size++; //���������С
	}

	//βɾ����
	void PopBack() {
		if (size <= 0) {
			return; //�������Ϊ�գ�ֱ�ӷ���
		}
		this->size--; //���������С
	}

	//�±��������Ԫ�أ�����[]���ʣ�
	T& operator[](int index) {
		return this->arr[index]; //��������Ԫ��

	}
	//������������
	int getCapacity() {
		return this->capacity; //������������
	}

	//���������С
	int getSize(){
		return this->size; //���������С
	}

	

	//��������
	~MyArray() {

		delete[] arr; //�ͷŶ����ռ�

		//cout << "MyArray ��������������" << endl;
	}
};