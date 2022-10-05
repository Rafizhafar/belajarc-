#include <iostream>
using namespace std; 

float luas_lingkaran(float r){
	float phi = 3.14;
	return phi * r *r;
}

int main(){
	float r, L;
	cout << "Menghitung luas lingkaran\n";
	cout << "==============================\n";
	cout << "Masukan jari-jari lingkaran: ";
	cin >> r;
	L = luas_lingkaran(r);
	cout << "Luas lingkaran dengan jari-jari " << r << " adalah " << L ;
	
	return 0;  
}
