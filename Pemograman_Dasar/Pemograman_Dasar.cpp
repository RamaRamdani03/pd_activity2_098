#include <iostream>
using namespace std;

float LuasPersegi(float p, float l) {
	return p * l;
}

float luasLingkaran(float r) {
	return 3.14 * r * r;
}

float luassegitiga(float a, float t) {
	return 0.5*a*t;
}

int main(){
	float panjang,lebar,jejari,alas,tinggi;
	int pilihan;

	cout << "=================" << endl;
	cout << "=====M E N U=====" << endl;
	cout << "=================" << endl;
	cout << "1. Luas Persegi Panjang" << endl;
	cout << "2. Luas Lingkaran" << endl;
	cout << "3. Luas segitiga" << endl;
	cout << "4. EXIT" << endl;
	cout << "\nPilihan (1/2/3/4) : ";
	cin >> pilihan ;

	switch (pilihan) {
		case 1 :
			cout << "masukan panjang = ";
			cin >> panjang;
			cout << "masukan lebarnya = ";
			cin >> lebar;
			cout << "luas persegipanjang = "
	}
}