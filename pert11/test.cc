#include <iostream>
#include <fstream>

using namespace std;

int pilih;
char kembali;
void insert()
{
    string getdata;
    ofstream txt;
    txt.open("soalgenap.txt", ios::app);
    cout << "masukkan data anda: ";
    cin >> getdata;
    txt << getdata;
    txt << "\n";
    txt.close();
}
void view(){
    string getdata;
    ifstream txt ("soalgenap.txt");
    if(txt.is_open())
    {
        while(! txt.eof())
        {
            getline(txt, getdata);
            cout << getdata << endl;
        }
    }
}
int main(){
    do{
        cout<<"MENU";
        cout<<"\n 0. Create";
        cout<<"\n 1. Read ";
        cout<<"\n 2. Exit ";
        cout<<"\nPilih : "; cin>>pilih;
switch(pilih){
            case 0:
               insert();
               break;
            case 1:
				cout << "list data\n";
                view();
                break;
            case 2:
                cout<<"\nThanks"<<endl;
                return 0;
            default:
                cout<<"Pilihan Salah"<<endl;
                break;
            }
            cout<<"Ingin memilih menu lain (y/t)? ";
            cin>>kembali;
            cout<<endl;
        }
      
while (kembali!= 't');
        cout<<"Thanks"<<endl;
    return 0;
}