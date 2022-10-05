#include <iostream>
#include <string>
using namespace std;

void say_hello(string nama){
	cout <<"hello" <<nama<<endl;
	
}
void tambah(int angka1,int angka2){
	printf("Penjumlahan %d + %d = %d"
	angka1, angka2,angka1+angka2);
}
int main(){
	say_hello("Algis");
	tambah(10,5);
	tambah(20,10);
	tambah(25,25);
}

int main(){
	say_hello("Algis");
	say_hello("Osep");
}
