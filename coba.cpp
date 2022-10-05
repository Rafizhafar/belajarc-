#include <iostream>
using namespace std;
int main()
{
	int luas1,luas2,keliling1,keliling2;
	int jari2;
	float pi;
	cin >> jari2;
	pi = 3.14;
	
	cout << "rumus luas lingkaran" << endl;
	luas1 = pi * jari2;
	luas2 = luas1 * jari2;
	cout << "L = pi * jari-jari *jari-jari" << endl;
	cout << " = " << pi << " * " << jari2 << " * " << jari2 << endl;
	cout << " =" << luas1 << " * " << jari2 << endl;
	  cout << " = " << luas2 << endl;
	  
	  cout << "rumus keliling lingkaran" << endl;
	  keliling1 = 2 * pi;
	  keliling2 = keliling1 * jari2;
	  cout << "k = 2 * pi * jari-jari" << endl;
	  cout << " = 2 * " << pi << " * " << jari2 << endl;
	  cout << " = " << keliling1 << " * " << jari2 << endl;
	  cout << " = " << keliling2 << endl;
	  
 }
