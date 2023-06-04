#include <iostream>
#include <vector>

int main() {
    // Deklarasi Array
    std::string makanan[5] = {"Soto", "Rawon", "Pecel", "Bakso", "Siomay"};
    int harga[5] = {15000, 20000, 10000, 12500, 25000};

    std::vector<std::string> makananDipilih;
    std::vector<int> jumlahPorsi;

    // Deklarasi variabel
    char input;
    int nomorMakanan;
    int porsi;

    int totalHarga = 0;
    int nomorMenu = 1;

    // Menampilkan Menu Makanan
    std::cout << "List Menu Makanan: " << std::endl;

    for(int i = 0; i < 5; i++) {
        std::cout << nomorMenu << ". " << makanan[i] << " @" << harga[i] << std::endl;
        nomorMenu++;
    }

    // Menggunakan do while 
    do {
        std::cout << "Pilih nomor menu makanan: ";
        std::cin >> nomorMakanan;
        makananDipilih.push_back(makanan[nomorMakanan-1]);

        std::cout << "Jumlah porsi: ";
        std::cin >> porsi;
        jumlahPorsi.push_back(porsi);

        totalHarga += harga[nomorMakanan-1] * porsi;

        std::cout << "Ingin pesan yang lain? (y/n): ";
        std::cin >> input;

    } while(input == 'Y' || input == 'y');

    // Menampilkan total harga
    std::cout << "Total Harga: " << std::endl;

    for(size_t i = 0; i < makananDipilih.size(); i++){
        std::cout << "\t-" << makananDipilih[i] << " @" << harga[i] << " * " << jumlahPorsi[i] << " = " << harga[i] * jumlahPorsi[i] << std::endl;
    }

    std::cout << "Total: " << totalHarga << std::endl;

    return 0;
}