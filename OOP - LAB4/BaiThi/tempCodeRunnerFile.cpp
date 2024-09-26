void nhap_lich_su_mua_coin(map<int, ThanhVien *> &danh_sach_thanh_vien, int so_thang, int so_luong)
{
    for (int i = 0; i < so_thang; ++i)
    {
        cout << "Nhap lich su mua coin thang " << i + 1 << " (ket thuc bang -1 -1):" << endl;
        for (int j=1; j<so_luong; j++)
        {
            int id_nguoi_nop;
            int so_coin;
            cin >> id_nguoi_nop >> so_coin;
            if (danh_sach_thanh_vien.find(id_nguoi_nop) != danh_sach_thanh_vien.end())
            {
                danh_sach_thanh_vien[id_nguoi_nop]->muaCoin(so_coin);
            }
            else
            {
                cout << "ID nguoi nop khong ton tai." << endl;
            }
        }
    }
}
