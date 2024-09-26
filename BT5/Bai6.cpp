#include <iostream>
#include <stack>
using namespace std;

bool IsPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void PrimeFactorization(int num)
{
    int number = num;
    stack<int> factors;
    for (int i = 2; i <= num; ++i)
    {
        while (num % i == 0 && IsPrime(i))
        {
            factors.push(i);
            num /= i;
        }
    }
    cout << number << " = ";
    while (!factors.empty())
    {
        cout << factors.top();
        factors.pop();
        if (!factors.empty())
        {
            cout << " * ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> n;
    PrimeFactorization(n);
    return 0;
}
