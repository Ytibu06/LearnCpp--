//#include <iostream>
//#include <deque>
//#include <vector>
//#include <algorithm>
//#include <ctime>
//using namespace std;
//
//
//class Person {
//	
//	//��ʼ��ѡ����
//	string Name;
//	int Score;
//public:
//	Person(){}
//	Person(string Name, int Score) {
//		this->Name = Name;
//		this->Score = Score;
//	}
//	string getName() { return Name; }
//	int getScore() { return Score; }
//	void setName(string Name) { this->Name = Name; }
//	void setScore(int Score) { this->Score = Score; }
//	//~Person() { delete Person; }
//};
//
//void createPerson(vector<Person> &v) {
//
//	//��ʼ��ѡ����Ϣ
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		//����ƴ�ӳ�ѡ������
//		string name = "ѡ��";
//		name += nameSeed[i];
//
//		//��ʼ������ѡ�ַ���Ϊ0
//		int score = 0;
//		Person p(name, score);
//
//		//������ѡ�ִ�������
//		v.push_back(p);
//		
//	}
//
//}
//
//void setScore(vector<Person>& v) {
//
//	//�ܼ�ѡ�ֳɼ�
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//
//		//��������ί�����ֽ���������deque-d
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//
//			//ͨ���������������̶��ķ���
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//
//		/*cout << "ѡ�֣�" << it->getName() << "\t������" << it->getScore() << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//			cout << *dit << " ";
//		}
//		cout << endl;*/
//
//		//����߷���ͷ�
//		sort(d.begin(), d.end());
//
//		//ɾ����߷�����ͷ�
//		d.pop_back();
//		d.pop_front();
//
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;	//�ۼ���ί����
//		}
//		int avg = sum / d.size();
//
//		//����ѡ��������ͬʱ���������շ�����������
//		it->setScore(avg);
//	}
//
//}
//
//
//void showScore(vector<Person> &v) {
//
//	//����ѡ���飬�����Ϣ
//	for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << it->getName() << "\tƽ����" << it->getScore() << endl;
//	}
//}
//int main() {
//
//	//��ʼ���������
//	srand((unsigned int)time(NULL));
//	
//	//����ѡ����  
//	vector<Person> v;
//
//	//��ʼ��ѡ����Ϣ
//	createPerson(v);
//
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) 
//	{
//		cout << "������" << (*it).getName() << "\t������" << (*it).getScore() << endl;
//		
//	}*/
//
//	//�ó�ѡ�ֳɼ�
//	setScore(v);
//
//	//չʾ��Ϣ
//	showScore(v);
//	return 0;
//}
