#include <iostream>
#include <stack>
using namespace std;

string DecimalToHexadecimal(int num)
{
    string hex = "";
    while (num > 0)
    {
        int remainder = num % 16;
        if (remainder < 10)
        {
            hex = char('0' + remainder) + hex;
        }
        else
        {
            hex = char('A' + remainder - 10) + hex;
        }
        num /= 16;
    }
    return hex;
}

string DecimalToOctal(int num)
{
    string octal = "";
    while (num > 0)
    {
        int remainder = num % 8;
        octal = char('0' + remainder) + octal;
        num /= 8;
    }
    return octal;
}

string DecimalToBinary(int num)
{
    stack<int> binaryStack;
    while (num > 0)
    {
        int bit = num % 2;
        binaryStack.push(bit);
        num /= 2;
    }
    string binary = "";
    while (!binaryStack.empty())
    {
        binary += char('0' + binaryStack.top());
        binaryStack.pop();
    }
    return binary;
}

int main()
{
    int number;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> number;

    cout << "He thap luc phan: " << DecimalToHexadecimal(number) << endl;
    cout << "He bat phan: " << DecimalToOctal(number) << endl;
    cout << "He nhi phan: " << DecimalToBinary(number) << endl;

    return 0;
}
