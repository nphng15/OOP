class Diem
{
private:
    double x; // Hoành độ
    double y; // Tung độ

public:
    // Phương thức thiết lập
    Diem(double hoanhDo, double tungDo)
    {
        x = hoanhDo;
        y = tungDo;
    }

    // Hàm thành phần cho phép thay đổi nội dung của điểm
    void SetDiem(double hoanhDo, double tungDo)
    {
        x = hoanhDo;
        y = tungDo;
    }

    // Hàm thành phần lấy hoành độ
    double GetHoanhDo()
    {
        return x;
    }

    // Hàm thành phần lấy tung độ
    double GetTungDo()
    {
        return y;
    }

    // Hàm thành phần tịnh tiến điểm theo vector (dx, dy)
    void TinhTien(double dx, double dy)
    {
        x += dx;
        y += dy;
    }

    // Hàm thành phần nhập thông tin điểm từ bàn phím
    void Nhap()
    {
        cout << "Nhap hoanh do: ";
        cin >> x;
        cout << "Nhap tung do: ";
        cin >> y;
    }

    // Hàm thành phần xuất thông tin điểm ra màn hình
    void Xuat()
    {
        cout << "Toa do diem: (" << x << ", " << y << ")" << endl;
    }

    // Hàm thành phần vẽ điểm trong chế độ đồ họa
    void VeDiem()
    {
    }
};
