#include "../../std_lib_facilities.h"

void print_array10(ostream& os, int* a){
	for(int i=0; i<10; i++){
		os<< a[i] << " "; 
	}
	os << endl;
}

void print_array(ostream& os, int* a, int n){
	for(int i=0; i<n; i++){
		os<< a[i] << " "; 
	}
	os << endl;
}

void print_vector(ostream& os, vector<int>* v){
	for(int value: *v){
		os<< value << " "; 
	}
	os << endl;
}


int main(){

	int *p= new int [10];
	for(int i=0; i<10; i++){
		cout << p[i] << " ";
	}
	cout << endl;
	delete [] p;

	p= new int [10]{100,101,102,103,104,105,106,107,108,109};
	print_array10(cout, p);
	delete [] p;

	p= new int [11];
	for(int i=0; i<11; i++){
		p[i]=100+i;
	}

	print_array(cout, p, 11);
	delete [] p;

	p= new int [20];
	for(int i=0; i<20; i++){
		p[i]=100+i;
	}
	print_array(cout, p, 20);
	delete [] p;

	vector<int>* v=new vector<int>;
	for(int i=0; i<10; i++){
		v->push_back(100+i);
	}
	print_vector(cout, v);
	delete v;

	v=new vector<int>;
	for(int i=0; i<11; i++){
		v->push_back(100+i);
	}
	print_vector(cout, v);
	delete v;

	v=new vector<int>;
	for(int i=0; i<20; i++){
		v->push_back(100+i);
	}
	print_vector(cout, v);
	delete v;


	int *p1=new int(7);
	cout << p1 << " " << *p1 << endl;

	int *p2=new int[7]{1,2,4,8,16,32,64};
	cout << p2 << " ";
	for(int i=0; i<7; i++){
		cout << p2[i] << " ";
	}	
	cout << endl;

	int *p3=p2;
	p2=p1;
	p2=p3;
	cout << p1 << " " << *p1 << "\t" << p2 << " " << *p2 << endl;

	delete p1;
	delete []  p2;

	p1=new int[10];
	for(int i=0; i<10; i++){
		p1[i]=exp2(i);
	}

	p2=new int[10];
	for(int i=0; i<10; i++){
		p2[i]=p1[i];
	}

	print_array(cout, p2, 10);

	vector<int>* v1=new vector<int>;
	for(int i=0; i<10; i++){
		v1->push_back(exp2(i));
	}

	vector<int>* v2=new vector<int>;
	for(int value: *v1){
		v2->push_back(value);
	}	

	print_vector(cout, v2);



	return 0;
}