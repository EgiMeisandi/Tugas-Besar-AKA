#include <iostream>
using namespace std;

// Fungsi untuk mendeteksi potensi pencurian data secara iteratif
void cekDokumenBocorIteratif(int n, int idBocor) {
    for (int i = 1; i <= n; i++) {
        if (i == idBocor) {
            cout << "\nALERT: Dokumen dengan ID " << idBocor << " ditemukan bocor!" << endl;
            return;
        }
    }
    cout << "\nTidak ada dokumen yang bocor." << endl;
}

int main() {
    int n = 1000;  // Jumlah dokumen
    int idBocor = 500;  // Simulasi ID dokumen bocor

    cout << "Sistem Digital Forensic: Deteksi Potensi Pencurian Data" << endl;

    // Memeriksa dokumen secara iteratif
    cekDokumenBocorIteratif(n, idBocor);

    return 0;
}