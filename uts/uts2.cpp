#include <iostream>
using namespace std;

int main(){

    int a, b, jump, kal, bag, kur;
    cout<<"Masukkn Angka Pertama : ";
    cin>>a;
    cout<<"Masukkan Angka Kedua : ";
    cin>>b;
    jump = a + b;
    kur = a - b;
    kal = a * b;
    bag = a / b;
    cout<<"Penjumlahan = "<<jump;
    cout<<"\n Pengurangan = "<<kur;
    cout<<"\nPerkalian = "<<kal;
    cout<<"\nPembagian = "<<bag;

    return 0;
}