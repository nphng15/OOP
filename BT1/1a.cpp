#include <iostream>
#include <vector>
using namespace std;

void input(int A[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void sort(int A[], int &n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
}

void output(int A[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int A[100];
    int n;
    cin >> n;
    input(A, n);
    sort(A, n);
    output(A, n);
    return 0;
}