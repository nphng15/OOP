#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
class Point
{
private:
    double x;
    double y;

public:
    void Nhap()
    {
        cin >> x;
        cin >> y;
    }
    void Xuat()
    {
        cout << setprecision(2) <<x << " " << setprecision(2)<< y << endl;
    }
    void Tinhtien(double x, double y)
    {
        this->x += x;
        this->y += y;
    }
    friend Point Trongtam(Point *a, int n);
    double getx() { return x; }
    double gety() { return y; }
    void Suadoi(double x, double y){
        this->x=x;
        this->y=y;
    }
};
Point Trongtam(Point *a, int n)
{
    Point kq;
    kq.x = 0;
    kq.y = 0;
    for (int i = 0; i < n; i++)
    {
        kq.x += a[i].x;
        kq.y += a[i].y;
    }
    kq.x /= n;
    kq.y /= n;
    return kq;
}
class DaGiac
{
private:
    int n;
    Point *Dinh;

public:
    void Nhap();
    void Xuat();
    void Tinhtien(double up, double right);
    void Phongto(int i);
    void Thunho();
    void Quay(double goc);
};

void DaGiac::Nhap()
{
    cin >> n;
    Dinh = new Point[n];
    for (int i = 0; i < n; i++)
    {
        Dinh[i].Nhap();
    }
}
void DaGiac::Xuat()
{
    cout << "Da giac co " << n << " dinh" << endl;
    for (int i = 0; i < n; i++)
    {
        Dinh[i].Xuat();
    }
}
void DaGiac::Tinhtien(double x, double y)
{
    for (int i = 0; i < n; i++)
    {
        Dinh[i].Tinhtien(x, y);
    }
}
void DaGiac::Phongto(int s)
{
    // tim trong tam da giac
    Point center = Trongtam(Dinh, n);
    double trongtamx=center.getx();

    for (int i = 0; i < n; i++)
    {
        double tamx;
        double tamy;
        if (Dinh[i].getx() < center.getx())
            tamx = -1 * s;
        else
            tamx = s;
        if (Dinh[i].gety() < center.gety())
            tamy = -1 * s;
        else
            tamy = s;
        Dinh[i].Tinhtien(tamx, tamy);
    }
}
void DaGiac::Quay(double goc)
{
    Point center=Trongtam(Dinh,n);
    double center_x=center.getx();
    double center_y=center.gety();
    for(int i=0;i<n;i++){
        double tamx=Dinh[i].getx()-center.getx();
        double tamy=Dinh[i].gety()-center.gety();
       
        double rad=goc*M_PI/180;
        double x_quay =tamx*cos(rad)-tamy*sin(rad);
        double y_quay=tamx*sin(rad)+tamy*cos(rad);
      
        tamx=x_quay+center_x;
        tamy=y_quay+center_y;
        
        Dinh[i].Suadoi(tamx,tamy);
    }
}