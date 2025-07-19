#include <iostream>
using namespace std;

// ���һ��������࣬����CPU���Կ����ڴ��Ӳ�����
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

//���ݴ����Ӳ���������һ���������
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

//��������Ӳ���ľ���ʵ����
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

//��������ʵ�ֹ���
void test(){
	CPU* Icpu = new IntelCPU();
	VideoCard* NvideoCard = new NavidVideoCard();
	Memory* Imemory = new AmdMemory();
	Computer* computerLevon = new Computer(Icpu, NvideoCard, Imemory);

	computerLevon->work();

	// �ͷ���Դ(Ӳ����Դ���ͷ��Ѿ���computer�е����������ͷ�)
	delete computerLevon;
}


int main() {
	test();
	return 0;
}