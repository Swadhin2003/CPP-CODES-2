#include<iostream>
using namespace std;
int main()
{
  class xyz
    {
      char code[20];
      char name[20];
      int price;
      int quantity;
      public:
      void get()
	  {
            cout<<"Enter code:";
            cin>>code;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter price:";
            cin>>price;
            cout<<"Enter quantity:";
            cin>>quantity;
      }
      void display()
	  {
        cout<<code<<"\t";
        cout<<name<<"\t";
        cout<<price<<"\t";
        cout<<quantity<<"\t";
        cout<<price*quantity;
      }
    };
    xyz arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i].get();
        cout<<endl;
    }
    cout<<"code"<<" "<<"name"<<" "<<" price"<<" "<<"quantity"<<" "<<"total"<<endl;
    for (int i = 0; i < 10; i++)
    {
        arr[i].display();
        cout<<endl;
    }
    return 0;
}