#include "SpeechManager.h"

//构造函数
SpeechManager::SpeechManager() {

	//初始化比赛信息
	this->initSpeech();  //初始化演讲信息
	this->createSpeaker();  //创建选手信息
}

//析构函数
SpeechManager::~SpeechManager() {
	//cout << "演讲管理系统已关闭" << endl;
}

//显示菜单
void SpeechManager::showMenu() {
	cout << "******欢迎使用演讲管理系统" << endl;
	cout << "****** 1. 开始比赛 ******" << endl;
	cout << "**** 2. 查看往届记录 ****" << endl;
	cout << "****** 3. 清空记录 ******" << endl;
	cout << "****** 0. 退出系统 ******" << endl;
}

//初始化信息
void SpeechManager::initSpeech() {

	// 具体比赛逻辑实现
	this->v1.clear();  //清空第一轮选手编号
	this->v2.clear();  //清空第二轮选手编号
	this->vectory.clear();  //清空晋级选手编号
	this->info.clear();  //清空选手信息
	//记录比赛轮次
	this->Index = 1;

}

//创建选手信息
void SpeechManager::createSpeaker() {

	// 具体创建选手信息逻辑实现
	string nameSeed = "ABCDEFGHIJKLMNOP"; //选手姓名种子
	for (int i = 0; i < nameSeed.size(); i++) {
		string name = "选手";
		name += nameSeed[i];  //生成选手姓名
		
		//选手信息
		speaker sp;
		sp.Name = name;  //设置选手姓名

		for (int j = 0; j<2; j++){
			sp.Score[j] = 0.0;  //初始化选手得分

		}

		this -> v1.push_back(i);  //将选手编号存入第一轮选手编号向量
		this->info.insert(make_pair(i, sp));  //将选手信息存入选手信息映射
	}
	
}

//抽签
void SpeechManager::speechDraw() {

	//根据不同轮次，进行抽签仪式，输出抽签顺序
	if(this->Index == 1) {

		cout << "------第一轮抽签开始------" << endl;
		random_shuffle(this->v1.begin(), this->v1.end());  //随机打乱第一轮选手编号

		cout << "抽签后演讲顺序为：" << endl;	//提示并输出抽签顺序
		for(vector<int>::iterator it = this->v1.begin(); it != this->v1.end(); it++) {
			//this->info[*it].Score[0] = rand() % 101;  //随机生成选手得分
			cout << *it << " ";	//输出选手编号
		}
		cout << endl;
		cout << "------第一轮抽签结束------" << endl;
	} else {

		cout << "------第二轮抽签开始------" << endl;
		random_shuffle(this->v2.begin(), this->v2.end());  //随机打乱第二轮选手编号

		cout << "抽签后演讲顺序为：" << endl;	//提示并输出抽签顺序
		for(vector<int>::iterator it = this->v2.begin(); it != this->v2.end(); it++) {
			//this->info[*it].Score[1] = rand() % 101;  //随机生成选手得分
			cout << *it << " ";	//输出选手编号
		}
		cout << endl;
		cout << "-------第二轮抽签结束------" << endl;
	} 

	system("pause");  //暂停，等待用户输入
	cout << endl;

}

