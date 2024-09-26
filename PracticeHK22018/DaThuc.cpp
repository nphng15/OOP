#include <iostream>
using namespace std;

class DaThuc
{
private:
    int n;
    int *values;

public:
    DaThuc() {}
    ~DaThuc() {}

    friend istream& operator>>(istream&is, DaThuc &a){
        cout<<"Nhap bac cua da thuc: ";
        is>>a.n;
        a.values = new int[a.n];
        cout<<"Nhap cac gia tri cua da thuc (cao xuong thap): ";
        for (int i=a.n; i>=0; i--){
            is>>a.values[i];
        }
        return is;
    }
    friend ostream& operator<<(ostream&os, DaThuc a){
        cout<<"Da thuc: ";
        for (int i=a.n; i>=0; i--){
            if (i==0) os << a.values[0] << " = 0"<<endl;
            else os << a.values[i] <<"x^"<<i<<" + ";
        }
        return os;
    }
    DaThuc operator+(DaThuc a){
        DaThuc c;
        if (this->n > a.n) c.n = this->n;
        else c.n = a.n;
        c.values = new int[c.n];

        for (int i=c.n; i>=0; i--){
            c.values[i]=0;
        }
        for (int i=this->n; i>=0; i--){
            c.values[i]+=this->values[i];
        }

        for (int i=a.n; i>=0; i--){
            c.values[i]+=a.values[i];
        }


        return c;
    }
};

int main(){
    DaThuc a;
    cin>>a;
    DaThuc b;
    cin>>b;
    cout<<a+b;
}