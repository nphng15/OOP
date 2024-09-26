#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    float x;
    float y;
};

void inputPoint(Point points[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y;
    }
}

float range(Point p1, Point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main()
{
    int n;
    cin >> n;
    struct Point points[100];
    inputPoint(points, n);

    int x;
    int y;
    float max = 0;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (range(points[i], points[j]) > max)
            {
                max = range(points[i], points[j]);
                x = i;
                y = j;
            }
        }
    }

    cout << "2 diem co khoang cach lon nhat la diem thu " << x << " va " << y;
}