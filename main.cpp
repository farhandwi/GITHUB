#include <iostream>
using namespace std;


int ADD(int a, int b){
  cout << "Fungsi Tambah" << endl;
  c = a+b;
  cout << a << " + " << b << " = " << c << endl;
  return c;

void ADD_MENU(int a, int b){
  cout << "Menambahkan Menu baru" << endl;
  cout << "Masukkan stok pertama: ";
  cin >> a;
  cout << "Masukkan stok kedua: ";
  cin >> b;
  
  cout <<< "Total stoknya adalah: " << a + b << endl;
}

int main(){
  cout << "Hello World" << endl;
  int a, b;
  a = 10;
  b = 11;
  if(a > b){
    cout << "Aku A" << endl;
  }else{
    cout << "Aku B" << endl;
  }
  
  return 0;
}
