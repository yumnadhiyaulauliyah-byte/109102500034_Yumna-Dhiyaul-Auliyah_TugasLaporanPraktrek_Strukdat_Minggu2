#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;

    void hitungNilai() {
        nilaiAkhir = (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
    }
};

int main() {
    mahasiswa data[10];
    int n;

    do {
        cout << "Jumlah mahasiswa (max 10): ";
        cin >> n;
    } while (n < 1 || n > 10);

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : "; 
        getline(cin, data[i].nama);
        
        cout << "NIM    : "; 
        cin >> data[i].nim;
        cout << "UTS    : "; 
        cin >> data[i].uts;
        cout << "UAS    : "; 
        cin >> data[i].uas;
        cout << "Tugas  : "; 
        cin >> data[i].tugas;

        data[i].hitungNilai();

        cin.ignore();
    }

    cout << "\n=== Data Mahasiswa ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Nama        : " << data[i].nama << endl;
        cout << "   NIM         : " << data[i].nim << endl;
        cout << "   UTS         : " << data[i].uts << endl;
        cout << "   UAS         : " << data[i].uas << endl;
        cout << "   Tugas       : " << data[i].tugas << endl;
        cout << "   Nilai Akhir : " << data[i].nilaiAkhir << endl;
        cout << "-----------------------------------" << endl; // Pembatas antar mahasiswa
    }

    return 0;
}