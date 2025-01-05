#include <iostream>
using namespace std;

// Fungsi untuk mendeteksi potensi pencurian data secara rekursif
void cekDokumenBocorRekursif(int current, int n, int idBocor) {
    if (current > n) {
        cout << "\nTidak ada dokumen yang bocor." << endl;
        return;
    }
    if (current == idBocor) {
        cout << "\nALERT: Dokumen dengan ID " << idBocor << " ditemukan bocor!" << endl;
        return;
    }
    cekDokumenBocorRekursif(current + 1, n, idBocor);
}

int main() {
    int n = 1000;  // Jumlah dokumen
    int idBocor = 500;  // Simulasi ID dokumen bocor

    cout << "Sistem Digital Forensic: Deteksi Potensi Pencurian Data" << endl;

    // Memeriksa dokumen secara rekursif
    cekDokumenBocorRekursif(1, n, idBocor);

    return 0;
}