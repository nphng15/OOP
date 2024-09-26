#include <iostream>
#include <string>

using namespace std;

struct NhanVien{
    string MaNV;
    string name;
    string Phong_ban;
    int salary;
    int bonus;
    int salary_sum;
};

void Input(NhanVien DanhSach[],int iSoNV){
    for (int i=0; i<iSoNV; i++){
        
        cout<<"MaNV: ";
        cin.getline(&DanhSach[i].MaNV[0],9);
        cout<<"TenNV: ";
        cin.getline(&DanhSach[i].name[0],20);
        cout<<"Phong ban: ";
        cin.getline(&DanhSach[i].Phong_ban[0],10);
        cout<<"Luong co ban: ";
        cin>>DanhSach[i].salary;
        cout<<"Thuong: ";
        cin>>DanhSach[i].bonus;
        cin.ignore();
        DanhSach[i].salary_sum=DanhSach[i].salary+DanhSach[i].bonus;
    }
    
}

void Output1(NhanVien DanhSach[],int iSoNV){
    cout<<"Tong thuc lanh thang cua nhan vien: "<<endl;
    for (int i=0; i<iSoNV; i++){
       cout<< &DanhSach[i].name[0] <<": "<<DanhSach[i].salary_sum<<endl;
    }
    
}

void SapXepB(NhanVien DanhSach[], int iSoNV) {
    for (int i = 0; i < iSoNV - 1; i++) {
        for (int j = i + 1; j < iSoNV; j++) {
            if (DanhSach[i].salary > DanhSach[j].salary) {
                swap(DanhSach[i], DanhSach[j]);
            }
        }
    }
}

int Dem(NhanVien DanhSach[], int iSoNV){
    int count=0;
    for (int i=0; i<iSoNV; i++){
        if (DanhSach[i].bonus>=1200000) count++;
    }
    return count;
}

void SapXepD(NhanVien DanhSach[], int iSoNV){
    for (int i = 0; i < iSoNV - 1; i++) {
        for (int j = i + 1; j < iSoNV; j++) {
        if (DanhSach[i].Phong_ban > DanhSach[j].Phong_ban) swap(DanhSach[i], DanhSach[j]);;
    }
    }
     for (int i = 0; i < iSoNV - 1; i++) {
        for (int j = i + 1; j < iSoNV; j++) {
        if ((DanhSach[i].Phong_ban == DanhSach[j].Phong_ban && DanhSach[i].MaNV > DanhSach[j].MaNV)) swap(DanhSach[i], DanhSach[j]);
    }
}
}
int main(){
    int iSoNV;
    cout<<"Nhap so luong nhan vien: ";
    cin>>iSoNV;
    cin.ignore(32767, '\n');

    struct NhanVien DanhSach[iSoNV];

    Input(DanhSach, iSoNV);

    Output1(DanhSach, iSoNV);

    cout<<"Nhan vien co luong co ban thap nhat: "<<endl;
    SapXepB(DanhSach, iSoNV);
    cout<< &DanhSach[0].name[0]<<endl; 
    cout<< &DanhSach[1].name[0]<<endl;
    cout<<"So luong nhan vien co muc thuong dat dieu kien: " << Dem(DanhSach, iSoNV)<<endl;

    SapXepD(DanhSach, iSoNV);
    cout<<"Danh sach nhan vien trong cau d: "<<endl;
    for (int i=0; i<iSoNV; i++){
        cout<< &DanhSach[i].name[0] <<endl;
    }
}