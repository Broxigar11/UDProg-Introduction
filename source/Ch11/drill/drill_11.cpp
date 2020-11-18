#include "../../std_lib_facilities.h"

int main(){
	int birth_year=2001;

	cout << birth_year << "(decimal) ";
	cout << "\t" << hex << birth_year << "(hexadecimal) ";
	cout << "\t" << oct << birth_year << "(octal) " << endl; 

	int age=19;
	cout << age << endl;
	cout << dec << age << "(decimal) ";
	cout << "\t" << hex << age << "(hexadecimal) ";
	cout << "\t " << oct << age << "(octal) "  << endl; 
	cout << dec;

	int a,b,c,d;
	cout << "\nEnter 4 numbers: " << endl;
	cin >> a >>oct >> b >> hex >> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

	cout << "\n" << 1234567.89 << "(defaultfloat) \t";
	cout << fixed << 1234567.89 << "(fixed) \t";
	cout << scientific << 1234567.89 << "(scientific)" << endl;
	cout << endl;

	cout << setw(8) << "Karafa" << setw(8) << "David" << setw(14) << "0991188666" << setw(25) << "karafa@asdmail.com" << endl;
	cout << setw(8) << "Nagy" << setw(8) << "Peti" << setw(14) << "0662288766" << setw(25) << "nagy@asdmail.com" << endl;
	cout << setw(8) << "Kicsi" << setw(8) << "Lajcsi" << setw(14) << "0993388996" << setw(25) << "kicsi@asdmail.com" << endl;
	cout << setw(8) << "Kozepes" << setw(8) << "Zoli" << setw(14) << "0991144666" << setw(25) << "kozepes@asdmail.com" << endl;
	cout << setw(8) << "Orias" << setw(8) << "Laci" << setw(14) << "0661338666" << setw(25) << "orias@asdmail.com" << endl;

	return 0;
}