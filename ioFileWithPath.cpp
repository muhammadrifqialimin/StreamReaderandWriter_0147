#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;
    cout << "Masukkan Nama File : ";
    cin >> NamaFile;
    ofstream outfile;
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis file \'g\' untuk keluar" << endl;
}