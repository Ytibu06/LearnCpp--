//#include <iostream>
//#include <map>
//#include <vector>
//#include <string>
//using namespace std;
//
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//
//class Employee {
//public:
//	string name;
//	int salary;
//	int depId; // 部门ID
//
//};
//
////将职员信息存入容器vector
//void createWork(vector<Employee>& employees) {
//	
//	string nameSeed = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//
//	for (int i = 0; i < 10; i++)
//	{
//		Employee emp;
//		emp.name = "Employee_" + string(1, nameSeed[i]);
//		emp.salary = rand() % 10000 +10000; 
//		employees.push_back(emp);
//	}
//}
//
////根据职员的deptId设置对应的值（部门）
//void setGroup(vector<Employee>& employees, multimap<int, Employee>& departments) {
//	//创建部门
//
//	for (vector<Employee>::iterator it = employees.begin(); it != employees.end(); ++it) {
//		int depId = rand() % 3; // 假设有3个部门
//		it->depId = depId;
//		departments.insert(make_pair(depId, *it));
//	}
//}
//
//void showInfoByDeptId(multimap<int, Employee> &dept) {
//
//	for(multimap<int, Employee>::iterator d = dept.begin(); d != dept.end();d++)
//	{
//		if ((*d).first == 0) {
//			cout << "部门：" << 0 << endl; 
//		}
//	}
//}
//
////void Sort(vector<Employee>& employees) {
////	sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
////		return a.salary < b.salary;
////	});
////}
//
//void printEmployees(const vector<Employee>& employees) {
//	for (const auto& emp : employees) {
//		cout << "Name: " << emp.name << ", Salary: " << emp.salary << endl;
//	}
//}
//int main() {
//
//	//创建员工
//	vector<Employee> employees;
//	createWork(employees);
//
//	printEmployees(employees);
//	
//	//创建部门
//	multimap<int, Employee> departments;
//	setGroup(employees, departments);
//
//	showInfoByDeptId(departments);
//
//}