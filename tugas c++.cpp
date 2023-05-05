#include <iostream>
using namespace std;

class Buku {
    public:
        string jenis_buku;
        int harga_buku;
};



void print_invoice(int jumlah_buku, int total_harga) {
    cout << "================================" << endl;
    cout << "           INVOICE              " << endl;
    cout << "================================" << endl;
    cout << "Jumlah buku: " << jumlah_buku << endl;
    cout << "Total harga: Rp " << total_harga << endl;
    cout << "Terima kasih telah berbelanja!" << endl;
    cout << "================================" << endl;
}
//ini adalah
int hitung_diskon(int total_harga) {
    int diskon = 0;
    if (total_harga >= 500000) {
        diskon = total_harga * 0.1;
    }
    return diskon;
}

int hitung_total_harga(int harga_buku, int jumlah_buku) {
    int total_harga = harga_buku * jumlah_buku;
    return total_harga;
}

void beli_buku(Buku buku) {
    int jumlah_buku;
    cout << "Harga " << buku.jenis_buku << ": Rp " << buku.harga_buku << endl;
    cout << "Jumlah " << buku.jenis_buku << " yang ingin dibeli: ";
    cin >> jumlah_buku;
    int total_harga = hitung_total_harga(buku.harga_buku, jumlah_buku);
    int diskon = hitung_diskon(total_harga);
    int total_harga_setelah_diskon = total_harga - diskon;
    print_invoice(jumlah_buku, total_harga_setelah_diskon);
}

int main() {
    int pilihan;
    while (true) {
        print_menu();
        cout << "Pilih jenis buku yang ingin dibeli: ";
        cin >> pilihan;
        if (pilihan == 1) {
            Buku novel;
          novel.jenis_buku = "Novel";
            novel.harga_buku = 75000;
            beli_buku(novel);
        } else if (pilihan == 2) {
            Buku pelajaran;
            pelajaran.jenis_buku = "Buku Pelajaran";
            pelajaran.harga_buku = 100000;
            beli_buku(pelajaran);
        } else if (pilihan == 3) {
            Buku agama;
            agama.jenis_buku = "Buku Agama";
            agama.harga_buku = 50000;
            beli_buku(agama);
        } else if (pilihan == 4) {
            Buku komik;
            komik.jenis_buku = "Buku Komik";
            komik.harga_buku = 90000;
            beli_buku(komik);
        } else if (pilihan == 5) {
            cout << "Terima kasih telah menggunakan program ini!" << endl;
            break;
        } else {
            cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    }
return 0; }
