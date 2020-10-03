#include "../../std_lib_facilities.h"
#include <float.h>

int main(){
	double a, max=DBL_MIN, min=DBL_MAX;

	while(cin >> a){
		if(a>max){
			max=a;
			cout << "Largest so far" << endl;
		}
		if(a<min){
			min=a;
			cout << "Smallest so far" << endl;
		}
	}

	return 0;
}