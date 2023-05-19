#include <iostream>
using namespace std;
class Term
{
	int cof = 0;	
	public:
		void get()
		{
			cin >> cof;
		}
		void addition(Term a, Term b)
		{
			cof = a.cof + b.cof;
		}
		void multiplication(Term a, Term b)
		{
			cof += a.cof * b.cof;
		}
		void display()
		{
			cout << cof << "x^";
		}
};
int main()
{
	int n;
	cout << "Enter the maximum degree:";
	cin >> n;
	Term a[n], b[n], add[n], mul[2 * (n - 1)];
	cout << "Enter the coefficients of the 1st polynomial:\n";
	for(int i=0;i<n;i++)
	{
		cout << i+1 << ". ";
		a[i].get();
	}
	cout << "Enter the coefficients of the 2nd polynomial:\n";
	for(int i=0;i<n;i++)
	{
		cout << i+1 << ". ";
		b[i].get();
	}	
	cout << "\nSum of the polynomials is:";
	for(int i=0;i<n;i++)
	{
		add[i].addition(a[i], b[i]);
		add[i].display();
		cout << i;
		if(i != n-1)
			cout << " + ";
	}
	cout << "\nMultiplication of the polynomials is:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			mul[i+j].multiplication(a[i], b[j]);
	}
	for(int i=0;i<2 * (n-1);i++)
	{
		mul[i].display();
		cout << i;
		if(i != 2 * (n - 1) - 1)
			cout << " + ";
	}
}
	