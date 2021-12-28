#include <iostream>
using namespace std;
 
class Laptop {
  public:
    void hidupkanLaptop(string pemilik, string merk) {
     cout << "Hidupkan Laptop " << merk << " Milik " << pemilik;
     cout << endl;
   }
};
 
int main(){
 
  Laptop laptopAnto, LaptopBambang;
 
  laptopAnto.hidupkanLaptop("Anto","Asus");
  LaptopBambang.hidupkanLaptop("Bambang","ROG");

  return 0;
}
