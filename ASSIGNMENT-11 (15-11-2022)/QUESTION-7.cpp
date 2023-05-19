#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter something:";
    cin>>a;
    try
    {
        if(a>0)
        throw 5.5;
        else if(a<0)
        throw 'A';
        else
        throw 34;
    }
    catch(int x)
    {
        cout<<"Integer exception";
    }
    catch(double y)
    {
        cout<<"Float exception";
    }
    catch(char z)
    {
        cout<<"Character exception";
    }
    return 0;
}