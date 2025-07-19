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
//	//初始化选手类
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
//	//初始化选手信息
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		//遍历拼接出选手姓名
//		string name = "选手";
//		name += nameSeed[i];
//
//		//初始化所有选手分数为0
//		int score = 0;
//		Person p(name, score);
//
//		//将各个选手存入容器
//		v.push_back(p);
//		
//	}
//
//}
//
//void setScore(vector<Person>& v) {
//
//	//总计选手成绩
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//
//		//将各个评委的评分建立成容器deque-d
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//
//			//通过随机种子随机出固定的分数
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//
//		/*cout << "选手：" << it->getName() << "\t分数：" << it->getScore() << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//			cout << *dit << " ";
//		}
//		cout << endl;*/
//
//		//排序高分与低分
//		sort(d.begin(), d.end());
//
//		//删除最高分与最低分
//		d.pop_back();
//		d.pop_front();
//
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;	//累加评委评分
//		}
//		int avg = sum / d.size();
//
//		//遍历选手容器的同时将各自最终分数存入容器
//		it->setScore(avg);
//	}
//
//}
//
//
//void showScore(vector<Person> &v) {
//
//	//遍历选手组，输出信息
//	for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << it->getName() << "\t平均分" << it->getScore() << endl;
//	}
//}
//int main() {
//
//	//初始化随机种子
//	srand((unsigned int)time(NULL));
//	
//	//创建选手类  
//	vector<Person> v;
//
//	//初始化选手信息
//	createPerson(v);
//
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) 
//	{
//		cout << "姓名：" << (*it).getName() << "\t分数：" << (*it).getScore() << endl;
//		
//	}*/
//
//	//得出选手成绩
//	setScore(v);
//
//	//展示信息
//	showScore(v);
//	return 0;
//}
