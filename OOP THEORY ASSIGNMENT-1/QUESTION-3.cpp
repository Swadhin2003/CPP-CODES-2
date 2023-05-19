#include <iostream>
using namespace std;
class Student
{
    int roll;
    char name[30];
    int marks[6];
    int total;
    public:
        void get()
        {
            cout << "Name:";
            cin >> name;
            cout << "Roll No:";
            cin >> roll;
            cout << "Marks:";
            for(int i=0;i<6;i++)
                cin >> marks[i];
        }
        void display()
        {
            cout << "Name:" << name << '\n';
            cout << "Roll No:" << roll << '\n';
            cout << "Total marks:" << total << '\n';
            cout << "Grade:";
            if(total >= 500)
                cout << "A" << '\n';
            else if(total >= 400 && total < 500)
                cout << "B" << '\n';
            else if(total >= 300 && total < 400)
                cout << "C" << '\n';
            else if(total >= 200 && total < 300)
                cout << "D" << '\n';
            else
                cout << "E" << '\n';
        }   
        void total_marks() 
        {
            total = 0;
            for(int i=0;i<6;i++)
                total += marks[i];
        }
};
int main()
{
    int n;
    cout << "Enter the number of students:";
    cin >> n;
    Student stu[n];
    for(int i=0;i<n;i++)
        stu[i].get();
    for(int i=0;i<n;i++)
        stu[i].total_marks();
    for(int i=0;i<n;i++)
        stu[i].display();
}
	