#include<iostream>
#include<conio.h>
using namespace std;
//#define PALINDROM
//#define CALCSW
//#define SHOOTER
//#define DEGREE
#define FACTORIAL
//#define FIBONACCI_LIMIT
//#define FIBONACCI_NUM
//#define PRIME_NUMBERS

void main()
{
	setlocale(LC_ALL, "Rus");

#if defined PALINDROM
	int num, t, mun = 0;
	cout << "������� �����:"; cin >> num;
	t = num;
	while (t > 0)
	{
		mun = (t % 10) + mun * 10;
		t /= 10;
	}
	if (mun == num) cout << "��� ���������" << endl;
	else cout << "�� �������� �����������" << endl;
	//cout << mun; ������������ �����
#endif
#if defined CALCSW

	double a, b;
	char sign;
	cout << "������� ��������:" << endl;
	cin >> a >> sign >> b;
	switch (sign)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "ERROR" << endl;
	}

#endif

#if defined SHOOTER
#define Enter 13
#define Escape 27
#define Space 32
	char key;
	do
	{ 
		key = _getch();
		switch (key)
		{
		case 'w':
		case 'W':cout << "�����" << endl; break;
		case 'a':
		case 'A':cout << "�����" << endl; break;
		case 's':
		case 'S':cout << "�����" << endl; break;
		case 'd':
		case 'D':cout << "������" << endl; break;
		case Space:cout << "������" << endl; break;
		case Enter:cout << "�����" << endl; break;
		case -32: break;//��� ���������� ERROR ��� ���������
		default: cout << "ERROR" << endl; 
		}
	} while (key != 27);

#endif
//
//
//�� 15.09.2022
#if defined DEGREE
	int s,i,m,a;
	float n;
	cout << "������� �����:"; cin >> n;
	cout << "������� ������� ����� �����:"; cin >> s;
	a = abs(s);
	m = n;
	if (s>0)
	{
		for (i = 1; i < a; i++)
		{
		n = m * n;
		}
		cout << n << endl;
	}
	else if (s < 0)
	{
		for (i = 1; i < a; i++)
		{
			n = m * n;
		}
		cout << 1/n << endl;
	}
	else if (s == 0)
	{
		cout << 1 << endl;
	}
	
#endif	
#if defined FACTORIAL
	long long n;
	cout << "������� �����:"; cin >> n;
	for(int s=n-1;s>0;s--)
	{
		n = n * s;
	}
	cout << n << endl;



#endif

#if defined FIBONACCI_LIMIT
	int n,a,b,x;
	cout << "������� ������ ���� ���������:" << endl;
	a = 0;
	b = 1;
	cin >> n;
	cout << a << "  " << b << "  ";
	for(;b+a<n;)
	{
		x = b;
		b = a + b;
		a = x;
		
		cout << b << "  ";
	}



#endif
#if defined FIBONACCI_NUM
	int n, a, b, x;
	cout << "������� ���������� ����� ���� ���������:" << endl;
	a = 0;
	b = 1;
	cin >> n;
	cout << a << "  " << b << "  ";
	for (int l=2; l<n;l++)
	{
		x = b;
		b = a + b;
		a = x;

		cout << b << "  ";
	}
#endif

#if defined PRIME_NUMBERS

	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl
		cout << (char)i << " ";
	}


#endif



}