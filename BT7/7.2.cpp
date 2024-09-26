#include <iostream>
using namespace std;

class Matrix;

class Vector
{
private:
    double *coords;
    int n;

public:
    Vector();
    Vector(int N, double x);
    Vector(const Vector &a);
    ~Vector();
    void Nhap();
    void Xuat();
    int Cong(const Vector &a);
    void NhanK(const double &k);
    int Tru(Vector a);
    double TichVoHuong(const Vector &a);
    friend Vector multiply(const Matrix &a, const Vector &b); // Khai báo hàm bạn multiply ở đây
};

class Matrix
{
private:
    int m; // dòng
    int n; // cột
    double **elements;

public:
    Matrix();
    ~Matrix();
    Matrix(const Matrix &a);
    void Nhap();
    void Xuat();
    int Cong(const Matrix &a);                                // return 1 nếu cộng được
    void Nhan(const double &k);                               // Nhân với 1 số K
    int Nhan(const Matrix &a);                                // Nhân với 1 CMatrix, return 1 nếu nhân được
    friend Vector multiply(const Matrix &a, const Vector &b); // Khai báo hàm bạn multiply ở đây
};

Vector::Vector()
{
    n = 0;
    coords = nullptr;
}

Vector::Vector(int N, double x)
{
    n = N;
    coords = new double[n];
    for (int i = 0; i < n; i++)
    {
        coords[i] = x;
    }
}

Vector::Vector(const Vector &a)
{
    n = a.n;
    coords = new double[n];
    for (int i = 0; i < n; i++)
    {
        coords[i] = a.coords[i];
    }
}

Vector::~Vector()
{
    delete[] coords;
}

void Vector::Nhap()
{
    cout << "Nhap so chieu cua vector: ";
    cin >> n;
    coords = new double[n];
    cout << "Nhap toa do cac chieu cua vector:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap toa do thu " << i + 1 << ": ";
        cin >> coords[i];
    }
}

void Vector::Xuat()
{
    cout << "(";
    for (int i = 0; i < n; i++)
    {
        cout << coords[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << ")" << endl;
}

int Vector::Cong(const Vector &a)
{
    if (n != a.n)
        return 0;
    for (int i = 0; i < n; i++)
    {
        coords[i] += a.coords[i];
    }
    return 1;
}

void Vector::NhanK(const double &k)
{
    for (int i = 0; i < n; i++)
    {
        coords[i] *= k;
    }
}

int Vector::Tru(Vector a)
{
    if (n != a.n)
        return 0;
    for (int i = 0; i < n; i++)
    {
        coords[i] -= a.coords[i];
    }
    return 1;
}

double Vector::TichVoHuong(const Vector &a)
{
    double result = 0;
    for (int i = 0; i < n; i++)
    {
        result += coords[i] * a.coords[i];
    }
    return result;
}

Matrix::Matrix()
{
    m = 0;
    n = 0;
    elements = nullptr;
}

Matrix::~Matrix()
{
    for (int i = 0; i < m; i++)
    {
        delete[] elements[i];
    }
    delete[] elements;
}

Matrix::Matrix(const Matrix &a)
{
    m = a.m;
    n = a.n;
    elements = new double *[m];
    for (int i = 0; i < m; i++)
    {
        elements[i] = new double[n];
        for (int j = 0; j < n; j++)
        {
            elements[i][j] = a.elements[i][j];
        }
    }
}

void Matrix::Nhap()
{
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;
    elements = new double *[m];
    cout << "Nhap cac phan tu cua ma tran:" << endl;
    for (int i = 0; i < m; i++)
    {
        elements[i] = new double[n];
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap phan tu thu [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> elements[i][j];
        }
    }
}

void Matrix::Xuat()
{
    cout << "Ma tran:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << elements[i][j] << " ";
        }
        cout << endl;
    }
}

int Matrix::Cong(const Matrix &a)
{
    if (m != a.m || n != a.n)
        return 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            elements[i][j] += a.elements[i][j];
        }
    }
    return 1;
}

void Matrix::Nhan(const double &k)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            elements[i][j] *= k;
        }
    }
}

int Matrix::Nhan(const Matrix &a)
{
    if (n != a.m)
        return 0;
    double **result = new double *[m];
    for (int i = 0; i < m; i++)
    {
        result[i] = new double[a.n];
        for (int j = 0; j < a.n; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += elements[i][k] * a.elements[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        delete[] elements[i];
    }
    delete[] elements;
    // Cập nhật ma trận mới
    m = a.m;
    n = a.n;
    elements = result;
    return 1;
}


Vector multiply(const Matrix &a, const Vector &b)
{
    Vector result(a.m, 0); 
    if (a.n != b.n)
    {
        cout << "Khong the nhan ma tran voi vector vi so cot cua ma tran khong bang so chieu cua vector." << endl;
        return result; 
    }
    for (int i = 0; i < a.m; i++)
    {
        for (int j = 0; j < a.n; j++)
        {
            result.coords[i] += a.elements[i][j] * b.coords[j];
        }
    }
    return result;
}

int main()
{
    Matrix mat;
    Vector vec;

    cout << "Nhap ma tran:" << endl;
    mat.Nhap();

    cout << "Nhap vector:" << endl;
    vec.Nhap();

    cout << "Ma tran vua nhap:" << endl;
    mat.Xuat();

    cout << "Vector vua nhap:" << endl;
    vec.Xuat();

    Vector result = multiply(mat, vec);
    cout << "Tich cua ma tran va vector:" << endl;
    result.Xuat();

    return 0;
}
