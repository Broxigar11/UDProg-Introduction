#include "../../std_lib_facilities.h"

struct Point{
	double x, y;
};

int main(){
	vector<Point> original_points;
	cout << "Enter 7 (x,y) pairs!" << endl;
	for (int i=0; i<7; i++){
		Point p;
		cin >> p.x >> p.y;
		original_points.push_back(p);
	}

	for (Point p : original_points){
		cout << "(" << p.x << "," << p.y << ")" << endl;
	}

	ofstream ost;
 	ost.open("mydata.txt");

	for (Point p : original_points){
		ost << p.x << " " << p.y << endl;
	}
	ost.close();

	ifstream ist;
	ist.open("mydata.txt");
	vector<Point> processed_points;
	
	while(!ist.eof()){
		Point p;
		ist >> p.x >> p.y;
		if (ist) processed_points.push_back(p);	
	}
	
	cout << "\nOriginal vector:" << endl;
	for (Point p : original_points){
		cout << "(" << p.x << "," << p.y << ")" << endl;
	}

	cout << "\nProcessed vector: " << endl;
	for (Point p : processed_points){
		cout << "(" << p.x << "," << p.y << ")" << endl;
	}

	bool equal=1;

	if(original_points.size()!=processed_points.size())
		equal=0;
	else{
		for(int i=0; i<original_points.size(); i++){
			if (original_points[i].x!=processed_points[i].x || original_points[i].y!=processed_points[i].y){
				equal=0;
				break;
			}
		}
	}

	if(!equal) cout << "\nSomething's wrong!" << endl;
	

	return 0;
}