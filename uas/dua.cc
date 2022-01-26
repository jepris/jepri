#include <iostream>
using namespace std;

void CetakNama(string nm);
void CetakNim(string nim);

int main(){
    string nama;
    string nim;
    
    cout << "Masukan Nama : ";
    getline(cin, nama);
    cout << "Masukan NIM : ";
    cin>>nim;
    
    CetakNama(nama);
    CetakNim(nim);
}

void CetakNama(string nma){
    cout << "Nama : " << nma << endl;
    cout << "Alamat Nama : " << &nma << endl;
}

void CetakNim(string nm){
    cout << "NIm : " << nm << endl;
    cout << "Alamat Nim : " << &nm << endl;
}