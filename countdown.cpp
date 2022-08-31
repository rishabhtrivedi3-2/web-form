#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
int a = 10;
int timer(int h, int m, int s)
{
    cout << "Hours";
    cout.width(a);
    cout <<"\t\t\t"<<"Min";
    cout.width(a*2);
    cout <<"\t\t\t"<< "Sec";
    if ((s <= 59) && (m <= 59) && (h <= 59))
    {
        for (int j = h; j > h - 1; j--)
        {
            // cout.width(a);
            cout<<endl;
            cout << j<<endl;

            for (int a = s; a >= 0; a--)
            {
                cout.width(a * 10);
                
                     cout<<"\t\t\t"<<a<<endl;

                Sleep(1000);}
                for (int i = m; i >= 0; i--)
                {
                    cout.width(a * 2);
                    cout <<endl<< "\t\t"<<i;

                    Sleep(1000);
                    if (m != 0)
                    {

                        for (s = 59; s >= 0; s--)
                        {
                            cout.width(a * 10);
                            cout<<"\t\t\t"<<s<<endl;
                            Sleep(1000);
                        }
                    }
                }
            }

            if (h = h - 1)

            {

                for (int i = h; i >= 0; i--)
                {
                    cout<< endl<< i;
                    Sleep(1000);
                    for (int j = 59; j > 0; j--)
                    {
                        cout<<endl 
                             << j;
                        Sleep(1000);
                        for (s = 59; s >= 0; s--)
                        {
                            cout << endl<< s;
                            Sleep(1000);
                        }
                    }
                }
            }

            else if ((m == 0) || (h == 0) && (s != 0))
            {

                for (s; s >= 0; s--)
                {
                    cout <<endl<<  s;
                    Sleep(1000);
                }
                for (int e = m - 1; e >= 0; e--)
                {
                    cout << endl<<e;
                    Sleep(1000);
                }

                
            }
            if ((m == 0) && (h == 0) && (s != 0))
            {

                for (s; s >= 0; s--)
                {
                    cout <<endl<< s;
                    Sleep(1000);
                }
                for (int q = m; q >= 0; q--)
                {
                    cout << endl<<q;
                    Sleep(1000);
                }

                for (s = 59; s >= 0; s--)
                {
                    cout << endl<<s;
                    Sleep(1000);
                }
            }
        }
    }

int main()
{
    int h, m, s;
    cout << "enter:\nhour:";
    cin >> h;
    cout << "\nmin:";
    cin >> m;
    cout << "\ntime:";
    cin >> s;
    timer(h, m, s);
}
