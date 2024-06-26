#include <iostream>
using namespace std;

int main()
{
    string can[10] = {"Canh" , "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky" };
    string chi[12] = {"Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui" };

    int nam;
    cout << "Nhap Nam: ";
    cin >> nam;

    string cn = can[nam % 10];
    string ci = chi[nam % 12];

    cout << cn << " " << ci;

    return 0;
}
