#include "workerManager.h"


//WorkerManager�����Ա������ʵ��

WorkerManager::WorkerManager() {

	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//�ļ�������
	if (!ifs.is_open()) {
		//cout << "�ļ�������" << endl;

		//��ʼ������
		this->EmpNum = 0;
		this->EmpArray = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//cout << "�ļ�Ϊ��" << endl;
		//��ʼ������
		this->EmpNum = 0;
		this->EmpArray = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����ڣ���ʼ��¼
	int num = this->getEmpNum();
	
	this->EmpNum = num;
	//���ٿռ�
	this->EmpArray = new Worker * [this->EmpNum];
	//���ļ��ж�ȡ�����ݴ��뵽Ա��ָ��������
	this->init_Emp();

	//�������
	//cout << "ְ������Ϊ��" << num << endl;
	//�������ְ����Ϣ
	/*for (int i = 0; i < this->EmpNum; i++){
		cout << "Ա�����:  " << this->EmpArray[i]->Id
			<< "\t����:  " << this->EmpArray[i]->Name
			<< "\t���ű��:  " << this->EmpArray[i]->DeptId << endl;
	}*/

}

//չʾ�˵�
void WorkerManager::Show_Menu() {
	cout << "******************************************************" << endl;
	cout << "************     ��ӭʹ��ְ������ϵͳ     ************" << endl;
	cout << "*****************   0.�˳�����ϵͳ   *****************" << endl;
	cout << "*****************   1.����Ա����Ϣ   *****************" << endl;
	cout << "*****************   2.��ʾְ����Ϣ   *****************" << endl;
	cout << "*****************   3.ɾ����ְԱ��   *****************" << endl;
	cout << "*****************   4.�޸�ְ����Ϣ   *****************" << endl;
	cout << "*****************   5.����ְ����Ϣ   *****************" << endl;
	cout << "*****************   6.���ձ������   *****************" << endl;
	cout << "*****************   7.��������ĵ�   *****************" << endl;
	cout << "******************************************************" << endl;
	cout << endl;
}

//�˳��ӿ�
void WorkerManager::ExitSystem() {
	cout << "��ӭ�ٴ�ʹ��" << endl;

	exit(0);	//�˳�����
}

//���ְ������
void WorkerManager::Add_Emp() {
	cout << "�������ְ��������" << endl;
	int addNum = 0;	//��¼�û����ְ������
	cin >> addNum;
	if (addNum > 0) {
		//��ӹ���
		int newSize = this->EmpNum + addNum;

		//�����¿ռ�
		Worker** newSpace = new Worker*[newSize];

		//ԭ�пռ����ݿ������¿ռ���
		if (this->EmpArray != NULL) {
			for (int i = 0; i < this->EmpNum; i++) {
				newSpace[i] = this->EmpArray[i];
			}
		}
		//���������
		for (int i = 0; i < addNum; i++){
			int id;
			string name;
			int dSelect;

			cout << "�������" << i + 1 << "����ְ���ı��" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ��������" << endl;
			cin >> name;
			cout << "����ְλѡ��" << endl;
			cout << "1.ְ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
					break;
			}
			//������ְ��ְ�𣬱��浽������
			//newSpace[this->EmpNum + i] = worker;
			// �޸ĺ󣨰�ȫ��
			if (worker) {
				int index = this->EmpNum + i;
				if (index < newSize) {
					newSpace[index] = worker; // �洢ָ�루8�ֽڣ�
				}
				else {
					// ����Խ��
					std::cerr << "������������Խ��! ����: "
						<< index << "/" << newSize - 1 << std::endl;
					delete worker;
					addNum--;  // ��������
					i--;       // ���Ե�ǰ����
				}
			}
		}
		//�ͷ�ԭ�пռ�
		delete[] this->EmpArray;
		//�����¿ռ��ָ��
		this->EmpArray = newSpace;
		//����ְ������
		this->EmpNum = newSize;
		//������ļ�
		this->save();
		//��ʾ�ɹ�
		cout << "�ɹ����"<<addNum<<"����ְ��" << endl;
		//����ְ����Ϣ�ļ�����
		this->FileIsEmpty = false;
	}
	else {
		cout << "�������" << endl;
	}

	system("pause");
	system("cls");
}

//ְ����Ϣ������ļ�
void WorkerManager::save() {

	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	//ÿ��ְԱ��Ϣд���ļ�
	for (int i = 0; i < this->EmpNum; i++){
		ofs << this->EmpArray[i]->Id << "  "
			<< this->EmpArray[i]->Name << "  "
			<< this->EmpArray[i]->DeptId << endl;
	}
	ofs.close();
}

//ͳ���ļ���ְԱ����
int WorkerManager::getEmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	//��ʼ������
	int num = 0;
	while( ifs >> id && ifs >> name && ifs >> did ){
		//ͳ������
		num++;
	}
	return num;
}

