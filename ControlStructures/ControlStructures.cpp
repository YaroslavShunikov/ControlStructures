#include<iostream>

using namespace std;
//#define TEMPERATURE
//#define TARGET
#define CALC_1
//define-����������
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Rus");
#if defined TEMPERATURE
	int temperature;
	cout << "������� �-�� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;

	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif //TEMPERATURE

#if defined TARGET
	int n;
	cout << "������� �����:"; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "���� ��������" << endl;

	}
	else
	{
		cout << "�� ������������" << endl;
	}
#endif //TARGET

#if defined CALC_1
	double a, b; //����� 
	char s; //���� ��������
	cout << "������� ������� �������������� ���������";
	cin >> a >> s >> b;
	//cout << a << s << b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	
	{
	cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '/')

	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else if (s == '*')

	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else
	{
		cout << "Error" << endl;
	}
#endif



}