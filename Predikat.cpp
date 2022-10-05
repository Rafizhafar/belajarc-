#include <iostream>
using namespace std;

int main()
{
	int nilai;
	cout<<"Masukan Nilai : "; cin>>nilai;
	if(nilai>50){
		cout<<"Lulus";
	}else if(nilai==50){
		cout<<"KKM";
	}else{
		cout<<"Tidak Lulus";
	}
}