//��ʼ��ְ����Ϣ
void WorkerManager::init_Emp() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {
		Worker* worker = NULL;
		if (did == 1) {
			worker = new Employee(id, name, did);
		}
		else if (did == 2) {
			worker = new Manager(id, name, did);
		}
		else if (did == 3) {
			worker = new Boss(id, name, did);
		}
		else {
			cout << "���������Ϣ" << endl;
		}
		this->EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

//չʾְ����Ϣ
void WorkerManager::Show_Emp() {
	//�ж��ļ��Ƿ�Ϊ��
	if (this->FileIsEmpty) {
		cout << "�ļ������ڼ�¼" << endl;
	}
	else {
		for (int i = 0; i < EmpNum; i++) {
			//���ö�̬�����ó���ӿ�
			this->EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

//ɾ��Ա����Ϣ
void WorkerManager::Del_Emp() {
	if (this->FileIsEmpty) {
		cout << "ְ���ļ������ڼ�¼" << endl;
	}
	else {
		cout << "����ɾ��ְ�����" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1) {
			for (int i = 0; i < this->EmpNum - 1; i++) {
				this->EmpArray[i] = this->EmpArray[i + 1];
			}
			cout << "��ְ����Ϣ��ɾ��" << endl;
			//������Ա����
			this->EmpNum--;
			//��������ͬ�����ļ���
			this->save();
		}
		else {
			cout << "��ְ����Ϣ������" << endl;
		}
	}
	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ���ڣ�����ְ������λ��
int WorkerManager::IsExist(int id) {
	int index = -1; // Ĭ�ϲ�����

	for (int i = 0; i < this->EmpNum; i++){
		if (this->EmpArray[i]->Id == id) {
			index = i; // �ҵ�ְ������¼λ��
			break; // �ҵ����˳�ѭ��
		}
	}
	return index; // ����ְ��λ�ã�����������򷵻�-1
}

//�޸�ְ����Ϣ
void WorkerManager::Mod_Emp() {
	if( this->FileIsEmpty){
		cout << "ְԱ��Ϣ�ļ�������" << endl;
	}
	else {
		cout << "�����޸�ְԱ�ı��" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1) {
			//���ұ�ŵ�Ա��
			delete this->EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽��" << id << "��ְԱ��������ְ���ţ�" << endl;
			cin >> newId;
			cout << "��������" << endl;
			cin >> newName;
			cout << "�����λ: " << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����    " << endl;
			cout << "2.�ϰ�    " << endl;

			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				cout << "��������" << endl;
				break;
			}
			//�������ݽ�������
			this->EmpArray[ret] = worker;
			cout << "�޸ĳɹ�" << endl;
			//�����ļ�
			this->save();
		}
		else {
			cout << "�޸�ʧ�ܣ���������Ϣ" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ����Ϣ
void WorkerManager::Find_Emp() {
	if (this->FileIsEmpty) {
		cout << "�����ڼ�¼��Ϣ���ļ�" << endl;
	}
	else {
		cout << "��������ҷ�ʽ��" << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2����ְ����������" << endl;
		int select = 0;
		cin >> select;
		if (select == 1) {
			cout << "��ʼ����ְ����Ų��ң�" << endl;
			cout << "������ְ����ţ�" << endl;
			int id = 0;
			cin >> id;
			int ret = this->IsExist(id);
			if ( ret != -1) {
				cout << "ְԱ��Ϣ���£�" << endl;
				this->EmpArray[ret]->showInfo();
			}
			else {
				cout << "�����ڴ�Ա����Ϣ" << endl;
			}
			
		}
		else if (select == 2) {
			cout << "��ʼ����ְ���������ң�" << endl;
			cout << "������ְ��������" << endl;
			string name = "";
			cin >> name;

			bool flag = false;
			for (int i = 0; i < this->EmpNum; i++){
				if (name == this->EmpArray[i]->Name) {
					cout << "��⵽����ϢΪ��" << endl;
					this->EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false) {
				cout << "�����ڴ���Ϣ" << endl;
			}

		}
		else {
			cout << "��������" << endl;
		}
	}
	system("pause");
	system("cls");
}

//ְԱ��Ϣ����
void WorkerManager::Sort_Emp() {
	if (this->FileIsEmpty) {
		cout << "ְԱ��Ϣ�ļ�������" << endl;
		system("pause");
		system("cls");
	}
	else 
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1.����ְ���������" << endl;
		cout << "2.����ְ����Ž���" << endl;

		int select = 0;
		cin >> select;
		if (select == 1) {
			for (int i = 0; i < this->EmpNum; i++)
			{
				for (int j = 0; j < this->EmpNum - i - 1; j++)
				{
					if (this->EmpArray[j]->Id > this->EmpArray[j + 1]->Id)
					{
						//����ָ��
						Worker* temp = this->EmpArray[j];
						this->EmpArray[j] = this->EmpArray[j + 1];
						this->EmpArray[j + 1] = temp;
					}
				}
			}
			cout << "ְ����Ϣ���ձ����������" << endl;
		}else if(select == 2) {
			for (int i = 0; i < this->EmpNum; i++)
			{
				for (int j = 0; j < this->EmpNum - i - 1; j++)
				{
					if (this->EmpArray[j]->Id < this->EmpArray[j + 1]->Id)
					{
						//����ָ��
						Worker* temp = this->EmpArray[j];
						this->EmpArray[j] = this->EmpArray[j + 1];
						this->EmpArray[j + 1] = temp;
					}
				}
			}
			cout << "ְ����Ϣ���ձ�Ž�������" << endl;
		}
		else {
			cout << "��������" << endl;

		}
		this->save(); // �������������ݵ��ļ�
		this->Show_Emp();
	}
}

//����ļ�
void WorkerManager::Clean_File() {
	cout << "ȷ������ļ���" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.ȡ��" << endl;
	int select = 0;
	cin >> select;
	if(select == 1) {
		ofstream ofs(FILENAME, ios::trunc); // ����ļ�
		if (ofs.is_open()) {
			ofs.close();
			cout << "�ļ������" << endl;
			// ����ְ����Ϣ
			this->EmpNum = 0;
			delete[] this->EmpArray;
			this->EmpArray = NULL;
			this->FileIsEmpty = true;
		} else {
			cout << "����ļ�ʧ��" << endl;
		}
	} else {
		cout << "ȡ������ļ�" << endl;
	}
}

WorkerManager::~WorkerManager() {
	if (this->EmpArray != NULL) {
		delete[] this->EmpArray;
		this->EmpArray = NULL;
	}
}