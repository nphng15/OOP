class ThoiGian {
private:
    int gio;    // Giờ
    int phut;   // Phút
    int giay;   // Giây

public:
    // Phương thức thiết lập
    ThoiGian(int h, int m, int s) {
        gio = h;
        phut = m;
        giay = s;
    }

    // Hàm thành phần xuất thông tin thời gian
    void Xuat() {
        cout << "Thoi gian: " << gio << " gio " << phut << " phut " << giay << " giay" << endl;
    }

    // Hàm thành phần tịnh tiến thời gian theo số giây
    void TinhTien(int soGiay) {
        // Cập nhật thời gian sau khi tịnh tiến
        // (Xử lý việc cộng thêm số giây vào giờ, phút, giây hiện tại)
    }

    // Hàm thành phần nhập thông tin thời gian từ bàn phím
    void Nhap() {
        cout << "Nhap gio: ";
        cin >> gio;
        cout << "Nhap phut: ";
        cin >> phut;
        cout << "Nhap giay: ";
        cin >> giay;
    }

    // Hàm thành phần khác (ví dụ: cộng, trừ thời gian, so sánh thời gian, ...)
    // ...

    // Hàm vẽ thời gian (tùy chọn)
    void VeThoiGian() {
        // Sử dụng thư viện đồ họa (ví dụ: SDL, OpenGL) để vẽ thời gian
    }
};
