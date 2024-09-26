#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    float iTuSo1;
    float iMauSo1;
    float iTuSo2;
    float iMauSo2;
    cin >> iTuSo1 >> iMauSo1;
    cin >> iTuSo2 >> iMauSo2;

    if (iMauSo1<0) {
        iTuSo1 *= -1;
        iMauSo1 *= -1;
    }

    if (iMauSo2 < 0){
        iTuSo2 *= -1;
        iMauSo2 *= -1;
    }

    if (iTuSo1/iMauSo1 > iTuSo2/iMauSo2)
        cout<< iTuSo1 << "/" << iMauSo1;
    else cout<< iTuSo2 << "/" << iMauSo2;

    return 0;
}