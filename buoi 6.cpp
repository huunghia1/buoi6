#include <iostream>
#include <cctype>

using namespace std;

// Hàm nh?p m?ng
void nhapMang(int a[], int& n) {
    cout << "Nhap so luong: ";
    cin >> n;

    cout << "Nhap " << n << " phan tu:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

// Hàm xu?t m?ng
void xuatMang(int a[], int n) {
    cout << "Mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Hàm xu?t kí t? hoa
void xuatKiTuHoa(const string& str) {
    cout << "Cac ki tu in hoa trong chuoi la: ";
    for (char ch : str) {
        if (isupper(ch)) {
            cout << ch << " ";
        }
    }
    cout << endl;
}

// Ð?o kí t? chu?i
void reverseString(string& str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {

    int choice;

    do {
        cout << "=== Lua chon yeu cau ===" << endl;
        cout << "1. Nhap/Xuat mang." << endl;
        cout << "2. Xuat ki tu in hoa trong chuoi" << endl;
        cout << "3. Ðao nguoc cac ki tu trong chuoi" << endl;
        cout << "4. Ðoi chu xen ke 1 chu hoa và 1 chu thuong" << endl;
        cout << "5. Ðem mot ki tu xuat hien bao nhieu lan trong chuoi" << endl;
        cout << "6. Tim kiem xem ki tu nao xuat hien nhieu nhat" << endl;
        cout << "7. Kiem tra chuoi doi xung" << endl;
        cout << "8. Nhap vao mot tu và xoa tu do tong chuoi da cho" << endl;
        cout << "0. Thoat." << endl;
        cout << "=== Chon yeu cau: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                const int MAX_SIZE = 100;
                int n;
                int a[MAX_SIZE];

                nhapMang(a, n);
                xuatMang(a, n);
                break;
            }
            case 2:
            {
                string nhap;
                cout << "Nhap chuoi: ";
                getline(cin, nhap);

                xuatKiTuHoa(nhap);
                break;
            }
            case 3:
            {
                string inputStr;
                cout << "Nhap chuoi: ";
                getline(cin, inputStr);

                reverseString(inputStr);

                cout << "Chuoi sau khi dao nguoc: " << inputStr << endl;
                break;
            }
            case 4:
            {
                
                break;
            }
            case 5:
            {
                
                break;
            }
            case 0:
                cout << "Thoat" << endl;
                break;
            default:
                cout << "Vui long chon lai" << endl;
        }
    } while (choice != 0);

    return 0;
}
