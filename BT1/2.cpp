#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    float x;
    float y;
};

void SetDiem(Point &p1, float x = 0, float y = 0)
{             // Phải dùng con trỏ trỏ đến thì mới thay đổi phần tử được
    p1.x = x; // Đóng vai trò giống như là 1 biến
    p1.y = y;
}

void inputPoint(Point points[], int n)
{
    for (int i = 0; i < n; i++)
    {
        float x = 0;
        float y = 0;

        if (i % 3 == 0)
        {
            cin >> x >> y;
            SetDiem(points[i], x, y);
        }

        if (i % 3 == 1)
        {
            cin >> x;
            SetDiem(points[i], x);
        }

        if (i % 3 == 2)
        {
            SetDiem(points[i]);
        }
    }
}

float range(Point &p1, Point &p2) // chỉ cần quan tâm kết quả nên không cần sử dụng con trỏ
{                               // nên dùng để tiết kiệm bộ nhớ vì nó sẽ tạo ra 1 bản sao và gán vào biến p1 p2
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

    for (int i = 0; i < n; i++)
    {
        cout << "(" << points[i].x << ";" << points[i].y << ")" << endl;
    }
    
    cout << "2 diem co khoang cach lon nhat la "
         << "(" << points[x].x << ";" << points[x].y << ")"
         << " va "
         << "(" << points[y].x << ";" << points[y].y << ")";
}