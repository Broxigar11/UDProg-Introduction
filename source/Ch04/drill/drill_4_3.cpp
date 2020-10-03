#include "../../std_lib_facilities.h"
#include <float.h>

int main(){
	double a, a_in_m, sum=0, num=0, max=DBL_MIN, min=DBL_MAX;
	string unit;
	vector <double> values;

	cout << "Enter values with a unit(cm, m, in, ft):" << endl;
	while(cin >> a >> unit){
		if (unit!="cm" && unit!="m" && unit!="in" && unit!="ft"){
			cout << "ILLEGAL UNIT!" << endl;
		}else{
			if(unit=="cm")
				a_in_m=a/100;
			else if(unit=="in")
				a_in_m=a*2.54/100;
			else if(unit=="ft")
				a_in_m=a*12*2.54/100;
			else if(unit=="m")
				a_in_m=a;
			
			values.push_back(a_in_m);
			sum+=a_in_m;
			num++;
			if(max<a_in_m){
				max=a_in_m;
			}
			if(min>a_in_m){
				min=a_in_m;
			}  
		}
		//cout << "\nEnter a value with a unit(cm, m, in, ft):" << endl;
	}

	cout << endl << "The smallest value: " << min << "m" << endl;
	cout << "The largest value: " << max << "m" << endl;
	cout << "The number of values: " << num << endl;
	cout << "The sum of values : " << sum << "m" << endl;

	sort(values);
	cout << "\nAll values: " << endl;
	for(double value : values)
		cout << value << "m\n";
	



	return 0;
}