//比赛
void SpeechManager::speechContest() {

	//生成对应评分（均分）
	cout << "————第：" << this->Index << "轮比赛结束————" << endl;	//输出当前轮次

	vector<int> Src;	//比赛型选手容器
	multimap<double, int, greater<double>> groupScore;	//6人一组容器
	int num = 0;

	//跟不同轮次生成对应使用对应的容器
	if (this->Index == 1) {
		Src = v1;
	}
	else {
		Src = v2;
	}

	//遍历选手
	for (vector<int>::iterator it = Src.begin(); it != Src.end(); it++) {

		num++;	//计算选手数量
		deque<double> d;
		//根据生成的对应评分，排入容器，形成评分容器
		for (int i = 0; i < 10; i++) {
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << "";
			d.push_back(score);
		}

		//排序并排除最高分和最低分
		sort(d.begin(), d.end(), greater<double>());	//排序
		d.pop_back();
		d.pop_front();

		//生成对应的均分（最终评分）
		//double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = accumulate(d.begin(), d.end(), 0.0f) / (double)d.size();

		this->info[*it].Score[this->Index - 1] = avg;	//最终评分放入容器

		groupScore.insert(make_pair(avg, *it));

		if (num % 6 == 0) {
			cout << "第" << num / 6 << "组" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++) {
				cout << "编号：" << it->second 
					 << " \t姓名：" << this->info[it->second].Name
					 << " \t分数：" << this->info[it->second].Score[this->Index - 1] << endl;
			}
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++,count++) {
				if (this->Index == 1) {
					v2.push_back((*it).second);
				}
				else {
					vectory.push_back((*it).second);
				}
			}
			groupScore.clear();
		}
		
	}
	cout << "————第：" << this->Index << "轮比赛结束————" << endl;	//输出当前轮次
	system("pause");  //暂停，等待用户输入
}

//开始比赛
void SpeechManager::startSpeech() {

	cout << "开始比赛..." << endl;
	// 具体比赛逻辑实现
	// 比赛流程：第一轮 -> 第二轮 -> 决赛
	this->speechDraw();  //抽签	
	this->speechContest();  //比赛
	this->showScore();	//展示信息

	// 选手晋级逻辑、得分计算等
	this->Index++;  //增加比赛轮次

	this->speechDraw();  //抽签	
	this->speechContest();  //比赛
	this->showScore();	//展示信息

	this->saveRecord();  //保存比赛记录


}

//展示比赛分数
void SpeechManager::showScore(){

	cout << "第" << this->Index << "轮次晋级选手信息" << endl;

	vector<int> v;
	if (this->Index == 1) {
		v = v2;
	}
	else
		v = vectory;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "编号：" << *it << " \t姓名：" << this->info[*it].Name << " \t得分：" << this->info[*it].Score[this->Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->showMenu();

}

//保存比赛记录
void SpeechManager::saveRecord() {

	// 具体保存记录逻辑实现
	ofstream ofs;
	ofs.open("record.csv", ios::out | ios::app);  //打开记录文件
	if (!ofs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	for(vector<int>::iterator it = this->vectory.begin(); it != this->vectory.end(); it++) {
		ofs << *it << ","
			<< this->info[*it].Name << ","
			<< this->info[*it].Score[this->Index - 1] << "," << endl;
	}
	ofs << endl;
	ofs.close();  //关闭文件
	// 可以将选手信息和得分保存到文件或数据库中

}

//查看往届记录
void SpeechManager::showRecord() {

	cout << "查看往届记录..." << endl;
	// 具体查看记录逻辑实现
	ifstream ifs("record.csv",ios::in);
	if(!ifs.is_open()) {
		this->fileIsEmpty = true;  //记录文件为空
		cout << "文件打开失败" << endl;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		cout << "记录文件为空" << endl;
		this->fileIsEmpty = true;  //记录文件为空
		ifs.close();
		return;
	}
	this->fileIsEmpty = false;  //记录文件不为空
	ifs.putback(ch);  //将字符放回流中
	string data;

	int ioo = 0;  //记录行数
	while (ifs >> data) {
		cout << data << " \t";
		ioo++;
		if (ioo % 6 == 0) {  //每三行输出一次换行
			cout << endl;
		}
	}
	cout << endl;
	ifs.close();  //关闭文件

}

//清空记录
void SpeechManager::clearRecord() {

	// 具体清空记录逻辑实现
	cout << "是否确认清空记录？(Y/N): ";
	char choice;
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		ofstream ofs("record.csv", ios::trunc);  //以截断模式打开文件
		ofs.close();  //关闭文件
		this->initSpeech();  //重新初始化比赛信息
		//this->createSpeaker();  //重新创建选手信息
		//this->showRecord();  //显示清空后的记录
		cout << "记录已清空" << endl;

	} else {
		cout << "取消清空记录" << endl;
		return;
	}
	

}

//退出系统
void SpeechManager::exitSystem() {

	//system("pause");
	exit(0);

}