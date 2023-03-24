#include <iostream>
using namespace std;

int arr[20];            //Membuat array dengan panjang data 20
int n;                 //Membuat Variable inputan n

void input() {          //Procedure Input
    while (true) {
        cout << "Masukkan Jumlah Data pada Array : ";           //Membuat Inputan jumlah element array
        cin >> n;                                               //Memanggil variable inputan n

        if (n <= 20) {                                          //Membuat kondisi n tidak lebih dari sama den 20
            break;
        }
        else {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen. \n";        //Menampilkan Pesan jika data lebih dari 20
        }
    }
    cout << endl;                                       //Membuat jarak per baris program
    cout << "======================" << endl;           //Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke- " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort() {
    
    int temp;
    int j;

    for (int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {

        }

    }
}