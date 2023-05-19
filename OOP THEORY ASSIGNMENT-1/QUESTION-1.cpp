#include <iostream>
using namespace std;
class Employee
{
	char name[50];
	int id;
	char dept[30];
	float salary;
	public:
		inline void get()
		{
			cout << '\n';
			cout << "Enter name:";
			cin >> name;
			cout << "Enter ID:";
			cin >> id;
			cout << "Department:";
			cin >> dept;
			cout << "Salary:";
			cin >> salary;
			cout << '\n';
		}
		inline void display()
		{
			cout << "Name:" << name << '\n';
			cout << "ID:" << id << '\n';
			cout << "Department:" << dept << '\n';
			cout << "Salary:" << salary << '\n';
		}
};
int main()
{
	Employee a1, a2;
	cout << "Enter details of Employee 1:";
	a1.get();
	cout << "Enter details of employee 2:";
	a2.get();
	a1.display();
	a2.display();
}
