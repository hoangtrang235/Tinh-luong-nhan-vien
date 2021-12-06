// Bai12-Tinh-luong-nhan-vien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Nhap so nhan vien: ";
    int n, i, j;
    cin >> n;
    int point[100];
    string name[100];
    string id[100];
    for (i = 1; i <= n; i++) 
    {
        cout << "Nhap ho ten nhan vien: ";
        cin >> name[i];
        cout << "Nhap ma so nhan vien: ";
        cin >> id[i];
        cout << "Nhap so diem cua nhan vien: ";
        cin >> point[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (point[i] <= 10) { point[i] = point[i] * 50; }
        else if(point[i] <= 20) { point[i] = 500 + (point[i] - 10) * 75; }
        else { point[i] = 750 + 500 + (point[i] - 20) * 100; };
    }
    int tgian;
    string tgian1;
    string tgian2;
    cout << "Sap xep luong theo thu tu giam dan: " << '\n';
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            if (point[i] < point[j])
            {
                tgian = point[i];
                point[i] = point[j];
                point[j] = tgian;
                tgian1 = name[i];
                name[i] = name[j];
                name[j] = tgian1;
                tgian2 = id[i];
                id[i] = id[j];
                id[j] = tgian2;
            }
        }
        cout << "Ten: " << name[i] << " ";
        cout << "Ma so: " << id[i] << " ";
        cout << "So tien luong: " << point[i] << "k" << '\n';
    }
    cout << '\n';
}

