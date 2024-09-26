class TamGiac
{
private:
    double a, b, c; // Các cạnh của tam giác

public:
    // Phương thức thiết lập
    TamGiac(double side1, double side2, double side3)
    {
        a = side1;
        b = side2;
        c = side3;
    }

    // Phương thức huỷ bỏ (nếu cần)
    ~TamGiac()
    {
        // Có thể thêm xử lý huỷ bỏ ở đây
    }

    // Hàm thành phần nhập thông tin tam giác
    void Nhap()
    {
        // Nhập giá trị các cạnh a, b, c từ bàn phím
    }

    // Hàm thành phần xuất thông tin tam giác
    void Xuat()
    {
        // Xuất thông tin về tam giác (cạnh và các thuộc tính khác)
    }

    // Hàm tịnh tiến tam giác theo vector v (a, b)
    void TinhTien(double a, double b)
    {
        // Cập nhật tọa độ các đỉnh sau khi tịnh tiến
    }

    // Hàm quay tam giác tâm O, góc quay α (radians)
    void Quay(double alpha)
    {
        // Cập nhật tọa độ các đỉnh sau khi quay
    }

    // Hàm phóng to tam giác với hệ số tỷ lệ k
    void PhongTo(double k)
    {
        // Cập nhật tọa độ các đỉnh sau khi phóng to
    }

    // Hàm thu nhỏ tam giác với hệ số tỷ lệ k
    void ThuNho(double k)
    {
        // Cập nhật tọa độ các đỉnh sau khi thu nhỏ
    }

    // Hàm vẽ tam giác
    void VeTamGiac()
    {
    }
};
