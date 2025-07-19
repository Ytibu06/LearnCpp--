#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyArray {
private:
	T* arr;			//堆区开辟空间
	int capacity;	//数组容量
	int size;		//数组当前大小
public:
	// 默认构造函数
	MyArray(int capacity){

		this->capacity = capacity;
		this->size = 0;
		this->arr = new T[this->capacity]; //动态分配数组

		//cout << "MyArray(int capacity) 构造函数被调用" << endl;
	}

	//拷贝构造函数（深拷贝）
	MyArray(const MyArray& other) {

		this->capacity = other.capacity;
		this->size = other.size;
		//深拷贝
		this->arr = new T[this->capacity]; //动态分配数组
		for (int i = 0; i < size; i++) {
			this->arr[i] = other.arr[i]; //拷贝元素
		}

		//cout << "MyArray(const MyArray& other) 拷贝构造函数被调用" << endl;
	}

	//重载赋值运算符（深拷贝）
	MyArray& operator=(const MyArray& other) {

		//判断原来堆区空间是否存在
		if (this->arr != NULL) {
			delete[] this->arr; //释放原来堆区空间
			this->arr = NULL; //置空
			this->capacity = 0; //容量置为0
			this->size = 0; //大小置为0
		}

		//深拷贝
		this->capacity = other.capacity;
		this->size = other.size;
		this->arr = new T[other.capacity];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = other.arr[i];
		}

		return *this; //返回当前对象的引用

		//cout << "MyArray& operator=(const MyArray& other) 重载赋值运算符被调用" << endl;
	}

	//尾插数组
	void PushBack(const T& value) {

		// 检查是否需要扩容
		if (size >= capacity) {
			cout << "数组已满，无法插入新元素" << endl;
			return; //如果数组已满，直接返回
		}

		this->arr[this->size] = value; //将新元素插入到数组末尾
		this->size++; //更新数组大小
	}

	//尾删数组
	void PopBack() {
		if (size <= 0) {
			return; //如果数组为空，直接返回
		}
		this->size--; //更新数组大小
	}

	//下标访问数组元素（重载[]访问）
	T& operator[](int index) {
		return this->arr[index]; //返回数组元素

	}
	//返回数组容量
	int getCapacity() {
		return this->capacity; //返回数组容量
	}

	//返回数组大小
	int getSize(){
		return this->size; //返回数组大小
	}

	

	//析构函数
	~MyArray() {

		delete[] arr; //释放堆区空间

		//cout << "MyArray 析构函数被调用" << endl;
	}
};