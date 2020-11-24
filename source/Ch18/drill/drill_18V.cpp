#include "../../std_lib_facilities.h"

int fact(int n){
	int a=1;
	for(int i=2; i<=n; i++){
		a*=i;
	}
	return a;
}

vector<int> gv{1,2,4,8,16,32,64,128,512,1024};

void f(vector<int> av){
	vector<int> lv(av.size(), 0);
	for(int i=0; i<gv.size(); i++){
		lv[i]=gv[i];
		cout << lv[i] << " ";
	}
	cout << endl;
	
	vector<int> lv2(av);
	for(int elem: av){
		cout << elem << " ";
	}
	cout << endl;	
}

int main(){
	f(gv);
	vector<int> vv;
	for(int i=0; i<10; i++){
		vv.push_back(fact(i+1));	
	}
	f(vv);

	return 0;
}