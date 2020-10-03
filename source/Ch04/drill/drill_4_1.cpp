#include "../../std_lib_facilities.h"

int main()
{
	double a, b;

	while(cin >> a >> b){
		cout << "a=" << a << "\t" << "b=" << b << endl;

		if(a==b)
			cout << "The numbers are equal." << endl;
		else if(abs(a-b)<0.01)
			cout << "The numbers are almost equal." << endl; 
		else if(a>b){
			cout << "The smaller value is: " << b << endl;
			cout << "The larger value is: " << a << endl;
		}else{
			cout << "The smaller value is: " << a << endl;
			cout << "The larger value is: " << b << endl;
		}
		
		
	}

	return 0;
}