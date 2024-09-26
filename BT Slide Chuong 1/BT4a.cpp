#include <iostream>
using namespace std;

bool isValidDate(int date, int month, int year)
{
    if (year < 1)
        return 0;

    if (month < 1 || month > 12)
        return 0;

    if (date < 1 || date > 31)
        return 0;

    if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && date > 30)
        return 0;

    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (date > 29)
                return 0;
        }
        else if (date > 28)
            return 0;
    }
    return 1;
}

int main()
{
    int date;
    int month;
    int year;
    cin >> date >> month >> year;

    while (!isValidDate(date, month, year))
    {
        cout << "Ngay khong ton tai, vui long nhap lai: ";
        cin >> date >> month >> year;
    }

    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (date == 28)
                cout << "Ngay tiep theo la: " << date + 1 <<"/"<<month<<"/"<<year;
            else if (date == 29)
                cout << "Ngay tiep theo la: 1/"<<month<<"/"<<year;
            else
                cout << "Ngay tiep theo la: " << date + 1<<"/"<<month<<"/"<<year;
        }
    }
    else if (date ==31 && month==12){
        cout<<"Ngay tiep theo la: 1/1"<<"/"<<year+1;
    }
    else if (date == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
    {
        cout << "Ngay tiep theo la: 1"<<"/"<<month+1<<"/"<<year;
    }
    else if (date == 30 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
    {
        cout << "Ngay tiep theo la: 1"<<"/"<<month+1<<"/"<<year;
    }
    else 
        cout << "Ngay tiep theo la: " << date + 1<<"/"<<month<<"/"<<year+1;

    return 0;
}