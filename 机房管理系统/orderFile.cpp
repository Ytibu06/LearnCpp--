#include "orderFile.h"

//预约信息查询
void OrderFile::getInfo(string info, map<string, string>& m) {

	string key;
	string value;

	int pos = info.find(":");
	if (pos != 1) {
		key = info.substr(0, pos);
		value = info.substr(pos + 1, info.size() - pos - 1);
		m.insert(make_pair(key, value));
	}
}

//默认构造函数
OrderFile::OrderFile() {

	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date;
	string interval;
	string stuId;
	string stuName;
	string roomId;
	string status;

	this->m_Size = 0;
	while (ifs >> date && ifs >> interval && ifs >> stuId 
		&& ifs >> stuName && ifs >> roomId && ifs >> status) {

		map<string, string> m;

		getInfo(date,m);
		getInfo(interval,m);
		getInfo(stuId,m);
		getInfo(stuName,m);
		getInfo(roomId,m);
		getInfo(status,m);

		//小map置于大map中
		this->m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
		
	}

	ifs.close();

	/*for (map<int, map<string, string>>::iterator it = m_orderData.begin(); it != m_orderData.end(); it++) {
		cout << "条数 ： " << it->first << "value ： " << endl;
		for (map<string, string>::iterator mit = (*it).second.begin(); mit != it->second.end(); mit++) {
			cout << "key = " << mit->first << "value = " << mit->second << " ";
		}
		cout << endl;
	}*/
}

//更新预约记录
void OrderFile::updateOrder() {

	if (this->m_Size == 0) {
		return;
	}
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::out | ios::trunc);
	for (size_t i = 0; i < m_Size; i++)
	{
		ofs << "date:" << this->m_orderData[i]["date"] << " ";
		ofs << "interval:" << this->m_orderData[i]["interval"] << " ";
		ofs << "stuId:" << this->m_orderData[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderData[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderData[i]["status"] << endl;
	}

	ofs.close();

}