#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <ctime>
#include <windows.h>
using namespace std;

int main ()
{
    int n;
    int sk;
    int kubas;
    int kvs;
    int fakt;
    int i = 1;
    char a;
    char b;
    for ( ;; )
    {
        cout << "Prasome ivesti skaiciu atitinkanti veiksma, kurio jums reikia" << endl;
        cout << "1.Rasti skaicius Kuba" << endl;
        cout << "2.Rasti skaicaus kvadratine sakni" << endl;
        cout << "3.Rasti skaiciaus faktoriala" << endl;
        cin >> n;

        if (n == 1)
        {
            cout << "Prasome ivesti skaiciu, kurio kuba norite apskaiciuoti" << endl;
            cin >> sk;
            cout << "Skaiciaus " << sk << " kubas yra: " << sk*sk*sk << endl;
            cout << endl;
            cout << "Ar norite atlikti dar viena veiksma? (t / n)" << endl;
            cin >> a;
            if (a == 't')
            {
                continue;
            }
            else break;
        }
        else if (n == 2)
        {
            cout << "Prasome ivesti skaiciu, kurio kvadratine sakni norite rasti" << endl;
            cin >> sk;
            cout << "Skaiciaus " << sk << " kvadratine saknis yra: " << sqrt(sk) << endl;
            cout << endl;
            cout << "Ar norite atlikti dar viena veiksma? (t / n)" << endl;
            cin >> a;
            if (a == 't')
            {
                continue;
            }
            else break;
        }
        else if (n == 3)
        {
            cout << "Prasome ivesti skaiciu, kurio faktoriala norite rasti" << endl;
            cin >> sk;
            for (i = sk; i > 0; i--)
                fakt *= i;
            cout << "Skaiciaus " << sk << " faktorialas yra: " << fakt << endl;
            cout << endl;
            cout << "Ar norite atlikti dar viena veiksma? (t / n)" << endl;
            cin >> a;
            if (a == 't')
            {
                continue;
            }
            else break;
        }
        else if ( n > 3)
        {
            system("cls");
            cout << "Atsiprasome, bet skaicius, kuri ivedete nera vienas is duotu pasirinkimu" << endl;
            cout << endl;
            continue;

        }
        else if (n == 0)
        {
            cout << "Ups, ar skiriate skaicius nuo raidziu?" << endl;
            cout << "Nigga waaat!?" << endl;
            break;

        }

    }
}
//qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM
