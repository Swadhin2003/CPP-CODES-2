#include<iostream>
#include<math.h>
using namespace std;
double area(double,double,double);
double area(double,double);
double area(double);
int main()
{
    double a,b,c;
    cout<<"Enter The Side of Triangle:";
    cin>>a>>b>>c;
    cout<<"Area of scalene triangle is "<<area(a,b,c); 
    cout<<"\nArea of isoscalene triangle is "<<area(a,b); 
    cout<<"\nArea of scalene triangle is "<<area(a); 
}
double area(double a,double b,double c)
{
double s = a+b+c;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double area(double a,double b)
{
    return sqrt(a*a-b*b/4)*b/2;
}
double area(double a)
{
    return sqrt(3)*a*a/4;
}