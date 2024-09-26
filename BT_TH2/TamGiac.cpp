#include <iostream>
#include <cmath>
#include"TamGiac.h"
using namespace std;

    void TamGiac::Nhap() {
        cout << "Nhap toa do diem A (x,y): ";
        cin >> A[0] >> A[1];
        cout << "Nhap toa do diem B (x,y): ";
        cin >> B[0] >> B[1];
        cout << "Nhap toa do diem C (x,y): ";
        cin >> C[0] >> C[1];
    }

    void TamGiac::Xuat() {
        cout << "A(" << A[0] << ", " << A[1] << ")" << endl;
        cout << "B(" << B[0] << ", " << B[1] << ")" << endl;
        cout << "C(" << C[0] << ", " << C[1] << ")" << endl;
    }

    void TamGiac::TinhTien(double dx, double dy) {
        A[0] += dx;
        A[1] += dy;
        B[0] += dx;
        B[1] += dy;
        C[0] += dx;
        C[1] += dy;
    }

    void TamGiac::PhongTo(double factor) {
        A[0] *= factor;
        A[1] *= factor;
        B[0] *= factor;
        B[1] *= factor;
        C[0] *= factor;
        C[1] *= factor;
    }

    void TamGiac::ThuNho(double factor) {
        PhongTo(1.0 / factor);
    }

    void TamGiac::Quay(double angle) {
        double angleRad = angle * M_PI / 180.0;
        double tempA[2], tempB[2], tempC[2];

        tempA[0] = A[0] * cos(angleRad) - A[1] * sin(angleRad);
        tempA[1] = A[0] * sin(angleRad) + A[1] * cos(angleRad);
        tempB[0] = B[0] * cos(angleRad) - B[1] * sin(angleRad);
        tempB[1] = B[0] * sin(angleRad) + B[1] * cos(angleRad);
        tempC[0] = C[0] * cos(angleRad) - C[1] * sin(angleRad);
        tempC[1] = C[0] * sin(angleRad) + C[1] * cos(angleRad);

        A[0] = tempA[0];
        A[1] = tempA[1];
        B[0] = tempB[0];
        B[1] = tempB[1];
        C[0] = tempC[0];
        C[1] = tempC[1];
    }
