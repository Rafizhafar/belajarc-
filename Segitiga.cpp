#include <iostream>
using namespace std;

int main ()
{
	int luas,keliling;
	int alas,tinggi,sisi;
	cout<<"Aplikasi Hitung Luas Segitiga"<<endl;
	cout<<"Masukan Alas"; cin>>alas;
	cout<<"Masukan Tinggi"; cin>>tinggi;
	luas=0.5*alas *tinggi;
	cout<<"Luas Segitiga ="<<luas<<endl;
	
	cout<<"Masukan sisi ="; cin>> sisi;
	keliling = sisi+sisi+sisi;
	cout<<"Keliling Segitiga ="<<keliling;
}

