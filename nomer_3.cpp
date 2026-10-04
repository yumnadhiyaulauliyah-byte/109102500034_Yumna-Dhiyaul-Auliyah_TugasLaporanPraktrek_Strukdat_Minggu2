#include <iostream>
using namespace std;

void inputArray(int arr[3][3], string namaArray) {
    cout << "--- Input " << namaArray << " (3x3) ---" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << namaArray << "[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarPosisi(int a[3][3], int b[3][3], int baris, int kolom) {
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3], B[3][3];
    int *ptr1, *ptr2;
    int baris, kolom;

    inputArray(A, "Array A");
    cout << endl;
    inputArray(B, "Array B");

    cout << "\n=== ISI ARRAY AWAL ===" << endl;
    cout << "Array A:" << endl; tampilArray(A);
    cout << "Array B:" << endl; tampilArray(B);

    cout << "\n=== PENUKARAN POSISI ===" << endl;
    cout << "Masukkan indeks baris (0-2) yang ingin ditukar : ";
    cin >> baris;
    cout << "Masukkan indeks kolom (0-2) yang ingin ditukar : ";
    cin >> kolom;

    tukarPosisi(A, B, baris, kolom);

    cout << "\nSetelah tukarPosisi [" << baris << "][" << kolom << "]:" << endl;
    cout << "Array A:" << endl; tampilArray(A);
    cout << "Array B:" << endl; tampilArray(B);

    ptr1 = &A[baris][kolom];
    ptr2 = &B[baris][kolom];
    tukarPointer(ptr1, ptr2);

    cout << "\nSetelah ditukar kembali dengan tukarPointer:" << endl;
    cout << "Array A:" << endl; tampilArray(A);
    cout << "Array B:" << endl; tampilArray(B);

    return 0;
}