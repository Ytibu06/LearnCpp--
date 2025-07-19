#include <iostream>
using namespace std;

// 设计一个计算机类，包含CPU、显卡、内存等硬件组件
class CPU {
public:
	virtual void calculate() = 0;
};
class VideoCard {
public:
	virtual void display() = 0;
};
class Memory {
public:
	virtual void storage() = 0;
};

//根据传入的硬件组件创建一个计算机类
class Computer {
public:
	Computer(CPU* cpu, VideoCard* videoCard, Memory* memory) {
		m_cpu = cpu;
		m_videoCard = videoCard;
		m_memory = memory;
	}
	void work() {
		m_cpu->calculate();
		m_videoCard->display();
		m_memory->storage();
	}
	~Computer() {
		if(m_cpu==NULL){
			delete m_cpu;
			m_cpu = NULL;
		}
		if(m_videoCard==NULL){
			delete m_videoCard;
			m_videoCard = NULL;
		}
		if(m_memory==NULL){
			delete m_memory;
			m_memory = NULL;
		}

		cout << "Computer destroyed" << endl;
	}

private:
	CPU* m_cpu;
	VideoCard* m_videoCard;
	Memory* m_memory;
};

//创建三个硬件的具体实现类
class IntelCPU : public CPU {
	public:
	virtual void calculate() override {
		cout << "Intel CPU calculating..." << endl;
	}
};
class NavidVideoCard : public VideoCard {
	public:
	virtual void display() override {
		cout << " Navid VideoCard  displaying..." << endl;
	}
};
class AmdMemory : public Memory {
	public:
	virtual void storage() override {
		cout << "Amd Memory  storing..." << endl;
	}
};

//创建对象，实现功能
void test(){
	CPU* Icpu = new IntelCPU();
	VideoCard* NvideoCard = new NavidVideoCard();
	Memory* Imemory = new AmdMemory();
	Computer* computerLevon = new Computer(Icpu, NvideoCard, Imemory);

	computerLevon->work();

	// 释放资源(硬件资源的释放已经在computer中的析构函数释放)
	delete computerLevon;
}


int main() {
	test();
	return 0;
}