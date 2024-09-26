#include<iostream>
using namespace std;

class DaThuc{
private:
    int iBac;
    double *Elements;
public:
    friend void Nhap(DaThuc& a);
    friend void Xuat(DaThuc a);
    friend void Cong(DaThuc&a , int n);
    friend void Tru(DaThuc&a, int n);
    friend void Nhan(DaThuc&a , int n);
};
void XuatDaThuc(int n)
{
    char tmp='a';
    for(int i=n;i>=0;i--){
        if(i==0) cout<<tmp<<" = 0"<<endl;
        else cout<<tmp<<"x^"<<n<<" + ";
        tmp++;
    }
}
void Nhap(DaThuc& a)
{
    cout<<"Ban muon nhap da thuc bac may: ";
    cin>>a.iBac;
    a.Elements=new double [a.iBac+1];
    cout<<"Hay nhap cac thanh phan cua Da Thuc: "<<endl;
    XuatDaThuc(a.iBac);
    for(int i=0;i<=a.iBac;i++){
        cin>>a.Elements[i];
    }
}
void Xuat(DaThuc a)
{
    for(int i=0;i<=a.iBac;i++){
        if(i==a.iBac) cout<<a.Elements[i]<<" = 0"<<endl;
        else cout<<a.Elements[i]<<"x^"<<a.iBac-i<<" + ";
    }
}
void Cong(DaThuc& a , int n)
{
    a.Elements[a.iBac]+=n;
}
void Tru(DaThuc& a, int n)
{
    Cong(a,-1*n);
}
void Nhan(DaThuc&a, int n)
{
    for(int i=0;i<=a.iBac;i++){
        a.Elements[i]*=n;
    }
}
int main()
{
    DaThuc a;
    Nhap(a);
    cout<<"Da Thuc ban da nhap la: "<<endl;
    Xuat(a);
    cout<<"Ban muon cong, tru va nhan voi bao nhieu: ";
    int n;
    cin>>n;
    Cong(a,n);
    cout<<"Da Thuc sau khi cong la: "<<endl;
    Xuat(a);
    
    // Tru(a,n);
    // cout<<"Da Thuc sau khi tru la: "<<endl;
    // Xuat(a);

    // Nhan(a,n);
    // cout<<"Da Thuc sau khi nhan la: "<<endl;
    // Xuat(a);
}