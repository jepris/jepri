#include <iostream>
using namespace std;

main()
{
    char jenis;
    int id, jumlah;

    cout<<"========== SELAMAT DATANG DI FUDO STORE ========"<<endl;
    cout<<"================================================"<<endl;
    cout<<"List game yang tersedia di toko kami!"<<endl;
    cout<<"M : Mobile legend, F : Free fire, P : PUBG Mobile";
    cout<<"pilih code game yang akan anda inginkan : "<<endl;
    cin>>jenis;
    if (jenis == 'M' | 'm') {
        cout<<"Masukkan ID anda : "<<endl;
		cin>>id;
        cout<<"masukkan jumlah yang anda inginkan : "<<endl;
		cin>>jumlah;
        cout<<"Anda ingin mengisi game "<<jenis<<" dengan ID "<<id<<" sejumlah "<<jumlah;
        cout<<"\n"<<endl;
    }
    else if (jenis == 'F' | 'f' ) {
        cout<<"Masukkan ID anda : ";cin>>id;
        cout<<"masukkan jumlah yang anda inginkan : ";cin>>jumlah;
        cout<<"Anda ingin mengisi game "<<jenis<<" dengan ID "<<id<<" sejumlah "<<jumlah;
        cout<<"\n"<<endl;
    }
    else if (jenis == 'P' | 'p' ) {
        cout<<"Masukkan ID anda : ";cin>>id;
        cout<<"masukkan jumlah yang anda inginkan : ";cin>>jumlah;
        cout<<"Anda ingin mengisi game "<<jenis<<" dengan ID "<<id<<" sejumlah "<<jumlah;
        cout<<"\n"<<endl;
    }
    else {
        cout<<"Maaf game tersebut tidak tersedia ^_^ "<<endl;
    }
    cout<<"Terima kasih sudah berkunjung ke Fudo Store"<<endl;

    return 0;
}