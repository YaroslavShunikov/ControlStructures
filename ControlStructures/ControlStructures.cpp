#include<iostream>

using namespace std;
//#define TEMPERATURE
//#define TARGET
#define CALC_1
//define-определить
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Rus");
#if defined TEMPERATURE
	int temperature;
	cout << "Введите т-ру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;

	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif //TEMPERATURE

#if defined TARGET
	int n;
	cout << "Введите число:"; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Цель поражена" << endl;

	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}
#endif //TARGET

#if defined CALC_1
	double a, b; //числа 
	char s; //знак операции
	cout << "Введите простое арефметическое выражение";
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