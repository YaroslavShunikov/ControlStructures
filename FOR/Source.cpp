#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "¬ведите кол-во итераций:"; cin >> n;
	for (int i=0;i<n;i++)
	{
		cout << i<<"\t";
	}
	cout<<endl;


}