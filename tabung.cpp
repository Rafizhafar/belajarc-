#include <iostream>
using namespace std;

int main(){
	//Deklarasi variabel
	float r,t,l,v;
	float phi=3.14;
	
	cout<<"Program C++ Menghitung Luas & Volume Tabung"<<endl;
	cout<<endl;
	
	cout<<"Masukan Jari-jari : ";
	cin>>r;
	
	cout<<"Masukan Tinggi    : ";
	cin>>t;
	
	//Hitung luas tabung
	l=(2*phi*r*(r+t));
	
	//hitung volume tabung
	v=(phi*t*(r*r));
	
	
	cout<<endl;
	cout<<"Luas Balok	  : "<<l<<endl;
	cout<<"Volume Balok	  : "<<v<<endl;
}
