#include "../../std_lib_facilities.h"

int fact(int n){
	int a=1;
	for(int i=2; i<=n; i++){
		a*=i;
	}
	return a;
}

int ga[10]={1,2,4,8,16,32,64,128,512, 1024};

void f(int arr[], int n){
	int la[10];
	for(int i=0; i<10; i++){
		la[i]=ga[i];
		cout << la[i] << " ";
	}
	cout << endl;
	int *p=new int[n];
	for(int i=0; i<n; i++){
		p[i]=arr[i];
		cout << p[i] << " ";
	}
	cout << endl;
	delete [] p;
}

int main(){
	f(ga, 10);
	int aa[10];
	for(int i=0; i<10; i++){
		aa[i]=fact(i+1);	
	}
	f(aa, 10);
	

	return 0;
}