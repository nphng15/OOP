#include <iostream>
#include <cmath>
using namespace std;

void RutGon(int &iTuSo, int &iMauSo, int GCD)
{
    iTuSo /= GCD;
    iMauSo /= GCD;
}

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}
int main()
{
    int iTuSo;
    int iMauSo;
    int GCD;
    cin >> iTuSo >> iMauSo;

    if (iMauSo == 0)
        return 0;

    GCD = UCLN(abs(iTuSo), abs(iMauSo));
    RutGon(iTuSo, iMauSo, GCD);

    if (iMauSo < 0)
    {
        iTuSo *= -1;
        iMauSo *= -1;
    }

    cout << iTuSo << "/" << iMauSo;
    return 0;
}