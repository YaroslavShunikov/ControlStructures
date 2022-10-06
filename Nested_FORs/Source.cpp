#include<iostream>
using namespace std;
//#define TABLE
//#define TRIANGHLE_1
//#define TRIANGHLE_2
//#define TRIANGHLE_3
//#define TRIANGHLE_4

void main()
{
#ifdef TABLE
    setlocale(LC_ALL, " ");
    for (int i = 1; i < 10; ++i)
    {
        for (int j = 1; j < 10; ++j)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }

#endif // TABLE

#ifdef TRIANGHLE_1
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "Введите кол-во звёздочек: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
#endif  

#ifdef TRIANGHLE_2
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "Введите кол-во звёздочек: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
#endif
 
#ifdef TRIANGHLE_3
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "Введите кол-во звёздочек: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) cout << "  ";
        for (int j = i; j < n; j++) cout << "* ";
        cout << endl;
    }
#endif
    setlocale(LC_ALL, "RUS");
    int n,s;
    s = 1;
    cout << "Введите ширину: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            //if ((i + j) % 2 == 0) cout << "+"; else cout << "-";
            //(i + j) % 2 == 0 ? cout << "+" : cout << "-";
            //cout << ((i + j) % 2 == 0 ? "+" : "-");
            cout << (i % 2==j% 2 ? "+" : "-");
        }
        cout << endl;
    }
}